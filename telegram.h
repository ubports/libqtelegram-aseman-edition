/*
 * Copyright 2014 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
 */

#ifndef TELEGRAM_H
#define TELEGRAM_H

#include <QObject>
#include <QMap>
#include <QLoggingCategory>
#include <QSharedPointer>
#include <QSettings>

#include "libqtelegram_global.h"
#include "telegram/types/types.h"
#include "secret/secretchat.h"
#include "telegram/customtypes/customtypes.h"
#include "telegram/telegramcore.h"

Q_DECLARE_LOGGING_CATEGORY(TG_LIB_API)
Q_DECLARE_LOGGING_CATEGORY(TG_LIB_SECRET)

#define TG_UPLOAD_GET_FILE_CUSTOM_CALLBACK \
    TG_CALLBACK_SIGNATURE(UploadGetFile)
#define TG_UPLOAD_SEND_FILE_CUSTOM_CALLBACK \
    TG_CALLBACK_SIGNATURE(UploadSendFile)
#define TG_UPLOAD_SEND_PHOTO_CUSTOM_CALLBACK \
    TG_CALLBACK_SIGNATURE(UploadSendPhoto)


class Settings;
class CryptoUtils;
class TelegramPrivate;
class FileOperation;
class LIBQTELEGRAMSHARED_EXPORT Telegram : public TelegramCore
{
    Q_OBJECT
    friend class TelegramPrivate;

public:
    Telegram(const QString &defaultHostAddress, qint16 defaultHostPort, qint16 defaultHostDcId, qint32 appId, const QString &appHash,
             const QString &phoneNumber, const QString &configPath = QString("~/.telegram"), const QString &publicKeyFile = QString("tg.pub"));
    ~Telegram();

    QString defaultHostAddress();
    qint16 defaultHostPort();
    qint16 defaultHostDcId();
    qint32 appId();
    QString appHash();

    Settings *settings() const;
    CryptoUtils *crypto() const;

    static void setDefaultSettingsFormat(const QSettings::Format &format);
    static QSettings::Format defaultSettingsFormat();

    // Registration / authorization
    qint64 authCheckPhone();
    qint64 authCheckPhone(const QString &phoneNumber);
    qint64 authSendCode();
    qint64 authSendSms();
    qint64 authSignIn(const QString &code);
    qint64 authSignUp(const QString &code, const QString &firstName, const QString &lastName);
    qint64 authSendCall();
    qint64 authLogOut();
    qint64 authSendInvites(const QStringList &phoneNumbers, const QString &inviteText); //Saves information that the current user sent SMS-messages with invitations to its unregistered contacts.
    qint64 authResetAuthorizations();
    qint64 authCheckPassword(const QByteArray &passwordHash);

    // Working with push notifications. Settings
    qint64 accountRegisterDevice(const QString &token, const QString &appVersion = QString::null, bool appSandbox = false);
    qint64 accountUnregisterDevice(const QString &token);
    qint64 accountUpdateNotifySettings(const InputNotifyPeer &peer, const InputPeerNotifySettings &settings);
    qint64 accountGetNotifySettings(const InputNotifyPeer &peer);
    qint64 accountResetNotifySettings();
    qint64 accountUpdateProfile(const QString &firstName, const QString &lastName);
    qint64 accountUpdateStatus(bool offline);
    qint64 accountGetWallPapers();
    qint64 accountCheckUsername(const QString &username);
    qint64 accountUpdateUsername(const QString &username);
    qint64 accountGetPrivacy(const InputPrivacyKey &key);
    qint64 accountSetPrivacy(const InputPrivacyKey &key, const QList<InputPrivacyRule> &rules);
    qint64 accountDeleteAccount(const QString &reason);
    qint64 accountGetAccountTTL();
    qint64 accountSetAccountTTL(const AccountDaysTTL &ttl);
    qint64 accountUpdateDeviceLocked(int period);
    qint64 accountSendChangePhoneCode(const QString &phone_number);
    qint64 accountChangePhone(const QString &phone_number, const QString &phone_code_hash, const QString &phone_code);

    //Passwords
    qint64 accountGetPassword();
    qint64 accountGetAuthorizations();
    qint64 accountResetAuthorization(qint64 hash);
    qint64 accountGetPasswordSettings(const QByteArray &currentPasswordHash);
    qint64 accountUpdatePasswordSettings(const QByteArray &currentPasswordHash, const AccountPasswordInputSettings &newSettings);

    //Photos
    qint64 photosUploadProfilePhoto(const QByteArray &bytes, const QString &fileName, const QString &caption = QString::null, const InputGeoPoint &geoPoint = InputGeoPoint(InputGeoPoint::typeInputGeoPointEmpty), const InputPhotoCrop &crop = InputPhotoCrop(InputPhotoCrop::typeInputPhotoCropAuto));
    qint64 photosUploadProfilePhoto(const QString &filePath, const QString &caption = QString::null, const InputGeoPoint &geoPoint = InputGeoPoint(InputGeoPoint::typeInputGeoPointEmpty), const InputPhotoCrop &crop = InputPhotoCrop(InputPhotoCrop::typeInputPhotoCropAuto));
    qint64 photosUpdateProfilePhoto(qint64 photoId, qint64 accessHash, const InputPhotoCrop &crop = InputPhotoCrop(InputPhotoCrop::typeInputPhotoCropAuto));

    // Working with users
    qint64 usersGetUsers (const QList<InputUser> &users);
    qint64 usersGetFullUser (const InputUser &user);
    qint64 photosGetUserPhotos (const InputUser &user, qint32 offset = 0, qint32 maxId = 0, qint32 limit = 0);

    // Working with contacts
    qint64 contactsGetStatuses();
    qint64 contactsGetContacts();
    qint64 contactsImportContacts (const QList<InputContact> &contacts, bool replace);
    qint64 contactsDeleteContact(const InputUser &user);
    qint64 contactsDeleteContacts(const QList<InputUser> &users);
    qint64 contactsSearch(const QString &q, qint32 limit = 0);
    qint64 contactsResolveUsername(const QString &username);

    // Working with blacklist
    qint64 contactsBlock(const InputUser &user);
    qint64 contactsUnblock(const InputUser &user);
    qint64 contactsGetBlocked(qint32 offset = 0, qint32 limit = 0);

    // Working with messages
    qint64 messagesSendMessage (const InputPeer &peer, qint64 randomId, const QString &message, int replyToMsgId = 0);
    qint64 messagesSendPhoto(const InputPeer &peer, qint64 randomId, const QByteArray &bytes, const QString &fileName, qint32 replyToMsgId = 0);
    qint64 messagesSendPhoto(const InputPeer &peer, qint64 randomId, const QString &filePath, qint32 replyToMsgId = 0);
    qint64 messagesSendGeoPoint(const InputPeer &peer, qint64 randomId, const InputGeoPoint &InputGeoPoint, qint32 replyToMsgId = 0);
    qint64 messagesSendContact(const InputPeer &peer, qint64 randomId, const QString &phoneNumber, const QString &firstName, const QString &lastName, qint32 replyToMsgId = 0);
    qint64 messagesSendVideo(const InputPeer &peer, qint64 randomId, const QByteArray &bytes, const QString &fileName, qint32 duration, qint32 width, qint32 height, const QString &mimeType, const QByteArray &thumbnailBytes = 0, const QString &thumbnailName = QString::null, qint32 replyToMsgId = 0);
    qint64 messagesSendVideo(const InputPeer &peer, qint64 randomId, const QString &filePath, qint32 duration, qint32 width, qint32 height, const QString &thumbnailFilePath = QString::null, qint32 replyToMsgId = 0);
    qint64 messagesSendAudio(const InputPeer &peer, qint64 randomId, const QByteArray &bytes, const QString &fileName, qint32 duration, const QString &mimeType, qint32 replyToMsgId = 0);
    qint64 messagesSendAudio(const InputPeer &peer, qint64 randomId, const QString &filePath, qint32 duration, qint32 replyToMsgId = 0);
    qint64 messagesSendDocument(const InputPeer &peer, qint64 randomId, const QByteArray &bytes, const QString &fileName, const QString &mimeType, const QByteArray &thumbnailBytes = 0, const QString &thumbnailName = QString::null, const QList<DocumentAttribute> &extraAttributes = QList<DocumentAttribute>(), qint32 replyToMsgId = 0);
    qint64 messagesSendDocument(const InputPeer &peer, qint64 randomId, const QString &filePath, const QString &thumbnailFilePath = QString::null, bool sendAsSticker = false, qint32 replyToMsgId = 0);
    qint64 messagesForwardPhoto(const InputPeer &peer, qint64 randomId, qint64 photoId, qint64 accessHash, qint32 replyToMsgId = 0);
    qint64 messagesForwardVideo(const InputPeer &peer, qint64 randomId, qint64 videoId, qint64 accessHash, qint32 replyToMsgId = 0);
    qint64 messagesForwardAudio(const InputPeer &peer, qint64 randomId, qint64 audioId, qint64 accessHash, qint32 replyToMsgId = 0);
    qint64 messagesForwardDocument(const InputPeer &peer, qint64 randomId, qint64 documentId, qint64 accessHash, qint32 replyToMsgId = 0);
    qint64 messagesSetTyping(const InputPeer &peer, const SendMessageAction &action);
    qint64 messagesGetMessages(const QList<qint32> &msgIds);
    qint64 messagesGetDialogs(qint32 offset = 0, qint32 maxId = 0, qint32 limit = 0);
    qint64 messagesGetHistory(const InputPeer &peer, qint32 offset = 0, qint32 maxId = 0, qint32 limit = 0);
    qint64 messagesSearch(const InputPeer &peer, const QString &query, const MessagesFilter &filter, qint32 minDate = 0, qint32 maxDate = 0, qint32 offset = 0, qint32 maxId = 0, qint32 limit = 0);
    qint64 messagesReadHistory(const InputPeer &peer, qint32 maxId = 0, qint32 offset = 0);
    qint64 messagesReadMessageContents(const QList<qint32> &ids);
    qint64 messagesDeleteHistory(const InputPeer &peer, qint32 offset = 0);
    qint64 messagesDeleteMessages(const QList<qint32> &msgIds);
    qint64 messagesReceivedMessages(qint32 maxId);
    qint64 messagesForwardMessage(const InputPeer &peer, qint32 msgId);
    qint64 messagesForwardMessages(const InputPeer &peer, const QList<qint32> &msgIds, const QList<qint64> &randomIds);
    qint64 messagesSendBroadcast(const QList<InputUser> &users, const QList<qint64> &randomIds, const QString &message, const InputMedia &media);

    // Working with chats
    qint64 messagesGetChats(const QList<qint32> &chatIds);
    qint64 messagesGetFullChat(qint32 chatId);
    qint64 messagesEditChatTitle(qint32 chatId, const QString &title);
    qint64 messagesEditChatPhoto(qint32 chatId, const QString &filePath, const InputPhotoCrop &crop = InputPhotoCrop(InputPhotoCrop::typeInputPhotoCropAuto));
    qint64 messagesEditChatPhoto(qint32 chatId, qint64 photoId, qint64 accessHash, const InputPhotoCrop &crop = InputPhotoCrop(InputPhotoCrop::typeInputPhotoCropAuto));
    qint64 messagesAddChatUser(qint32 chatId, const InputUser &user, qint32 fwdLimit = 0); // Adds a user to a chat and sends a service message on it.
    qint64 messagesDeleteChatUser(qint32 chatId, const InputUser &user);
    qint64 messagesCreateChat(const QList<InputUser> &users, const QString &chatTopic);

    // Working with secret chats
    qint64 messagesCreateEncryptedChat(const InputUser &user); //this method involves all DH key exchange and encrypted chat creation
    qint64 messagesAcceptEncryptedChat(qint32 chatId);
    qint64 messagesDiscardEncryptedChat(qint32 chatId);
    qint64 messagesSetEncryptedTyping(qint32 chatId, bool typing);
    qint64 messagesSetEncryptedTTL(qint64 randomId, qint32 chatId, qint32 ttl);
    qint64 messagesReadEncryptedHistory(qint32 chatId, qint32 maxDate);
    qint64 messagesSendEncrypted(qint32 chatId, qint64 randomId, qint32 ttl, const QString &text);
    qint64 messagesSendEncryptedPhoto(qint32 chatId, qint64 randomId, qint32 ttl, const QString &filePath);
    qint64 messagesSendEncryptedVideo(qint32 chatId, qint64 randomId, qint32 ttl, const QString &filePath, qint32 duration, qint32 width, qint32 height, const QByteArray &thumbnailBytes);
    qint64 messagesSendEncryptedDocument(qint32 chatId, qint64 randomId, qint32 ttl, const QString &filePath);
    qint64 messagesReceivedQueue(qint32 maxQts);

    qint64 messagesSendEncryptedFile(const InputEncryptedChat &chat, const InputEncryptedFile &file);//needed?
    qint64 messagesSendEncryptedService(const InputEncryptedChat &chat, const DecryptedMessageAction &action);//needed?

    // Stickers
    qint64 messagesGetStickers(const QString &emoticon, const QString &hash);
    qint64 messagesGetAllStickers(const QString &hash);
    qint64 messagesGetStickerSet(const InputStickerSet &stickerset);
    qint64 messagesInstallStickerSet(const InputStickerSet &stickerset);
    qint64 messagesUninstallStickerSet(const InputStickerSet &stickerset);

    // Invites
    qint64 messagesExportChatInvite(qint32 chatId);
    qint64 messagesCheckChatInvite(const QString &hash);
    qint64 messagesImportChatInvite(const QString &hash);

    // Working with updates
    qint64 updatesGetState();
    qint64 updatesGetDifference(qint32 pts, qint32 date, qint32 qts);

    // Working with files
    qint64 uploadGetFile(const InputFileLocation &file, qint32 fileSize, qint32 dc = 0, const QByteArray &key = QByteArray(), const QByteArray &iv = QByteArray());
    qint64 uploadCancelFile(qint64 fileId);

    // additional public methods
    void init(qint32 timeout);
    void init();
    bool isConnected();
    bool isLoggedIn();
    qint32 ourId();
    void setPhoneNumber(const QString &phoneNumber);

    // sleep / wake
    bool sleep();
    bool wake();
    bool isSlept() const;

Q_SIGNALS:
    // Errors
    void error(qint64 id, qint32 errorCode, const QString &errorText, const QString &functionName = QString());

    // Registration / authorization
    void authNeeded();
    void authLoggedIn();

    // Working with secret chats
    void messagesCreateEncryptedChatAnswer(qint32 chatId, qint32 date, qint32 peerId, qint64 accessHash);
    void messagesEncryptedChatRequested(qint32 chatId, qint32 date, qint32 peerId, qint64 accessHash);
    void messagesEncryptedChatCreated(qint32 chatId, qint32 date, qint32 peerId, qint64 accessHash);
    void messagesEncryptedChatDiscarded(qint32 chatId);
    void messagesSetEncryptedTypingAnswer(qint64 id, bool ok);
    void messagesReadEncryptedHistoryAnswer(qint64 id, bool ok);
    void messagesSendEncryptedAnswer(qint64 id, qint32 date, const EncryptedFile &encryptedFile = EncryptedFile()); // messagesSentEncryptedMessage/messagesSentEncryptedFile
    void messagesSendEncryptedFileAnswer(qint64 id, qint32 date, const EncryptedFile &encryptedFile = EncryptedFile()); // messagesSentEncryptedMessage/messagesSentEncryptedFile
    void messagesSendEncryptedServiceAnswer(qint64 id, qint32 date, EncryptedFile encryptedFile = EncryptedFile()); // messagesSentEncryptedMessage/messagesSentEncryptedFile

    // Working with updates
    void updatesGetDifferenceAnswer(qint64 id, const QList<Message> &messages, const QList<SecretChatMessage> &secretChatMessages, const QList<Update> &otherUpdates, const QList<Chat> &chats, const QList<User> &users, const UpdatesState &state, bool isIntermediateState);

    // Working with files
    void uploadGetFileAnswer(qint64 fileId, const StorageFileType &type, qint32 mtime, const QByteArray &bytes, qint32 partId, qint32 downloaded, qint32 total);
    void uploadCancelFileAnswer(qint64 fileId, bool cancelled);
    void uploadSendFileAnswer(qint64 fileId, qint32 partId, qint32 uploaded, qint32 totalSize);


    // Updates
    void updatesTooLong();
    void updateShortMessage(qint32 id, qint32 userId, const QString &message, qint32 pts, qint32 pts_count, qint32 date, qint32 fwd_from_id, qint32 fwd_date, qint32 reply_to_msg_id, bool unread, bool out);
    void updateShortChatMessage(qint32 id, qint32 fromId, qint32 chatId, const QString &message, qint32 pts, qint32 pts_count, qint32 date, qint32 fwd_from_id, qint32 fwd_date, qint32 reply_to_msg_id, bool unread, bool out);
    void updateShort(const Update &update, qint32 date);
    void updatesCombined(const QList<Update> &updates, const QList<User> &users, const QList<Chat> &chats, qint32 date, qint32 seqStart, qint32 seq);
    void updates(const QList<Update> &udts, const QList<User> &users, const QList<Chat> &chats, qint32 date, qint32 seq);

    void updateSecretChatMessage(const SecretChatMessage &secretChatMessage, qint32 qts);

    // Additional signals
    void disconnected();
    void connected();
    void woken();

    void fatalError();

protected:
    enum LibraryState {
        LoggedOut,
        CreatedSharedKeys,
        LoggedIn
    };

    enum LastRetryType {
        PhoneCheck,
        GetInviteText,
        ImportContacts,
        NotRetry
    };

private:
    qint64 uploadSendFile(FileOperation &op, int mediaType, const QString &fileName, const QByteArray &bytes, const QByteArray &thumbnailBytes = 0, const QString &thumbnailName = QString::null);
    qint64 uploadSendFile(FileOperation &op, int mediaType, const QString &filePath, const QString &thumbnailPath = QString::null);
    void processSecretChatUpdate(const Update &update);
    qint64 generateGAorB(SecretChat *secretChat);
    void createSharedKey(SecretChat * secretChat, BIGNUM *p, QByteArray gAOrB);
    SecretChatMessage toSecretChatMessage(const EncryptedMessage &encryptedMessage);
    void processDifferences(qint64 id, const QList<Message> &messages, const QList<EncryptedMessage> &newEncryptedMessages, const QList<Update> &otherUpdates, const QList<Chat> &chats, const QList<User> &users, const UpdatesState &state, bool isIntermediateState);
    void authorizeUser(qint64 id, const User &user);
    void messagesDhConfigNotModified(qint64 msgId, const QByteArray &random);

protected:
    void onAuthSendCodeAnswer(qint64 msgId, const AuthSentCode &result, const QVariant &attachedData);
    void onAuthSignUpAnswer(qint64 msgId, const AuthAuthorization &result, const QVariant &attachedData);
    void onAuthSignInAnswer(qint64 msgId, const AuthAuthorization &result, const QVariant &attachedData);
    void onAuthCheckPasswordAnswer(qint64 msgId, const AuthAuthorization &result, const QVariant &attachedData);
    //void onAuthImportBotAuthorizationAnswer(qint64 msgId, const AuthAuthorization &result, const QVariant &attachedData);
    void onAuthLogOutAnswer(qint64 id, bool ok, const QVariant &attachedData);
    void onContactsGetContactsAnswer(qint64 msgId, const ContactsContacts &result, const QVariant &attachedData);
    void onMessagesGetDhConfigAnswer(qint64 msgId, const MessagesDhConfig &result, const QVariant &attachedData);
    void onUpdatesGetDifferenceAnswer(qint64 msgId, const UpdatesDifference &result, const QVariant &attachedData);
    void onMessagesAcceptEncryptionAnswer(qint64 msgId, const EncryptedChat &result, const QVariant &attachedData);
    void onMessagesDiscardEncryptionAnswer(qint64 msgId, bool result, const QVariant &attachedData);

private Q_SLOTS:
    void onError(qint64 id, qint32 errorCode, const QString &errorText, const QString &functionName, const QVariant &attachedData, bool &accepted);
    void onDcProviderReady();
    void onAuthLoggedIn();
    void onErrorRetry(qint64 id, qint32 errorCode, const QString &errorText);
    void onAuthCheckPhoneDcChanged();
    void onHelpGetInviteTextDcChanged();
    void onImportContactsDcChanged();

    void onContactsImportContactsAnswer();
    void onMessagesRequestEncryptionEncryptedChat(qint64 msgId, const EncryptedChat &chat);

    // secret chats slots
    void onUpdateShort(const Update &update);
    void onUpdatesCombined(const QList<Update> &updates);
    void onUpdates(const QList<Update> &udts);
    void onMessagesAcceptEncryptionEncryptedChat(qint64, const EncryptedChat &chat);
    void onMessagesDiscardEncryptionResult(qint64, bool ok);
    void onSequenceNumberGap(qint32 chatId, qint32 startSeqNo, qint32 endSeqNo);

protected:
    void timerEvent(QTimerEvent *e);

private:
    TelegramPrivate *prv;
};

Q_DECLARE_METATYPE(Telegram*)

#endif // TELEGRAM_H
