// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTBLOCKED_OBJECT
#define LQTG_TYPE_CONTACTBLOCKED_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/contactblocked.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ContactBlockedObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ContactBlockedClassType)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(ContactBlocked core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ContactBlockedClassType {
        TypeContactBlocked
    };

    ContactBlockedObject(const ContactBlocked &core, QObject *parent = 0);
    ContactBlockedObject(QObject *parent = 0);
    virtual ~ContactBlockedObject();

    void setDate(qint32 date);
    qint32 date() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ContactBlocked &core);
    ContactBlocked core() const;

    ContactBlockedObject &operator =(const ContactBlocked &b);
    bool operator ==(const ContactBlocked &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dateChanged();
    void userIdChanged();

private Q_SLOTS:

private:
    ContactBlocked m_core;
};

inline ContactBlockedObject::ContactBlockedObject(const ContactBlocked &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline ContactBlockedObject::ContactBlockedObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline ContactBlockedObject::~ContactBlockedObject() {
}

inline void ContactBlockedObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

inline qint32 ContactBlockedObject::date() const {
    return m_core.date();
}

inline void ContactBlockedObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 ContactBlockedObject::userId() const {
    return m_core.userId();
}

inline ContactBlockedObject &ContactBlockedObject::operator =(const ContactBlocked &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT dateChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool ContactBlockedObject::operator ==(const ContactBlocked &b) const {
    return m_core == b;
}

inline void ContactBlockedObject::setClassType(quint32 classType) {
    ContactBlocked::ContactBlockedClassType result;
    switch(classType) {
    case TypeContactBlocked:
        result = ContactBlocked::typeContactBlocked;
        break;
    default:
        result = ContactBlocked::typeContactBlocked;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 ContactBlockedObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ContactBlocked::typeContactBlocked:
        result = TypeContactBlocked;
        break;
    default:
        result = TypeContactBlocked;
        break;
    }

    return result;
}

inline void ContactBlockedObject::setCore(const ContactBlocked &core) {
    operator =(core);
}

inline ContactBlocked ContactBlockedObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_CONTACTBLOCKED_OBJECT
