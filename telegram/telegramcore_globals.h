// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef TELEGRAMCORE_GLOBALS_H
#define TELEGRAMCORE_GLOBALS_H

#include <QtGlobal>
#include "telegram/types/types.h"

#define TG_CALLBACK_SIGNATURE(RETURN_TYPE) \
    qint64 msgId, RETURN_TYPE result, TelegramCore::CallbackError error

#define TG_ACCOUNT_REGISTER_DEVICE_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_UNREGISTER_DEVICE_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_UPDATE_NOTIFY_SETTINGS_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_GET_NOTIFY_SETTINGS_CALLBACK \
    TG_CALLBACK_SIGNATURE(PeerNotifySettings)
#define TG_ACCOUNT_RESET_NOTIFY_SETTINGS_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_UPDATE_PROFILE_CALLBACK \
    TG_CALLBACK_SIGNATURE(User)
#define TG_ACCOUNT_UPDATE_STATUS_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_GET_WALL_PAPERS_CALLBACK \
    TG_CALLBACK_SIGNATURE(QList<WallPaper>)
#define TG_ACCOUNT_CHECK_USERNAME_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_UPDATE_USERNAME_CALLBACK \
    TG_CALLBACK_SIGNATURE(User)
#define TG_ACCOUNT_GET_PRIVACY_CALLBACK \
    TG_CALLBACK_SIGNATURE(AccountPrivacyRules)
#define TG_ACCOUNT_SET_PRIVACY_CALLBACK \
    TG_CALLBACK_SIGNATURE(AccountPrivacyRules)
#define TG_ACCOUNT_DELETE_ACCOUNT_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_GET_ACCOUNT_T_T_L_CALLBACK \
    TG_CALLBACK_SIGNATURE(AccountDaysTTL)
#define TG_ACCOUNT_SET_ACCOUNT_T_T_L_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_SEND_CHANGE_PHONE_CODE_CALLBACK \
    TG_CALLBACK_SIGNATURE(AccountSentChangePhoneCode)
#define TG_ACCOUNT_CHANGE_PHONE_CALLBACK \
    TG_CALLBACK_SIGNATURE(User)
#define TG_ACCOUNT_UPDATE_DEVICE_LOCKED_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_GET_PASSWORD_CALLBACK \
    TG_CALLBACK_SIGNATURE(AccountPassword)
#define TG_ACCOUNT_GET_AUTHORIZATIONS_CALLBACK \
    TG_CALLBACK_SIGNATURE(AccountAuthorizations)
#define TG_ACCOUNT_RESET_AUTHORIZATION_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_ACCOUNT_GET_PASSWORD_SETTINGS_CALLBACK \
    TG_CALLBACK_SIGNATURE(AccountPasswordSettings)
#define TG_ACCOUNT_UPDATE_PASSWORD_SETTINGS_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)

#define TG_AUTH_CHECK_PHONE_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthCheckedPhone)
#define TG_AUTH_SEND_CODE_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthSentCode)
#define TG_AUTH_SEND_CALL_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_AUTH_SIGN_UP_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthAuthorization)
#define TG_AUTH_SIGN_IN_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthAuthorization)
#define TG_AUTH_LOG_OUT_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_AUTH_RESET_AUTHORIZATIONS_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_AUTH_SEND_INVITES_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_AUTH_EXPORT_AUTHORIZATION_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthExportedAuthorization)
#define TG_AUTH_IMPORT_AUTHORIZATION_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthAuthorization)
#define TG_AUTH_BIND_TEMP_AUTH_KEY_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_AUTH_SEND_SMS_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_AUTH_CHECK_PASSWORD_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthAuthorization)
#define TG_AUTH_REQUEST_PASSWORD_RECOVERY_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthPasswordRecovery)
#define TG_AUTH_RECOVER_PASSWORD_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthAuthorization)
#define TG_AUTH_IMPORT_BOT_AUTHORIZATION_CALLBACK \
    TG_CALLBACK_SIGNATURE(AuthAuthorization)

#define TG_CONTACTS_GET_STATUSES_CALLBACK \
    TG_CALLBACK_SIGNATURE(QList<ContactStatus>)
#define TG_CONTACTS_GET_CONTACTS_CALLBACK \
    TG_CALLBACK_SIGNATURE(ContactsContacts)
#define TG_CONTACTS_IMPORT_CONTACTS_CALLBACK \
    TG_CALLBACK_SIGNATURE(ContactsImportedContacts)
#define TG_CONTACTS_SEARCH_CALLBACK \
    TG_CALLBACK_SIGNATURE(ContactsFound)
#define TG_CONTACTS_DELETE_CONTACT_CALLBACK \
    TG_CALLBACK_SIGNATURE(ContactsLink)
#define TG_CONTACTS_DELETE_CONTACTS_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_CONTACTS_BLOCK_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_CONTACTS_UNBLOCK_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_CONTACTS_GET_BLOCKED_CALLBACK \
    TG_CALLBACK_SIGNATURE(ContactsBlocked)
#define TG_CONTACTS_EXPORT_CARD_CALLBACK \
    TG_CALLBACK_SIGNATURE(QList<qint32>)
#define TG_CONTACTS_IMPORT_CARD_CALLBACK \
    TG_CALLBACK_SIGNATURE(User)
#define TG_CONTACTS_RESOLVE_USERNAME_CALLBACK \
    TG_CALLBACK_SIGNATURE(User)
#define TG_CONTACTS_GET_SUGGESTED_CALLBACK \
    TG_CALLBACK_SIGNATURE(ContactsSuggested)

#define TG_HELP_GET_CONFIG_CALLBACK \
    TG_CALLBACK_SIGNATURE(Config)
#define TG_HELP_GET_NEAREST_DC_CALLBACK \
    TG_CALLBACK_SIGNATURE(NearestDc)
#define TG_HELP_GET_APP_UPDATE_CALLBACK \
    TG_CALLBACK_SIGNATURE(HelpAppUpdate)
#define TG_HELP_SAVE_APP_LOG_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_HELP_GET_INVITE_TEXT_CALLBACK \
    TG_CALLBACK_SIGNATURE(HelpInviteText)
#define TG_HELP_GET_SUPPORT_CALLBACK \
    TG_CALLBACK_SIGNATURE(HelpSupport)
#define TG_HELP_GET_APP_CHANGELOG_CALLBACK \
    TG_CALLBACK_SIGNATURE(HelpAppChangelog)

#define TG_MESSAGES_GET_MESSAGES_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesMessages)
#define TG_MESSAGES_GET_DIALOGS_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesDialogs)
#define TG_MESSAGES_GET_HISTORY_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesMessages)
#define TG_MESSAGES_SEARCH_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesMessages)
#define TG_MESSAGES_READ_HISTORY_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesAffectedHistory)
#define TG_MESSAGES_DELETE_HISTORY_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesAffectedHistory)
#define TG_MESSAGES_DELETE_MESSAGES_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesAffectedMessages)
#define TG_MESSAGES_RECEIVED_MESSAGES_CALLBACK \
    TG_CALLBACK_SIGNATURE(QList<ReceivedNotifyMessage>)
#define TG_MESSAGES_SET_TYPING_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_MESSAGES_SEND_MESSAGE_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_SEND_MEDIA_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_FORWARD_MESSAGES_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_GET_CHATS_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesChats)
#define TG_MESSAGES_GET_FULL_CHAT_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesChatFull)
#define TG_MESSAGES_EDIT_CHAT_TITLE_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_EDIT_CHAT_PHOTO_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_ADD_CHAT_USER_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_DELETE_CHAT_USER_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_CREATE_CHAT_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_FORWARD_MESSAGE_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_GET_DH_CONFIG_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesDhConfig)
#define TG_MESSAGES_REQUEST_ENCRYPTION_CALLBACK \
    TG_CALLBACK_SIGNATURE(EncryptedChat)
#define TG_MESSAGES_ACCEPT_ENCRYPTION_CALLBACK \
    TG_CALLBACK_SIGNATURE(EncryptedChat)
#define TG_MESSAGES_DISCARD_ENCRYPTION_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_MESSAGES_SET_ENCRYPTED_TYPING_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_MESSAGES_READ_ENCRYPTED_HISTORY_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_MESSAGES_SEND_ENCRYPTED_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesSentEncryptedMessage)
#define TG_MESSAGES_SEND_ENCRYPTED_FILE_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesSentEncryptedMessage)
#define TG_MESSAGES_SEND_ENCRYPTED_SERVICE_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesSentEncryptedMessage)
#define TG_MESSAGES_RECEIVED_QUEUE_CALLBACK \
    TG_CALLBACK_SIGNATURE(QList<qint64>)
#define TG_MESSAGES_READ_MESSAGE_CONTENTS_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesAffectedMessages)
#define TG_MESSAGES_GET_STICKERS_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesStickers)
#define TG_MESSAGES_GET_ALL_STICKERS_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesAllStickers)
#define TG_MESSAGES_SEND_BROADCAST_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_GET_WEB_PAGE_PREVIEW_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessageMedia)
#define TG_MESSAGES_EXPORT_CHAT_INVITE_CALLBACK \
    TG_CALLBACK_SIGNATURE(ExportedChatInvite)
#define TG_MESSAGES_CHECK_CHAT_INVITE_CALLBACK \
    TG_CALLBACK_SIGNATURE(ChatInvite)
#define TG_MESSAGES_IMPORT_CHAT_INVITE_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)
#define TG_MESSAGES_GET_STICKER_SET_CALLBACK \
    TG_CALLBACK_SIGNATURE(MessagesStickerSet)
#define TG_MESSAGES_INSTALL_STICKER_SET_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_MESSAGES_UNINSTALL_STICKER_SET_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_MESSAGES_START_BOT_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesType)

#define TG_PHOTOS_UPDATE_PROFILE_PHOTO_CALLBACK \
    TG_CALLBACK_SIGNATURE(UserProfilePhoto)
#define TG_PHOTOS_UPLOAD_PROFILE_PHOTO_CALLBACK \
    TG_CALLBACK_SIGNATURE(PhotosPhoto)
#define TG_PHOTOS_DELETE_PHOTOS_CALLBACK \
    TG_CALLBACK_SIGNATURE(QList<qint64>)
#define TG_PHOTOS_GET_USER_PHOTOS_CALLBACK \
    TG_CALLBACK_SIGNATURE(PhotosPhotos)

#define TG_UPDATES_GET_STATE_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesState)
#define TG_UPDATES_GET_DIFFERENCE_CALLBACK \
    TG_CALLBACK_SIGNATURE(UpdatesDifference)

#define TG_UPLOAD_SAVE_FILE_PART_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)
#define TG_UPLOAD_GET_FILE_CALLBACK \
    TG_CALLBACK_SIGNATURE(UploadFile)
#define TG_UPLOAD_SAVE_BIG_FILE_PART_CALLBACK \
    TG_CALLBACK_SIGNATURE(bool)

#define TG_USERS_GET_USERS_CALLBACK \
    TG_CALLBACK_SIGNATURE(QList<User>)
#define TG_USERS_GET_FULL_USER_CALLBACK \
    TG_CALLBACK_SIGNATURE(UserFull)

#endif // TELEGRAMCORE_GLOBALS_H
