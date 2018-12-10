// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_ACCOUNT
#define LQTG_FNC_ACCOUNT

#include "telegramfunctionobject.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QtGlobal>
#include <QString>
#include "telegram/types/inputnotifypeer.h"
#include "telegram/types/inputpeernotifysettings.h"
#include "telegram/types/peernotifysettings.h"
#include "telegram/types/user.h"
#include <QList>
#include "telegram/types/wallpaper.h"
#include "telegram/types/accountprivacyrules.h"
#include "telegram/types/inputprivacykey.h"
#include "telegram/types/inputprivacyrule.h"
#include "telegram/types/accountdaysttl.h"
#include "telegram/types/authsentcode.h"
#include "telegram/types/accountpassword.h"
#include "telegram/types/accountauthorizations.h"
#include "telegram/types/accountpasswordsettings.h"
#include <QByteArray>
#include "telegram/types/accountpasswordinputsettings.h"
#include "telegram/types/inputpeer.h"
#include "telegram/types/reportreason.h"

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Account : public TelegramFunctionObject
{
public:
    enum AccountFunction {
        fncAccountRegisterDevice = 0x637ea878,
        fncAccountUnregisterDevice = 0x65c55b40,
        fncAccountUpdateNotifySettings = 0x84be5b93,
        fncAccountGetNotifySettings = 0x12b3ad31,
        fncAccountResetNotifySettings = 0xdb7e1747,
        fncAccountUpdateProfile = 0x78515775,
        fncAccountUpdateStatus = 0x6628562c,
        fncAccountGetWallPapers = 0xc04cfac2,
        fncAccountCheckUsername = 0x2714d86c,
        fncAccountUpdateUsername = 0x3e0bdd7c,
        fncAccountGetPrivacy = 0xdadbc950,
        fncAccountSetPrivacy = 0xc9f81ce8,
        fncAccountDeleteAccount = 0x418d4e0b,
        fncAccountGetAccountTTL = 0x8fc711d,
        fncAccountSetAccountTTL = 0x2442485e,
        fncAccountSendChangePhoneCode = 0x8e57deb,
        fncAccountChangePhone = 0x70c32edb,
        fncAccountUpdateDeviceLocked = 0x38df3532,
        fncAccountGetPassword = 0x548a30f5,
        fncAccountGetAuthorizations = 0xe320c158,
        fncAccountResetAuthorization = 0xdf77f3bc,
        fncAccountGetPasswordSettings = 0xbc8d11bb,
        fncAccountUpdatePasswordSettings = 0xfa7c4b86,
        fncAccountReportPeer = 0xae189d5f
    };

    Account();
    virtual ~Account();

    static bool registerDevice(OutboundPkt *out, qint32 tokenType, const QString &token);
    static bool registerDeviceResult(InboundPkt *in);

    static bool unregisterDevice(OutboundPkt *out, qint32 tokenType, const QString &token);
    static bool unregisterDeviceResult(InboundPkt *in);

    static bool updateNotifySettings(OutboundPkt *out, const InputNotifyPeer &peer, const InputPeerNotifySettings &settings);
    static bool updateNotifySettingsResult(InboundPkt *in);

    static bool getNotifySettings(OutboundPkt *out, const InputNotifyPeer &peer);
    static PeerNotifySettings getNotifySettingsResult(InboundPkt *in);

    static bool resetNotifySettings(OutboundPkt *out);
    static bool resetNotifySettingsResult(InboundPkt *in);

    static bool updateProfile(OutboundPkt *out, const QString &firstName, const QString &lastName, const QString &about);
    static User updateProfileResult(InboundPkt *in);

    static bool updateStatus(OutboundPkt *out, bool offline);
    static bool updateStatusResult(InboundPkt *in);

    static bool getWallPapers(OutboundPkt *out);
    static QList<WallPaper> getWallPapersResult(InboundPkt *in);

    static bool checkUsername(OutboundPkt *out, const QString &username);
    static bool checkUsernameResult(InboundPkt *in);

    static bool updateUsername(OutboundPkt *out, const QString &username);
    static User updateUsernameResult(InboundPkt *in);

    static bool getPrivacy(OutboundPkt *out, const InputPrivacyKey &key);
    static AccountPrivacyRules getPrivacyResult(InboundPkt *in);

    static bool setPrivacy(OutboundPkt *out, const InputPrivacyKey &key, const QList<InputPrivacyRule> &rules);
    static AccountPrivacyRules setPrivacyResult(InboundPkt *in);

    static bool deleteAccount(OutboundPkt *out, const QString &reason);
    static bool deleteAccountResult(InboundPkt *in);

    static bool getAccountTTL(OutboundPkt *out);
    static AccountDaysTTL getAccountTTLResult(InboundPkt *in);

    static bool setAccountTTL(OutboundPkt *out, const AccountDaysTTL &ttl);
    static bool setAccountTTLResult(InboundPkt *in);

    static bool sendChangePhoneCode(OutboundPkt *out, bool allowFlashcall, const QString &phoneNumber, bool currentNumber);
    static AuthSentCode sendChangePhoneCodeResult(InboundPkt *in);

    static bool changePhone(OutboundPkt *out, const QString &phoneNumber, const QString &phoneCodeHash, const QString &phoneCode);
    static User changePhoneResult(InboundPkt *in);

    static bool updateDeviceLocked(OutboundPkt *out, qint32 period);
    static bool updateDeviceLockedResult(InboundPkt *in);

    static bool getPassword(OutboundPkt *out);
    static AccountPassword getPasswordResult(InboundPkt *in);

    static bool getAuthorizations(OutboundPkt *out);
    static AccountAuthorizations getAuthorizationsResult(InboundPkt *in);

    static bool resetAuthorization(OutboundPkt *out, qint64 hash);
    static bool resetAuthorizationResult(InboundPkt *in);

    static bool getPasswordSettings(OutboundPkt *out, const QByteArray &currentPasswordHash);
    static AccountPasswordSettings getPasswordSettingsResult(InboundPkt *in);

    static bool updatePasswordSettings(OutboundPkt *out, const QByteArray &currentPasswordHash, const AccountPasswordInputSettings &newSettings);
    static bool updatePasswordSettingsResult(InboundPkt *in);

    static bool reportPeer(OutboundPkt *out, const InputPeer &peer, const ReportReason &reason);
    static bool reportPeerResult(InboundPkt *in);

};

}
inline Functions::Account::Account() {
}

inline Functions::Account::~Account() {
}

inline bool Functions::Account::registerDevice(OutboundPkt *out, qint32 tokenType, const QString &token) {
    out->appendInt(fncAccountRegisterDevice);
    out->appendInt(tokenType);
    out->appendQString(token);
    return true;
}

inline bool Functions::Account::registerDeviceResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::unregisterDevice(OutboundPkt *out, qint32 tokenType, const QString &token) {
    out->appendInt(fncAccountUnregisterDevice);
    out->appendInt(tokenType);
    out->appendQString(token);
    return true;
}

inline bool Functions::Account::unregisterDeviceResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::updateNotifySettings(OutboundPkt *out, const InputNotifyPeer &peer, const InputPeerNotifySettings &settings) {
    out->appendInt(fncAccountUpdateNotifySettings);
    if(!peer.push(out)) return false;
    if(!settings.push(out)) return false;
    return true;
}

inline bool Functions::Account::updateNotifySettingsResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::getNotifySettings(OutboundPkt *out, const InputNotifyPeer &peer) {
    out->appendInt(fncAccountGetNotifySettings);
    if(!peer.push(out)) return false;
    return true;
}

inline PeerNotifySettings Functions::Account::getNotifySettingsResult(InboundPkt *in) {
    PeerNotifySettings result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::resetNotifySettings(OutboundPkt *out) {
    out->appendInt(fncAccountResetNotifySettings);
    return true;
}

inline bool Functions::Account::resetNotifySettingsResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::updateProfile(OutboundPkt *out, const QString &firstName, const QString &lastName, const QString &about) {
    out->appendInt(fncAccountUpdateProfile);
    
    qint32 flags = 0;
    if(firstName != 0) flags = (1<<0 | flags);
    if(lastName != 0) flags = (1<<1 | flags);
    if(about != 0) flags = (1<<2 | flags);
    
    out->appendInt(flags);
    if(flags & 1<<0) out->appendQString(firstName);
    if(flags & 1<<1) out->appendQString(lastName);
    if(flags & 1<<2) out->appendQString(about);
    return true;
}

inline User Functions::Account::updateProfileResult(InboundPkt *in) {
    User result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::updateStatus(OutboundPkt *out, bool offline) {
    out->appendInt(fncAccountUpdateStatus);
    out->appendBool(offline);
    return true;
}

inline bool Functions::Account::updateStatusResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::getWallPapers(OutboundPkt *out) {
    out->appendInt(fncAccountGetWallPapers);
    return true;
}

inline QList<WallPaper> Functions::Account::getWallPapersResult(InboundPkt *in) {
    QList<WallPaper> result;
    if(in->fetchInt() != (qint32)CoreTypes::typeVector) return result;
    qint32 result_length = in->fetchInt();
    result.clear();
    for (qint32 i = 0; i < result_length; i++) {
        WallPaper type;
        if(!type.fetch(in)) return result;
        result.append(type);
    }
    return result;
}

inline bool Functions::Account::checkUsername(OutboundPkt *out, const QString &username) {
    out->appendInt(fncAccountCheckUsername);
    out->appendQString(username);
    return true;
}

inline bool Functions::Account::checkUsernameResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::updateUsername(OutboundPkt *out, const QString &username) {
    out->appendInt(fncAccountUpdateUsername);
    out->appendQString(username);
    return true;
}

inline User Functions::Account::updateUsernameResult(InboundPkt *in) {
    User result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::getPrivacy(OutboundPkt *out, const InputPrivacyKey &key) {
    out->appendInt(fncAccountGetPrivacy);
    if(!key.push(out)) return false;
    return true;
}

inline AccountPrivacyRules Functions::Account::getPrivacyResult(InboundPkt *in) {
    AccountPrivacyRules result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::setPrivacy(OutboundPkt *out, const InputPrivacyKey &key, const QList<InputPrivacyRule> &rules) {
    out->appendInt(fncAccountSetPrivacy);
    if(!key.push(out)) return false;
    out->appendInt(CoreTypes::typeVector);
    out->appendInt(rules.count());
    for (qint32 i = 0; i < rules.count(); i++) {
        if(!rules[i].push(out)) return false;
    }
    return true;
}

inline AccountPrivacyRules Functions::Account::setPrivacyResult(InboundPkt *in) {
    AccountPrivacyRules result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::deleteAccount(OutboundPkt *out, const QString &reason) {
    out->appendInt(fncAccountDeleteAccount);
    out->appendQString(reason);
    return true;
}

inline bool Functions::Account::deleteAccountResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::getAccountTTL(OutboundPkt *out) {
    out->appendInt(fncAccountGetAccountTTL);
    return true;
}

inline AccountDaysTTL Functions::Account::getAccountTTLResult(InboundPkt *in) {
    AccountDaysTTL result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::setAccountTTL(OutboundPkt *out, const AccountDaysTTL &ttl) {
    out->appendInt(fncAccountSetAccountTTL);
    if(!ttl.push(out)) return false;
    return true;
}

inline bool Functions::Account::setAccountTTLResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::sendChangePhoneCode(OutboundPkt *out, bool allowFlashcall, const QString &phoneNumber, bool currentNumber) {
    out->appendInt(fncAccountSendChangePhoneCode);
    
    qint32 flags = 0;
    if(allowFlashcall != 0) flags = (1<<0 | flags);
    if(currentNumber != 0) flags = (1<<0 | flags);
    
    out->appendInt(flags);
    out->appendQString(phoneNumber);
    if(flags & 1<<0) out->appendBool(currentNumber);
    return true;
}

inline AuthSentCode Functions::Account::sendChangePhoneCodeResult(InboundPkt *in) {
    AuthSentCode result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::changePhone(OutboundPkt *out, const QString &phoneNumber, const QString &phoneCodeHash, const QString &phoneCode) {
    out->appendInt(fncAccountChangePhone);
    out->appendQString(phoneNumber);
    out->appendQString(phoneCodeHash);
    out->appendQString(phoneCode);
    return true;
}

inline User Functions::Account::changePhoneResult(InboundPkt *in) {
    User result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::updateDeviceLocked(OutboundPkt *out, qint32 period) {
    out->appendInt(fncAccountUpdateDeviceLocked);
    out->appendInt(period);
    return true;
}

inline bool Functions::Account::updateDeviceLockedResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::getPassword(OutboundPkt *out) {
    out->appendInt(fncAccountGetPassword);
    return true;
}

inline AccountPassword Functions::Account::getPasswordResult(InboundPkt *in) {
    AccountPassword result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::getAuthorizations(OutboundPkt *out) {
    out->appendInt(fncAccountGetAuthorizations);
    return true;
}

inline AccountAuthorizations Functions::Account::getAuthorizationsResult(InboundPkt *in) {
    AccountAuthorizations result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::resetAuthorization(OutboundPkt *out, qint64 hash) {
    out->appendInt(fncAccountResetAuthorization);
    out->appendLong(hash);
    return true;
}

inline bool Functions::Account::resetAuthorizationResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::getPasswordSettings(OutboundPkt *out, const QByteArray &currentPasswordHash) {
    out->appendInt(fncAccountGetPasswordSettings);
    out->appendBytes(currentPasswordHash);
    return true;
}

inline AccountPasswordSettings Functions::Account::getPasswordSettingsResult(InboundPkt *in) {
    AccountPasswordSettings result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Account::updatePasswordSettings(OutboundPkt *out, const QByteArray &currentPasswordHash, const AccountPasswordInputSettings &newSettings) {
    out->appendInt(fncAccountUpdatePasswordSettings);
    out->appendBytes(currentPasswordHash);
    if(!newSettings.push(out)) return false;
    return true;
}

inline bool Functions::Account::updatePasswordSettingsResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Account::reportPeer(OutboundPkt *out, const InputPeer &peer, const ReportReason &reason) {
    out->appendInt(fncAccountReportPeer);
    if(!peer.push(out)) return false;
    if(!reason.push(out)) return false;
    return true;
}

inline bool Functions::Account::reportPeerResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}


}

#endif // LQTG_FNC_ACCOUNT
