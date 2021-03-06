// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESMESSAGES_OBJECT
#define LQTG_TYPE_MESSAGESMESSAGES_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesmessages.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesMessagesObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesMessagesClassType)
    Q_PROPERTY(QList<Chat> chats READ chats WRITE setChats NOTIFY chatsChanged)
    Q_PROPERTY(qint32 count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(QList<Message> messages READ messages WRITE setMessages NOTIFY messagesChanged)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(MessagesMessages core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesMessagesClassType {
        TypeMessagesMessages,
        TypeMessagesMessagesSlice,
        TypeMessagesChannelMessages
    };

    MessagesMessagesObject(const MessagesMessages &core, QObject *parent = 0);
    MessagesMessagesObject(QObject *parent = 0);
    virtual ~MessagesMessagesObject();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMessages(const QList<Message> &messages);
    QList<Message> messages() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesMessages &core);
    MessagesMessages core() const;

    MessagesMessagesObject &operator =(const MessagesMessages &b);
    bool operator ==(const MessagesMessages &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void chatsChanged();
    void countChanged();
    void flagsChanged();
    void messagesChanged();
    void ptsChanged();
    void usersChanged();

private Q_SLOTS:

private:
    MessagesMessages m_core;
};

inline MessagesMessagesObject::MessagesMessagesObject(const MessagesMessages &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline MessagesMessagesObject::MessagesMessagesObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline MessagesMessagesObject::~MessagesMessagesObject() {
}

inline void MessagesMessagesObject::setChats(const QList<Chat> &chats) {
    if(m_core.chats() == chats) return;
    m_core.setChats(chats);
    Q_EMIT chatsChanged();
    Q_EMIT coreChanged();
}

inline QList<Chat> MessagesMessagesObject::chats() const {
    return m_core.chats();
}

inline void MessagesMessagesObject::setCount(qint32 count) {
    if(m_core.count() == count) return;
    m_core.setCount(count);
    Q_EMIT countChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessagesMessagesObject::count() const {
    return m_core.count();
}

inline void MessagesMessagesObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessagesMessagesObject::flags() const {
    return m_core.flags();
}

inline void MessagesMessagesObject::setMessages(const QList<Message> &messages) {
    if(m_core.messages() == messages) return;
    m_core.setMessages(messages);
    Q_EMIT messagesChanged();
    Q_EMIT coreChanged();
}

inline QList<Message> MessagesMessagesObject::messages() const {
    return m_core.messages();
}

inline void MessagesMessagesObject::setPts(qint32 pts) {
    if(m_core.pts() == pts) return;
    m_core.setPts(pts);
    Q_EMIT ptsChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessagesMessagesObject::pts() const {
    return m_core.pts();
}

inline void MessagesMessagesObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

inline QList<User> MessagesMessagesObject::users() const {
    return m_core.users();
}

inline MessagesMessagesObject &MessagesMessagesObject::operator =(const MessagesMessages &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT chatsChanged();
    Q_EMIT countChanged();
    Q_EMIT flagsChanged();
    Q_EMIT messagesChanged();
    Q_EMIT ptsChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessagesMessagesObject::operator ==(const MessagesMessages &b) const {
    return m_core == b;
}

inline void MessagesMessagesObject::setClassType(quint32 classType) {
    MessagesMessages::MessagesMessagesClassType result;
    switch(classType) {
    case TypeMessagesMessages:
        result = MessagesMessages::typeMessagesMessages;
        break;
    case TypeMessagesMessagesSlice:
        result = MessagesMessages::typeMessagesMessagesSlice;
        break;
    case TypeMessagesChannelMessages:
        result = MessagesMessages::typeMessagesChannelMessages;
        break;
    default:
        result = MessagesMessages::typeMessagesMessages;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessagesMessagesObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesMessages::typeMessagesMessages:
        result = TypeMessagesMessages;
        break;
    case MessagesMessages::typeMessagesMessagesSlice:
        result = TypeMessagesMessagesSlice;
        break;
    case MessagesMessages::typeMessagesChannelMessages:
        result = TypeMessagesChannelMessages;
        break;
    default:
        result = TypeMessagesMessages;
        break;
    }

    return result;
}

inline void MessagesMessagesObject::setCore(const MessagesMessages &core) {
    operator =(core);
}

inline MessagesMessages MessagesMessagesObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_MESSAGESMESSAGES_OBJECT
