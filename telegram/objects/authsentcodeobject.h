// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHSENTCODE_OBJECT
#define LQTG_TYPE_AUTHSENTCODE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/authsentcode.h"

#include <QPointer>
#include "authcodetypeobject.h"
#include "authsentcodetypeobject.h"

class LIBQTELEGRAMSHARED_EXPORT AuthSentCodeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AuthSentCodeClassType)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(AuthCodeTypeObject* nextType READ nextType WRITE setNextType NOTIFY nextTypeChanged)
    Q_PROPERTY(QString phoneCodeHash READ phoneCodeHash WRITE setPhoneCodeHash NOTIFY phoneCodeHashChanged)
    Q_PROPERTY(bool phoneRegistered READ phoneRegistered WRITE setPhoneRegistered NOTIFY phoneRegisteredChanged)
    Q_PROPERTY(qint32 timeout READ timeout WRITE setTimeout NOTIFY timeoutChanged)
    Q_PROPERTY(AuthSentCodeTypeObject* type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(AuthSentCode core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AuthSentCodeClassType {
        TypeAuthSentCode
    };

    AuthSentCodeObject(const AuthSentCode &core, QObject *parent = 0);
    AuthSentCodeObject(QObject *parent = 0);
    virtual ~AuthSentCodeObject();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setNextType(AuthCodeTypeObject* nextType);
    AuthCodeTypeObject* nextType() const;

    void setPhoneCodeHash(const QString &phoneCodeHash);
    QString phoneCodeHash() const;

    void setPhoneRegistered(bool phoneRegistered);
    bool phoneRegistered() const;

    void setTimeout(qint32 timeout);
    qint32 timeout() const;

    void setType(AuthSentCodeTypeObject* type);
    AuthSentCodeTypeObject* type() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AuthSentCode &core);
    AuthSentCode core() const;

    AuthSentCodeObject &operator =(const AuthSentCode &b);
    bool operator ==(const AuthSentCode &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void flagsChanged();
    void nextTypeChanged();
    void phoneCodeHashChanged();
    void phoneRegisteredChanged();
    void timeoutChanged();
    void typeChanged();

private Q_SLOTS:
    void coreNextTypeChanged();
    void coreTypeChanged();

private:
    QPointer<AuthCodeTypeObject> m_nextType;
    QPointer<AuthSentCodeTypeObject> m_type;
    AuthSentCode m_core;
};

inline AuthSentCodeObject::AuthSentCodeObject(const AuthSentCode &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_nextType(0),
    m_type(0),
    m_core(core)
{
    m_nextType = new AuthCodeTypeObject(m_core.nextType(), this);
    connect(m_nextType.data(), &AuthCodeTypeObject::coreChanged, this, &AuthSentCodeObject::coreNextTypeChanged);
    m_type = new AuthSentCodeTypeObject(m_core.type(), this);
    connect(m_type.data(), &AuthSentCodeTypeObject::coreChanged, this, &AuthSentCodeObject::coreTypeChanged);
}

inline AuthSentCodeObject::AuthSentCodeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_nextType(0),
    m_type(0),
    m_core()
{
    m_nextType = new AuthCodeTypeObject(m_core.nextType(), this);
    connect(m_nextType.data(), &AuthCodeTypeObject::coreChanged, this, &AuthSentCodeObject::coreNextTypeChanged);
    m_type = new AuthSentCodeTypeObject(m_core.type(), this);
    connect(m_type.data(), &AuthSentCodeTypeObject::coreChanged, this, &AuthSentCodeObject::coreTypeChanged);
}

inline AuthSentCodeObject::~AuthSentCodeObject() {
}

inline void AuthSentCodeObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

inline qint32 AuthSentCodeObject::flags() const {
    return m_core.flags();
}

inline void AuthSentCodeObject::setNextType(AuthCodeTypeObject* nextType) {
    if(m_nextType == nextType) return;
    if(m_nextType) delete m_nextType;
    m_nextType = nextType;
    if(m_nextType) {
        m_nextType->setParent(this);
        m_core.setNextType(m_nextType->core());
        connect(m_nextType.data(), &AuthCodeTypeObject::coreChanged, this, &AuthSentCodeObject::coreNextTypeChanged);
    }
    Q_EMIT nextTypeChanged();
    Q_EMIT coreChanged();
}

inline AuthCodeTypeObject*  AuthSentCodeObject::nextType() const {
    return m_nextType;
}

inline void AuthSentCodeObject::setPhoneCodeHash(const QString &phoneCodeHash) {
    if(m_core.phoneCodeHash() == phoneCodeHash) return;
    m_core.setPhoneCodeHash(phoneCodeHash);
    Q_EMIT phoneCodeHashChanged();
    Q_EMIT coreChanged();
}

inline QString AuthSentCodeObject::phoneCodeHash() const {
    return m_core.phoneCodeHash();
}

inline void AuthSentCodeObject::setPhoneRegistered(bool phoneRegistered) {
    if(m_core.phoneRegistered() == phoneRegistered) return;
    m_core.setPhoneRegistered(phoneRegistered);
    Q_EMIT phoneRegisteredChanged();
    Q_EMIT coreChanged();
}

inline bool AuthSentCodeObject::phoneRegistered() const {
    return m_core.phoneRegistered();
}

inline void AuthSentCodeObject::setTimeout(qint32 timeout) {
    if(m_core.timeout() == timeout) return;
    m_core.setTimeout(timeout);
    Q_EMIT timeoutChanged();
    Q_EMIT coreChanged();
}

inline qint32 AuthSentCodeObject::timeout() const {
    return m_core.timeout();
}

inline void AuthSentCodeObject::setType(AuthSentCodeTypeObject* type) {
    if(m_type == type) return;
    if(m_type) delete m_type;
    m_type = type;
    if(m_type) {
        m_type->setParent(this);
        m_core.setType(m_type->core());
        connect(m_type.data(), &AuthSentCodeTypeObject::coreChanged, this, &AuthSentCodeObject::coreTypeChanged);
    }
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

inline AuthSentCodeTypeObject*  AuthSentCodeObject::type() const {
    return m_type;
}

inline AuthSentCodeObject &AuthSentCodeObject::operator =(const AuthSentCode &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_nextType->setCore(b.nextType());
    m_type->setCore(b.type());

    Q_EMIT flagsChanged();
    Q_EMIT nextTypeChanged();
    Q_EMIT phoneCodeHashChanged();
    Q_EMIT phoneRegisteredChanged();
    Q_EMIT timeoutChanged();
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool AuthSentCodeObject::operator ==(const AuthSentCode &b) const {
    return m_core == b;
}

inline void AuthSentCodeObject::setClassType(quint32 classType) {
    AuthSentCode::AuthSentCodeClassType result;
    switch(classType) {
    case TypeAuthSentCode:
        result = AuthSentCode::typeAuthSentCode;
        break;
    default:
        result = AuthSentCode::typeAuthSentCode;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 AuthSentCodeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AuthSentCode::typeAuthSentCode:
        result = TypeAuthSentCode;
        break;
    default:
        result = TypeAuthSentCode;
        break;
    }

    return result;
}

inline void AuthSentCodeObject::setCore(const AuthSentCode &core) {
    operator =(core);
}

inline AuthSentCode AuthSentCodeObject::core() const {
    return m_core;
}

inline void AuthSentCodeObject::coreNextTypeChanged() {
    if(m_core.nextType() == m_nextType->core()) return;
    m_core.setNextType(m_nextType->core());
    Q_EMIT nextTypeChanged();
    Q_EMIT coreChanged();
}

inline void AuthSentCodeObject::coreTypeChanged() {
    if(m_core.type() == m_type->core()) return;
    m_core.setType(m_type->core());
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_AUTHSENTCODE_OBJECT
