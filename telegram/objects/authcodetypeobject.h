// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHCODETYPE_OBJECT
#define LQTG_TYPE_AUTHCODETYPE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/authcodetype.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AuthCodeTypeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AuthCodeTypeClassType)
    Q_PROPERTY(AuthCodeType core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AuthCodeTypeClassType {
        TypeAuthCodeTypeSms,
        TypeAuthCodeTypeCall,
        TypeAuthCodeTypeFlashCall
    };

    AuthCodeTypeObject(const AuthCodeType &core, QObject *parent = 0);
    AuthCodeTypeObject(QObject *parent = 0);
    virtual ~AuthCodeTypeObject();

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AuthCodeType &core);
    AuthCodeType core() const;

    AuthCodeTypeObject &operator =(const AuthCodeType &b);
    bool operator ==(const AuthCodeType &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();

private Q_SLOTS:

private:
    AuthCodeType m_core;
};

inline AuthCodeTypeObject::AuthCodeTypeObject(const AuthCodeType &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline AuthCodeTypeObject::AuthCodeTypeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline AuthCodeTypeObject::~AuthCodeTypeObject() {
}

inline AuthCodeTypeObject &AuthCodeTypeObject::operator =(const AuthCodeType &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

inline bool AuthCodeTypeObject::operator ==(const AuthCodeType &b) const {
    return m_core == b;
}

inline void AuthCodeTypeObject::setClassType(quint32 classType) {
    AuthCodeType::AuthCodeTypeClassType result;
    switch(classType) {
    case TypeAuthCodeTypeSms:
        result = AuthCodeType::typeAuthCodeTypeSms;
        break;
    case TypeAuthCodeTypeCall:
        result = AuthCodeType::typeAuthCodeTypeCall;
        break;
    case TypeAuthCodeTypeFlashCall:
        result = AuthCodeType::typeAuthCodeTypeFlashCall;
        break;
    default:
        result = AuthCodeType::typeAuthCodeTypeSms;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 AuthCodeTypeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AuthCodeType::typeAuthCodeTypeSms:
        result = TypeAuthCodeTypeSms;
        break;
    case AuthCodeType::typeAuthCodeTypeCall:
        result = TypeAuthCodeTypeCall;
        break;
    case AuthCodeType::typeAuthCodeTypeFlashCall:
        result = TypeAuthCodeTypeFlashCall;
        break;
    default:
        result = TypeAuthCodeTypeSms;
        break;
    }

    return result;
}

inline void AuthCodeTypeObject::setCore(const AuthCodeType &core) {
    operator =(core);
}

inline AuthCodeType AuthCodeTypeObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_AUTHCODETYPE_OBJECT
