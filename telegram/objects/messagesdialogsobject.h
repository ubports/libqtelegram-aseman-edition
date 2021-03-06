// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESDIALOGS_OBJECT
#define LQTG_TYPE_MESSAGESDIALOGS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesdialogs.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesDialogsObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesDialogsClassType)
    Q_PROPERTY(QList<Chat> chats READ chats WRITE setChats NOTIFY chatsChanged)
    Q_PROPERTY(qint32 count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(QList<Dialog> dialogs READ dialogs WRITE setDialogs NOTIFY dialogsChanged)
    Q_PROPERTY(QList<Message> messages READ messages WRITE setMessages NOTIFY messagesChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(MessagesDialogs core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesDialogsClassType {
        TypeMessagesDialogs,
        TypeMessagesDialogsSlice
    };

    MessagesDialogsObject(const MessagesDialogs &core, QObject *parent = 0);
    MessagesDialogsObject(QObject *parent = 0);
    virtual ~MessagesDialogsObject();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setDialogs(const QList<Dialog> &dialogs);
    QList<Dialog> dialogs() const;

    void setMessages(const QList<Message> &messages);
    QList<Message> messages() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesDialogs &core);
    MessagesDialogs core() const;

    MessagesDialogsObject &operator =(const MessagesDialogs &b);
    bool operator ==(const MessagesDialogs &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void chatsChanged();
    void countChanged();
    void dialogsChanged();
    void messagesChanged();
    void usersChanged();

private Q_SLOTS:

private:
    MessagesDialogs m_core;
};

inline MessagesDialogsObject::MessagesDialogsObject(const MessagesDialogs &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline MessagesDialogsObject::MessagesDialogsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline MessagesDialogsObject::~MessagesDialogsObject() {
}

inline void MessagesDialogsObject::setChats(const QList<Chat> &chats) {
    if(m_core.chats() == chats) return;
    m_core.setChats(chats);
    Q_EMIT chatsChanged();
    Q_EMIT coreChanged();
}

inline QList<Chat> MessagesDialogsObject::chats() const {
    return m_core.chats();
}

inline void MessagesDialogsObject::setCount(qint32 count) {
    if(m_core.count() == count) return;
    m_core.setCount(count);
    Q_EMIT countChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessagesDialogsObject::count() const {
    return m_core.count();
}

inline void MessagesDialogsObject::setDialogs(const QList<Dialog> &dialogs) {
    if(m_core.dialogs() == dialogs) return;
    m_core.setDialogs(dialogs);
    Q_EMIT dialogsChanged();
    Q_EMIT coreChanged();
}

inline QList<Dialog> MessagesDialogsObject::dialogs() const {
    return m_core.dialogs();
}

inline void MessagesDialogsObject::setMessages(const QList<Message> &messages) {
    if(m_core.messages() == messages) return;
    m_core.setMessages(messages);
    Q_EMIT messagesChanged();
    Q_EMIT coreChanged();
}

inline QList<Message> MessagesDialogsObject::messages() const {
    return m_core.messages();
}

inline void MessagesDialogsObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

inline QList<User> MessagesDialogsObject::users() const {
    return m_core.users();
}

inline MessagesDialogsObject &MessagesDialogsObject::operator =(const MessagesDialogs &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT chatsChanged();
    Q_EMIT countChanged();
    Q_EMIT dialogsChanged();
    Q_EMIT messagesChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessagesDialogsObject::operator ==(const MessagesDialogs &b) const {
    return m_core == b;
}

inline void MessagesDialogsObject::setClassType(quint32 classType) {
    MessagesDialogs::MessagesDialogsClassType result;
    switch(classType) {
    case TypeMessagesDialogs:
        result = MessagesDialogs::typeMessagesDialogs;
        break;
    case TypeMessagesDialogsSlice:
        result = MessagesDialogs::typeMessagesDialogsSlice;
        break;
    default:
        result = MessagesDialogs::typeMessagesDialogs;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessagesDialogsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesDialogs::typeMessagesDialogs:
        result = TypeMessagesDialogs;
        break;
    case MessagesDialogs::typeMessagesDialogsSlice:
        result = TypeMessagesDialogsSlice;
        break;
    default:
        result = TypeMessagesDialogs;
        break;
    }

    return result;
}

inline void MessagesDialogsObject::setCore(const MessagesDialogs &core) {
    operator =(core);
}

inline MessagesDialogs MessagesDialogsObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_MESSAGESDIALOGS_OBJECT
