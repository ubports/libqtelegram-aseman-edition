// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHORIZATION_OBJECT
#define LQTG_TYPE_AUTHORIZATION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/authorization.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AuthorizationObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AuthorizationClassType)
    Q_PROPERTY(qint32 apiId READ apiId WRITE setApiId NOTIFY apiIdChanged)
    Q_PROPERTY(QString appName READ appName WRITE setAppName NOTIFY appNameChanged)
    Q_PROPERTY(QString appVersion READ appVersion WRITE setAppVersion NOTIFY appVersionChanged)
    Q_PROPERTY(QString country READ country WRITE setCountry NOTIFY countryChanged)
    Q_PROPERTY(qint32 dateActive READ dateActive WRITE setDateActive NOTIFY dateActiveChanged)
    Q_PROPERTY(qint32 dateCreated READ dateCreated WRITE setDateCreated NOTIFY dateCreatedChanged)
    Q_PROPERTY(QString deviceModel READ deviceModel WRITE setDeviceModel NOTIFY deviceModelChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint64 hash READ hash WRITE setHash NOTIFY hashChanged)
    Q_PROPERTY(QString ip READ ip WRITE setIp NOTIFY ipChanged)
    Q_PROPERTY(QString platform READ platform WRITE setPlatform NOTIFY platformChanged)
    Q_PROPERTY(QString region READ region WRITE setRegion NOTIFY regionChanged)
    Q_PROPERTY(QString systemVersion READ systemVersion WRITE setSystemVersion NOTIFY systemVersionChanged)
    Q_PROPERTY(Authorization core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AuthorizationClassType {
        TypeAuthorization
    };

    AuthorizationObject(const Authorization &core, QObject *parent = 0);
    AuthorizationObject(QObject *parent = 0);
    virtual ~AuthorizationObject();

    void setApiId(qint32 apiId);
    qint32 apiId() const;

    void setAppName(const QString &appName);
    QString appName() const;

    void setAppVersion(const QString &appVersion);
    QString appVersion() const;

    void setCountry(const QString &country);
    QString country() const;

    void setDateActive(qint32 dateActive);
    qint32 dateActive() const;

    void setDateCreated(qint32 dateCreated);
    qint32 dateCreated() const;

    void setDeviceModel(const QString &deviceModel);
    QString deviceModel() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setHash(qint64 hash);
    qint64 hash() const;

    void setIp(const QString &ip);
    QString ip() const;

    void setPlatform(const QString &platform);
    QString platform() const;

    void setRegion(const QString &region);
    QString region() const;

    void setSystemVersion(const QString &systemVersion);
    QString systemVersion() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const Authorization &core);
    Authorization core() const;

    AuthorizationObject &operator =(const Authorization &b);
    bool operator ==(const Authorization &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void apiIdChanged();
    void appNameChanged();
    void appVersionChanged();
    void countryChanged();
    void dateActiveChanged();
    void dateCreatedChanged();
    void deviceModelChanged();
    void flagsChanged();
    void hashChanged();
    void ipChanged();
    void platformChanged();
    void regionChanged();
    void systemVersionChanged();

private Q_SLOTS:

private:
    Authorization m_core;
};

inline AuthorizationObject::AuthorizationObject(const Authorization &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline AuthorizationObject::AuthorizationObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline AuthorizationObject::~AuthorizationObject() {
}

inline void AuthorizationObject::setApiId(qint32 apiId) {
    if(m_core.apiId() == apiId) return;
    m_core.setApiId(apiId);
    Q_EMIT apiIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 AuthorizationObject::apiId() const {
    return m_core.apiId();
}

inline void AuthorizationObject::setAppName(const QString &appName) {
    if(m_core.appName() == appName) return;
    m_core.setAppName(appName);
    Q_EMIT appNameChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::appName() const {
    return m_core.appName();
}

inline void AuthorizationObject::setAppVersion(const QString &appVersion) {
    if(m_core.appVersion() == appVersion) return;
    m_core.setAppVersion(appVersion);
    Q_EMIT appVersionChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::appVersion() const {
    return m_core.appVersion();
}

inline void AuthorizationObject::setCountry(const QString &country) {
    if(m_core.country() == country) return;
    m_core.setCountry(country);
    Q_EMIT countryChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::country() const {
    return m_core.country();
}

inline void AuthorizationObject::setDateActive(qint32 dateActive) {
    if(m_core.dateActive() == dateActive) return;
    m_core.setDateActive(dateActive);
    Q_EMIT dateActiveChanged();
    Q_EMIT coreChanged();
}

inline qint32 AuthorizationObject::dateActive() const {
    return m_core.dateActive();
}

inline void AuthorizationObject::setDateCreated(qint32 dateCreated) {
    if(m_core.dateCreated() == dateCreated) return;
    m_core.setDateCreated(dateCreated);
    Q_EMIT dateCreatedChanged();
    Q_EMIT coreChanged();
}

inline qint32 AuthorizationObject::dateCreated() const {
    return m_core.dateCreated();
}

inline void AuthorizationObject::setDeviceModel(const QString &deviceModel) {
    if(m_core.deviceModel() == deviceModel) return;
    m_core.setDeviceModel(deviceModel);
    Q_EMIT deviceModelChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::deviceModel() const {
    return m_core.deviceModel();
}

inline void AuthorizationObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

inline qint32 AuthorizationObject::flags() const {
    return m_core.flags();
}

inline void AuthorizationObject::setHash(qint64 hash) {
    if(m_core.hash() == hash) return;
    m_core.setHash(hash);
    Q_EMIT hashChanged();
    Q_EMIT coreChanged();
}

inline qint64 AuthorizationObject::hash() const {
    return m_core.hash();
}

inline void AuthorizationObject::setIp(const QString &ip) {
    if(m_core.ip() == ip) return;
    m_core.setIp(ip);
    Q_EMIT ipChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::ip() const {
    return m_core.ip();
}

inline void AuthorizationObject::setPlatform(const QString &platform) {
    if(m_core.platform() == platform) return;
    m_core.setPlatform(platform);
    Q_EMIT platformChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::platform() const {
    return m_core.platform();
}

inline void AuthorizationObject::setRegion(const QString &region) {
    if(m_core.region() == region) return;
    m_core.setRegion(region);
    Q_EMIT regionChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::region() const {
    return m_core.region();
}

inline void AuthorizationObject::setSystemVersion(const QString &systemVersion) {
    if(m_core.systemVersion() == systemVersion) return;
    m_core.setSystemVersion(systemVersion);
    Q_EMIT systemVersionChanged();
    Q_EMIT coreChanged();
}

inline QString AuthorizationObject::systemVersion() const {
    return m_core.systemVersion();
}

inline AuthorizationObject &AuthorizationObject::operator =(const Authorization &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT apiIdChanged();
    Q_EMIT appNameChanged();
    Q_EMIT appVersionChanged();
    Q_EMIT countryChanged();
    Q_EMIT dateActiveChanged();
    Q_EMIT dateCreatedChanged();
    Q_EMIT deviceModelChanged();
    Q_EMIT flagsChanged();
    Q_EMIT hashChanged();
    Q_EMIT ipChanged();
    Q_EMIT platformChanged();
    Q_EMIT regionChanged();
    Q_EMIT systemVersionChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool AuthorizationObject::operator ==(const Authorization &b) const {
    return m_core == b;
}

inline void AuthorizationObject::setClassType(quint32 classType) {
    Authorization::AuthorizationClassType result;
    switch(classType) {
    case TypeAuthorization:
        result = Authorization::typeAuthorization;
        break;
    default:
        result = Authorization::typeAuthorization;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 AuthorizationObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Authorization::typeAuthorization:
        result = TypeAuthorization;
        break;
    default:
        result = TypeAuthorization;
        break;
    }

    return result;
}

inline void AuthorizationObject::setCore(const Authorization &core) {
    operator =(core);
}

inline Authorization AuthorizationObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_AUTHORIZATION_OBJECT
