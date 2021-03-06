// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSIMPORTEDCONTACTS_OBJECT
#define LQTG_TYPE_CONTACTSIMPORTEDCONTACTS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/contactsimportedcontacts.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ContactsImportedContactsObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ContactsImportedContactsClassType)
    Q_PROPERTY(QList<ImportedContact> imported READ imported WRITE setImported NOTIFY importedChanged)
    Q_PROPERTY(QList<qint64> retryContacts READ retryContacts WRITE setRetryContacts NOTIFY retryContactsChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(ContactsImportedContacts core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ContactsImportedContactsClassType {
        TypeContactsImportedContacts
    };

    ContactsImportedContactsObject(const ContactsImportedContacts &core, QObject *parent = 0);
    ContactsImportedContactsObject(QObject *parent = 0);
    virtual ~ContactsImportedContactsObject();

    void setImported(const QList<ImportedContact> &imported);
    QList<ImportedContact> imported() const;

    void setRetryContacts(const QList<qint64> &retryContacts);
    QList<qint64> retryContacts() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ContactsImportedContacts &core);
    ContactsImportedContacts core() const;

    ContactsImportedContactsObject &operator =(const ContactsImportedContacts &b);
    bool operator ==(const ContactsImportedContacts &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void importedChanged();
    void retryContactsChanged();
    void usersChanged();

private Q_SLOTS:

private:
    ContactsImportedContacts m_core;
};

inline ContactsImportedContactsObject::ContactsImportedContactsObject(const ContactsImportedContacts &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline ContactsImportedContactsObject::ContactsImportedContactsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline ContactsImportedContactsObject::~ContactsImportedContactsObject() {
}

inline void ContactsImportedContactsObject::setImported(const QList<ImportedContact> &imported) {
    if(m_core.imported() == imported) return;
    m_core.setImported(imported);
    Q_EMIT importedChanged();
    Q_EMIT coreChanged();
}

inline QList<ImportedContact> ContactsImportedContactsObject::imported() const {
    return m_core.imported();
}

inline void ContactsImportedContactsObject::setRetryContacts(const QList<qint64> &retryContacts) {
    if(m_core.retryContacts() == retryContacts) return;
    m_core.setRetryContacts(retryContacts);
    Q_EMIT retryContactsChanged();
    Q_EMIT coreChanged();
}

inline QList<qint64> ContactsImportedContactsObject::retryContacts() const {
    return m_core.retryContacts();
}

inline void ContactsImportedContactsObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

inline QList<User> ContactsImportedContactsObject::users() const {
    return m_core.users();
}

inline ContactsImportedContactsObject &ContactsImportedContactsObject::operator =(const ContactsImportedContacts &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT importedChanged();
    Q_EMIT retryContactsChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool ContactsImportedContactsObject::operator ==(const ContactsImportedContacts &b) const {
    return m_core == b;
}

inline void ContactsImportedContactsObject::setClassType(quint32 classType) {
    ContactsImportedContacts::ContactsImportedContactsClassType result;
    switch(classType) {
    case TypeContactsImportedContacts:
        result = ContactsImportedContacts::typeContactsImportedContacts;
        break;
    default:
        result = ContactsImportedContacts::typeContactsImportedContacts;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 ContactsImportedContactsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ContactsImportedContacts::typeContactsImportedContacts:
        result = TypeContactsImportedContacts;
        break;
    default:
        result = TypeContactsImportedContacts;
        break;
    }

    return result;
}

inline void ContactsImportedContactsObject::setCore(const ContactsImportedContacts &core) {
    operator =(core);
}

inline ContactsImportedContacts ContactsImportedContactsObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_CONTACTSIMPORTEDCONTACTS_OBJECT
