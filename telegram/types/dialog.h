// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DIALOG
#define LQTG_TYPE_DIALOG

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include "peernotifysettings.h"
#include "peer.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT Dialog : public TelegramTypeObject
{
public:
    enum DialogClassType {
        typeDialog = 0xc1dd804a,
        typeDialogChannel = 0x5b8496b2
    };

    Dialog(DialogClassType classType = typeDialog, InboundPkt *in = 0);
    Dialog(InboundPkt *in);
    Dialog(const Null&);
    virtual ~Dialog();

    void setNotifySettings(const PeerNotifySettings &notifySettings);
    PeerNotifySettings notifySettings() const;

    void setPeer(const Peer &peer);
    Peer peer() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setReadInboxMaxId(qint32 readInboxMaxId);
    qint32 readInboxMaxId() const;

    void setTopImportantMessage(qint32 topImportantMessage);
    qint32 topImportantMessage() const;

    void setTopMessage(qint32 topMessage);
    qint32 topMessage() const;

    void setUnreadCount(qint32 unreadCount);
    qint32 unreadCount() const;

    void setUnreadImportantCount(qint32 unreadImportantCount);
    qint32 unreadImportantCount() const;

    void setClassType(DialogClassType classType);
    DialogClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Dialog fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const Dialog &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    PeerNotifySettings m_notifySettings;
    Peer m_peer;
    qint32 m_pts;
    qint32 m_readInboxMaxId;
    qint32 m_topImportantMessage;
    qint32 m_topMessage;
    qint32 m_unreadCount;
    qint32 m_unreadImportantCount;
    DialogClassType m_classType;
};

Q_DECLARE_METATYPE(Dialog)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Dialog &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Dialog &item);

inline Dialog::Dialog(DialogClassType classType, InboundPkt *in) :
    m_pts(0),
    m_readInboxMaxId(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline Dialog::Dialog(InboundPkt *in) :
    m_pts(0),
    m_readInboxMaxId(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(typeDialog)
{
    fetch(in);
}

inline Dialog::Dialog(const Null &null) :
    TelegramTypeObject(null),
    m_pts(0),
    m_readInboxMaxId(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(typeDialog)
{
}

inline Dialog::~Dialog() {
}

inline void Dialog::setNotifySettings(const PeerNotifySettings &notifySettings) {
    m_notifySettings = notifySettings;
}

inline PeerNotifySettings Dialog::notifySettings() const {
    return m_notifySettings;
}

inline void Dialog::setPeer(const Peer &peer) {
    m_peer = peer;
}

inline Peer Dialog::peer() const {
    return m_peer;
}

inline void Dialog::setPts(qint32 pts) {
    m_pts = pts;
}

inline qint32 Dialog::pts() const {
    return m_pts;
}

inline void Dialog::setReadInboxMaxId(qint32 readInboxMaxId) {
    m_readInboxMaxId = readInboxMaxId;
}

inline qint32 Dialog::readInboxMaxId() const {
    return m_readInboxMaxId;
}

inline void Dialog::setTopImportantMessage(qint32 topImportantMessage) {
    m_topImportantMessage = topImportantMessage;
}

inline qint32 Dialog::topImportantMessage() const {
    return m_topImportantMessage;
}

inline void Dialog::setTopMessage(qint32 topMessage) {
    m_topMessage = topMessage;
}

inline qint32 Dialog::topMessage() const {
    return m_topMessage;
}

inline void Dialog::setUnreadCount(qint32 unreadCount) {
    m_unreadCount = unreadCount;
}

inline qint32 Dialog::unreadCount() const {
    return m_unreadCount;
}

inline void Dialog::setUnreadImportantCount(qint32 unreadImportantCount) {
    m_unreadImportantCount = unreadImportantCount;
}

inline qint32 Dialog::unreadImportantCount() const {
    return m_unreadImportantCount;
}

inline bool Dialog::operator ==(const Dialog &b) const {
    return m_classType == b.m_classType &&
           m_notifySettings == b.m_notifySettings &&
           m_peer == b.m_peer &&
           m_pts == b.m_pts &&
           m_readInboxMaxId == b.m_readInboxMaxId &&
           m_topImportantMessage == b.m_topImportantMessage &&
           m_topMessage == b.m_topMessage &&
           m_unreadCount == b.m_unreadCount &&
           m_unreadImportantCount == b.m_unreadImportantCount;
}

inline void Dialog::setClassType(Dialog::DialogClassType classType) {
    m_classType = classType;
}

inline Dialog::DialogClassType Dialog::classType() const {
    return m_classType;
}

inline bool Dialog::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDialog: {
        m_peer.fetch(in);
        m_topMessage = in->fetchInt();
        m_readInboxMaxId = in->fetchInt();
        m_unreadCount = in->fetchInt();
        m_notifySettings.fetch(in);
        m_classType = static_cast<DialogClassType>(x);
        return true;
    }
        break;
    
    case typeDialogChannel: {
        m_peer.fetch(in);
        m_topMessage = in->fetchInt();
        m_topImportantMessage = in->fetchInt();
        m_readInboxMaxId = in->fetchInt();
        m_unreadCount = in->fetchInt();
        m_unreadImportantCount = in->fetchInt();
        m_notifySettings.fetch(in);
        m_pts = in->fetchInt();
        m_classType = static_cast<DialogClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool Dialog::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDialog: {
        m_peer.push(out);
        out->appendInt(m_topMessage);
        out->appendInt(m_readInboxMaxId);
        out->appendInt(m_unreadCount);
        m_notifySettings.push(out);
        return true;
    }
        break;
    
    case typeDialogChannel: {
        m_peer.push(out);
        out->appendInt(m_topMessage);
        out->appendInt(m_topImportantMessage);
        out->appendInt(m_readInboxMaxId);
        out->appendInt(m_unreadCount);
        out->appendInt(m_unreadImportantCount);
        m_notifySettings.push(out);
        out->appendInt(m_pts);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> Dialog::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeDialog: {
        result["classType"] = "Dialog::typeDialog";
        result["peer"] = m_peer.toMap();
        result["topMessage"] = QVariant::fromValue<qint32>(topMessage());
        result["readInboxMaxId"] = QVariant::fromValue<qint32>(readInboxMaxId());
        result["unreadCount"] = QVariant::fromValue<qint32>(unreadCount());
        result["notifySettings"] = m_notifySettings.toMap();
        return result;
    }
        break;
    
    case typeDialogChannel: {
        result["classType"] = "Dialog::typeDialogChannel";
        result["peer"] = m_peer.toMap();
        result["topMessage"] = QVariant::fromValue<qint32>(topMessage());
        result["topImportantMessage"] = QVariant::fromValue<qint32>(topImportantMessage());
        result["readInboxMaxId"] = QVariant::fromValue<qint32>(readInboxMaxId());
        result["unreadCount"] = QVariant::fromValue<qint32>(unreadCount());
        result["unreadImportantCount"] = QVariant::fromValue<qint32>(unreadImportantCount());
        result["notifySettings"] = m_notifySettings.toMap();
        result["pts"] = QVariant::fromValue<qint32>(pts());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline Dialog Dialog::fromMap(const QMap<QString, QVariant> &map) {
    Dialog result;
    if(map.value("classType").toString() == "Dialog::typeDialog") {
        result.setClassType(typeDialog);
        result.setPeer( Peer::fromMap(map.value("peer").toMap()) );
        result.setTopMessage( map.value("topMessage").value<qint32>() );
        result.setReadInboxMaxId( map.value("readInboxMaxId").value<qint32>() );
        result.setUnreadCount( map.value("unreadCount").value<qint32>() );
        result.setNotifySettings( PeerNotifySettings::fromMap(map.value("notifySettings").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "Dialog::typeDialogChannel") {
        result.setClassType(typeDialogChannel);
        result.setPeer( Peer::fromMap(map.value("peer").toMap()) );
        result.setTopMessage( map.value("topMessage").value<qint32>() );
        result.setTopImportantMessage( map.value("topImportantMessage").value<qint32>() );
        result.setReadInboxMaxId( map.value("readInboxMaxId").value<qint32>() );
        result.setUnreadCount( map.value("unreadCount").value<qint32>() );
        result.setUnreadImportantCount( map.value("unreadImportantCount").value<qint32>() );
        result.setNotifySettings( PeerNotifySettings::fromMap(map.value("notifySettings").toMap()) );
        result.setPts( map.value("pts").value<qint32>() );
        return result;
    }
    return result;
}

inline QByteArray Dialog::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const Dialog &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Dialog::typeDialog:
        stream << item.peer();
        stream << item.topMessage();
        stream << item.readInboxMaxId();
        stream << item.unreadCount();
        stream << item.notifySettings();
        break;
    case Dialog::typeDialogChannel:
        stream << item.peer();
        stream << item.topMessage();
        stream << item.topImportantMessage();
        stream << item.readInboxMaxId();
        stream << item.unreadCount();
        stream << item.unreadImportantCount();
        stream << item.notifySettings();
        stream << item.pts();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, Dialog &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Dialog::DialogClassType>(type));
    switch(type) {
    case Dialog::typeDialog: {
        Peer m_peer;
        stream >> m_peer;
        item.setPeer(m_peer);
        qint32 m_top_message;
        stream >> m_top_message;
        item.setTopMessage(m_top_message);
        qint32 m_read_inbox_max_id;
        stream >> m_read_inbox_max_id;
        item.setReadInboxMaxId(m_read_inbox_max_id);
        qint32 m_unread_count;
        stream >> m_unread_count;
        item.setUnreadCount(m_unread_count);
        PeerNotifySettings m_notify_settings;
        stream >> m_notify_settings;
        item.setNotifySettings(m_notify_settings);
    }
        break;
    case Dialog::typeDialogChannel: {
        Peer m_peer;
        stream >> m_peer;
        item.setPeer(m_peer);
        qint32 m_top_message;
        stream >> m_top_message;
        item.setTopMessage(m_top_message);
        qint32 m_top_important_message;
        stream >> m_top_important_message;
        item.setTopImportantMessage(m_top_important_message);
        qint32 m_read_inbox_max_id;
        stream >> m_read_inbox_max_id;
        item.setReadInboxMaxId(m_read_inbox_max_id);
        qint32 m_unread_count;
        stream >> m_unread_count;
        item.setUnreadCount(m_unread_count);
        qint32 m_unread_important_count;
        stream >> m_unread_important_count;
        item.setUnreadImportantCount(m_unread_important_count);
        PeerNotifySettings m_notify_settings;
        stream >> m_notify_settings;
        item.setNotifySettings(m_notify_settings);
        qint32 m_pts;
        stream >> m_pts;
        item.setPts(m_pts);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_DIALOG
