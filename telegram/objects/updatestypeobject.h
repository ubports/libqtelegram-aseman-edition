// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_UPDATESTYPE_OBJECT
#define LQTG_TYPE_UPDATESTYPE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/updatestype.h"

#include <QPointer>
#include "peerobject.h"
#include "messagemediaobject.h"
#include "updateobject.h"

class LIBQTELEGRAMSHARED_EXPORT UpdatesTypeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(UpdatesTypeClassType)
    Q_PROPERTY(qint32 chatId READ chatId WRITE setChatId NOTIFY chatIdChanged)
    Q_PROPERTY(QList<Chat> chats READ chats WRITE setChats NOTIFY chatsChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(QList<MessageEntity> entities READ entities WRITE setEntities NOTIFY entitiesChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 fromId READ fromId WRITE setFromId NOTIFY fromIdChanged)
    Q_PROPERTY(qint32 fwdDate READ fwdDate WRITE setFwdDate NOTIFY fwdDateChanged)
    Q_PROPERTY(PeerObject* fwdFromId READ fwdFromId WRITE setFwdFromId NOTIFY fwdFromIdChanged)
    Q_PROPERTY(qint32 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(MessageMediaObject* media READ media WRITE setMedia NOTIFY mediaChanged)
    Q_PROPERTY(bool mediaUnread READ mediaUnread WRITE setMediaUnread NOTIFY mediaUnreadChanged)
    Q_PROPERTY(bool mentioned READ mentioned WRITE setMentioned NOTIFY mentionedChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(bool out READ out WRITE setOut NOTIFY outChanged)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(qint32 ptsCount READ ptsCount WRITE setPtsCount NOTIFY ptsCountChanged)
    Q_PROPERTY(qint32 replyToMsgId READ replyToMsgId WRITE setReplyToMsgId NOTIFY replyToMsgIdChanged)
    Q_PROPERTY(qint32 seq READ seq WRITE setSeq NOTIFY seqChanged)
    Q_PROPERTY(qint32 seqStart READ seqStart WRITE setSeqStart NOTIFY seqStartChanged)
    Q_PROPERTY(bool unread READ unread WRITE setUnread NOTIFY unreadChanged)
    Q_PROPERTY(UpdateObject* update READ update WRITE setUpdate NOTIFY updateChanged)
    Q_PROPERTY(QList<Update> updates READ updates WRITE setUpdates NOTIFY updatesChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(UpdatesType core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum UpdatesTypeClassType {
        TypeUpdatesTooLong,
        TypeUpdateShortMessage,
        TypeUpdateShortChatMessage,
        TypeUpdateShort,
        TypeUpdatesCombined,
        TypeUpdates,
        TypeUpdateShortSentMessage
    };

    UpdatesTypeObject(const UpdatesType &core, QObject *parent = 0);
    UpdatesTypeObject(QObject *parent = 0);
    virtual ~UpdatesTypeObject();

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setFromId(qint32 fromId);
    qint32 fromId() const;

    void setFwdDate(qint32 fwdDate);
    qint32 fwdDate() const;

    void setFwdFromId(PeerObject* fwdFromId);
    PeerObject* fwdFromId() const;

    void setId(qint32 id);
    qint32 id() const;

    void setMedia(MessageMediaObject* media);
    MessageMediaObject* media() const;

    void setMediaUnread(bool mediaUnread);
    bool mediaUnread() const;

    void setMentioned(bool mentioned);
    bool mentioned() const;

    void setMessage(const QString &message);
    QString message() const;

    void setOut(bool out);
    bool out() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setReplyToMsgId(qint32 replyToMsgId);
    qint32 replyToMsgId() const;

    void setSeq(qint32 seq);
    qint32 seq() const;

    void setSeqStart(qint32 seqStart);
    qint32 seqStart() const;

    void setUnread(bool unread);
    bool unread() const;

    void setUpdate(UpdateObject* update);
    UpdateObject* update() const;

    void setUpdates(const QList<Update> &updates);
    QList<Update> updates() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const UpdatesType &core);
    UpdatesType core() const;

    UpdatesTypeObject &operator =(const UpdatesType &b);
    bool operator ==(const UpdatesType &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void chatIdChanged();
    void chatsChanged();
    void dateChanged();
    void entitiesChanged();
    void flagsChanged();
    void fromIdChanged();
    void fwdDateChanged();
    void fwdFromIdChanged();
    void idChanged();
    void mediaChanged();
    void mediaUnreadChanged();
    void mentionedChanged();
    void messageChanged();
    void outChanged();
    void ptsChanged();
    void ptsCountChanged();
    void replyToMsgIdChanged();
    void seqChanged();
    void seqStartChanged();
    void unreadChanged();
    void updateChanged();
    void updatesChanged();
    void userIdChanged();
    void usersChanged();

private Q_SLOTS:
    void coreFwdFromIdChanged();
    void coreMediaChanged();
    void coreUpdateChanged();

private:
    QPointer<PeerObject> m_fwdFromId;
    QPointer<MessageMediaObject> m_media;
    QPointer<UpdateObject> m_update;
    UpdatesType m_core;
};

inline UpdatesTypeObject::UpdatesTypeObject(const UpdatesType &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_fwdFromId(0),
    m_media(0),
    m_update(0),
    m_core(core)
{
    m_fwdFromId = new PeerObject(m_core.fwdFromId(), this);
    connect(m_fwdFromId.data(), &PeerObject::coreChanged, this, &UpdatesTypeObject::coreFwdFromIdChanged);
    m_media = new MessageMediaObject(m_core.media(), this);
    connect(m_media.data(), &MessageMediaObject::coreChanged, this, &UpdatesTypeObject::coreMediaChanged);
    m_update = new UpdateObject(m_core.update(), this);
    connect(m_update.data(), &UpdateObject::coreChanged, this, &UpdatesTypeObject::coreUpdateChanged);
}

inline UpdatesTypeObject::UpdatesTypeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_fwdFromId(0),
    m_media(0),
    m_update(0),
    m_core()
{
    m_fwdFromId = new PeerObject(m_core.fwdFromId(), this);
    connect(m_fwdFromId.data(), &PeerObject::coreChanged, this, &UpdatesTypeObject::coreFwdFromIdChanged);
    m_media = new MessageMediaObject(m_core.media(), this);
    connect(m_media.data(), &MessageMediaObject::coreChanged, this, &UpdatesTypeObject::coreMediaChanged);
    m_update = new UpdateObject(m_core.update(), this);
    connect(m_update.data(), &UpdateObject::coreChanged, this, &UpdatesTypeObject::coreUpdateChanged);
}

inline UpdatesTypeObject::~UpdatesTypeObject() {
}

inline void UpdatesTypeObject::setChatId(qint32 chatId) {
    if(m_core.chatId() == chatId) return;
    m_core.setChatId(chatId);
    Q_EMIT chatIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::chatId() const {
    return m_core.chatId();
}

inline void UpdatesTypeObject::setChats(const QList<Chat> &chats) {
    if(m_core.chats() == chats) return;
    m_core.setChats(chats);
    Q_EMIT chatsChanged();
    Q_EMIT coreChanged();
}

inline QList<Chat> UpdatesTypeObject::chats() const {
    return m_core.chats();
}

inline void UpdatesTypeObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::date() const {
    return m_core.date();
}

inline void UpdatesTypeObject::setEntities(const QList<MessageEntity> &entities) {
    if(m_core.entities() == entities) return;
    m_core.setEntities(entities);
    Q_EMIT entitiesChanged();
    Q_EMIT coreChanged();
}

inline QList<MessageEntity> UpdatesTypeObject::entities() const {
    return m_core.entities();
}

inline void UpdatesTypeObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::flags() const {
    return m_core.flags();
}

inline void UpdatesTypeObject::setFromId(qint32 fromId) {
    if(m_core.fromId() == fromId) return;
    m_core.setFromId(fromId);
    Q_EMIT fromIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::fromId() const {
    return m_core.fromId();
}

inline void UpdatesTypeObject::setFwdDate(qint32 fwdDate) {
    if(m_core.fwdDate() == fwdDate) return;
    m_core.setFwdDate(fwdDate);
    Q_EMIT fwdDateChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::fwdDate() const {
    return m_core.fwdDate();
}

inline void UpdatesTypeObject::setFwdFromId(PeerObject* fwdFromId) {
    if(m_fwdFromId == fwdFromId) return;
    if(m_fwdFromId) delete m_fwdFromId;
    m_fwdFromId = fwdFromId;
    if(m_fwdFromId) {
        m_fwdFromId->setParent(this);
        m_core.setFwdFromId(m_fwdFromId->core());
        connect(m_fwdFromId.data(), &PeerObject::coreChanged, this, &UpdatesTypeObject::coreFwdFromIdChanged);
    }
    Q_EMIT fwdFromIdChanged();
    Q_EMIT coreChanged();
}

inline PeerObject*  UpdatesTypeObject::fwdFromId() const {
    return m_fwdFromId;
}

inline void UpdatesTypeObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::id() const {
    return m_core.id();
}

inline void UpdatesTypeObject::setMedia(MessageMediaObject* media) {
    if(m_media == media) return;
    if(m_media) delete m_media;
    m_media = media;
    if(m_media) {
        m_media->setParent(this);
        m_core.setMedia(m_media->core());
        connect(m_media.data(), &MessageMediaObject::coreChanged, this, &UpdatesTypeObject::coreMediaChanged);
    }
    Q_EMIT mediaChanged();
    Q_EMIT coreChanged();
}

inline MessageMediaObject*  UpdatesTypeObject::media() const {
    return m_media;
}

inline void UpdatesTypeObject::setMediaUnread(bool mediaUnread) {
    if(m_core.mediaUnread() == mediaUnread) return;
    m_core.setMediaUnread(mediaUnread);
    Q_EMIT mediaUnreadChanged();
    Q_EMIT coreChanged();
}

inline bool UpdatesTypeObject::mediaUnread() const {
    return m_core.mediaUnread();
}

inline void UpdatesTypeObject::setMentioned(bool mentioned) {
    if(m_core.mentioned() == mentioned) return;
    m_core.setMentioned(mentioned);
    Q_EMIT mentionedChanged();
    Q_EMIT coreChanged();
}

inline bool UpdatesTypeObject::mentioned() const {
    return m_core.mentioned();
}

inline void UpdatesTypeObject::setMessage(const QString &message) {
    if(m_core.message() == message) return;
    m_core.setMessage(message);
    Q_EMIT messageChanged();
    Q_EMIT coreChanged();
}

inline QString UpdatesTypeObject::message() const {
    return m_core.message();
}

inline void UpdatesTypeObject::setOut(bool out) {
    if(m_core.out() == out) return;
    m_core.setOut(out);
    Q_EMIT outChanged();
    Q_EMIT coreChanged();
}

inline bool UpdatesTypeObject::out() const {
    return m_core.out();
}

inline void UpdatesTypeObject::setPts(qint32 pts) {
    if(m_core.pts() == pts) return;
    m_core.setPts(pts);
    Q_EMIT ptsChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::pts() const {
    return m_core.pts();
}

inline void UpdatesTypeObject::setPtsCount(qint32 ptsCount) {
    if(m_core.ptsCount() == ptsCount) return;
    m_core.setPtsCount(ptsCount);
    Q_EMIT ptsCountChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::ptsCount() const {
    return m_core.ptsCount();
}

inline void UpdatesTypeObject::setReplyToMsgId(qint32 replyToMsgId) {
    if(m_core.replyToMsgId() == replyToMsgId) return;
    m_core.setReplyToMsgId(replyToMsgId);
    Q_EMIT replyToMsgIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::replyToMsgId() const {
    return m_core.replyToMsgId();
}

inline void UpdatesTypeObject::setSeq(qint32 seq) {
    if(m_core.seq() == seq) return;
    m_core.setSeq(seq);
    Q_EMIT seqChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::seq() const {
    return m_core.seq();
}

inline void UpdatesTypeObject::setSeqStart(qint32 seqStart) {
    if(m_core.seqStart() == seqStart) return;
    m_core.setSeqStart(seqStart);
    Q_EMIT seqStartChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::seqStart() const {
    return m_core.seqStart();
}

inline void UpdatesTypeObject::setUnread(bool unread) {
    if(m_core.unread() == unread) return;
    m_core.setUnread(unread);
    Q_EMIT unreadChanged();
    Q_EMIT coreChanged();
}

inline bool UpdatesTypeObject::unread() const {
    return m_core.unread();
}

inline void UpdatesTypeObject::setUpdate(UpdateObject* update) {
    if(m_update == update) return;
    if(m_update) delete m_update;
    m_update = update;
    if(m_update) {
        m_update->setParent(this);
        m_core.setUpdate(m_update->core());
        connect(m_update.data(), &UpdateObject::coreChanged, this, &UpdatesTypeObject::coreUpdateChanged);
    }
    Q_EMIT updateChanged();
    Q_EMIT coreChanged();
}

inline UpdateObject*  UpdatesTypeObject::update() const {
    return m_update;
}

inline void UpdatesTypeObject::setUpdates(const QList<Update> &updates) {
    if(m_core.updates() == updates) return;
    m_core.setUpdates(updates);
    Q_EMIT updatesChanged();
    Q_EMIT coreChanged();
}

inline QList<Update> UpdatesTypeObject::updates() const {
    return m_core.updates();
}

inline void UpdatesTypeObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 UpdatesTypeObject::userId() const {
    return m_core.userId();
}

inline void UpdatesTypeObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

inline QList<User> UpdatesTypeObject::users() const {
    return m_core.users();
}

inline UpdatesTypeObject &UpdatesTypeObject::operator =(const UpdatesType &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_fwdFromId->setCore(b.fwdFromId());
    m_media->setCore(b.media());
    m_update->setCore(b.update());

    Q_EMIT chatIdChanged();
    Q_EMIT chatsChanged();
    Q_EMIT dateChanged();
    Q_EMIT entitiesChanged();
    Q_EMIT flagsChanged();
    Q_EMIT fromIdChanged();
    Q_EMIT fwdDateChanged();
    Q_EMIT fwdFromIdChanged();
    Q_EMIT idChanged();
    Q_EMIT mediaChanged();
    Q_EMIT mediaUnreadChanged();
    Q_EMIT mentionedChanged();
    Q_EMIT messageChanged();
    Q_EMIT outChanged();
    Q_EMIT ptsChanged();
    Q_EMIT ptsCountChanged();
    Q_EMIT replyToMsgIdChanged();
    Q_EMIT seqChanged();
    Q_EMIT seqStartChanged();
    Q_EMIT unreadChanged();
    Q_EMIT updateChanged();
    Q_EMIT updatesChanged();
    Q_EMIT userIdChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool UpdatesTypeObject::operator ==(const UpdatesType &b) const {
    return m_core == b;
}

inline void UpdatesTypeObject::setClassType(quint32 classType) {
    UpdatesType::UpdatesTypeClassType result;
    switch(classType) {
    case TypeUpdatesTooLong:
        result = UpdatesType::typeUpdatesTooLong;
        break;
    case TypeUpdateShortMessage:
        result = UpdatesType::typeUpdateShortMessage;
        break;
    case TypeUpdateShortChatMessage:
        result = UpdatesType::typeUpdateShortChatMessage;
        break;
    case TypeUpdateShort:
        result = UpdatesType::typeUpdateShort;
        break;
    case TypeUpdatesCombined:
        result = UpdatesType::typeUpdatesCombined;
        break;
    case TypeUpdates:
        result = UpdatesType::typeUpdates;
        break;
    case TypeUpdateShortSentMessage:
        result = UpdatesType::typeUpdateShortSentMessage;
        break;
    default:
        result = UpdatesType::typeUpdatesTooLong;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 UpdatesTypeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case UpdatesType::typeUpdatesTooLong:
        result = TypeUpdatesTooLong;
        break;
    case UpdatesType::typeUpdateShortMessage:
        result = TypeUpdateShortMessage;
        break;
    case UpdatesType::typeUpdateShortChatMessage:
        result = TypeUpdateShortChatMessage;
        break;
    case UpdatesType::typeUpdateShort:
        result = TypeUpdateShort;
        break;
    case UpdatesType::typeUpdatesCombined:
        result = TypeUpdatesCombined;
        break;
    case UpdatesType::typeUpdates:
        result = TypeUpdates;
        break;
    case UpdatesType::typeUpdateShortSentMessage:
        result = TypeUpdateShortSentMessage;
        break;
    default:
        result = TypeUpdatesTooLong;
        break;
    }

    return result;
}

inline void UpdatesTypeObject::setCore(const UpdatesType &core) {
    operator =(core);
}

inline UpdatesType UpdatesTypeObject::core() const {
    return m_core;
}

inline void UpdatesTypeObject::coreFwdFromIdChanged() {
    if(m_core.fwdFromId() == m_fwdFromId->core()) return;
    m_core.setFwdFromId(m_fwdFromId->core());
    Q_EMIT fwdFromIdChanged();
    Q_EMIT coreChanged();
}

inline void UpdatesTypeObject::coreMediaChanged() {
    if(m_core.media() == m_media->core()) return;
    m_core.setMedia(m_media->core());
    Q_EMIT mediaChanged();
    Q_EMIT coreChanged();
}

inline void UpdatesTypeObject::coreUpdateChanged() {
    if(m_core.update() == m_update->core()) return;
    m_core.setUpdate(m_update->core());
    Q_EMIT updateChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_UPDATESTYPE_OBJECT
