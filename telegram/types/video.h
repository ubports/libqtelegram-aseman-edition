// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_VIDEO
#define LQTG_TYPE_VIDEO

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>
#include "photosize.h"

class LIBQTELEGRAMSHARED_EXPORT Video : public TelegramTypeObject
{
public:
    enum VideoClassType {
        typeVideoEmpty = 0xc10658a8,
        typeVideo = 0xf72887d3
    };

    Video(VideoClassType classType = typeVideoEmpty, InboundPkt *in = 0);
    Video(InboundPkt *in);
    Video(const Null&);
    virtual ~Video();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setH(qint32 h);
    qint32 h() const;

    void setId(qint64 id);
    qint64 id() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setThumb(const PhotoSize &thumb);
    PhotoSize thumb() const;

    void setW(qint32 w);
    qint32 w() const;

    void setClassType(VideoClassType classType);
    VideoClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Video fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const Video &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    qint32 m_date;
    qint32 m_dcId;
    qint32 m_duration;
    qint32 m_h;
    qint64 m_id;
    QString m_mimeType;
    qint32 m_size;
    PhotoSize m_thumb;
    qint32 m_w;
    VideoClassType m_classType;
};

Q_DECLARE_METATYPE(Video)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Video &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Video &item);

inline Video::Video(VideoClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_date(0),
    m_dcId(0),
    m_duration(0),
    m_h(0),
    m_id(0),
    m_size(0),
    m_w(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline Video::Video(InboundPkt *in) :
    m_accessHash(0),
    m_date(0),
    m_dcId(0),
    m_duration(0),
    m_h(0),
    m_id(0),
    m_size(0),
    m_w(0),
    m_classType(typeVideoEmpty)
{
    fetch(in);
}

inline Video::Video(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_date(0),
    m_dcId(0),
    m_duration(0),
    m_h(0),
    m_id(0),
    m_size(0),
    m_w(0),
    m_classType(typeVideoEmpty)
{
}

inline Video::~Video() {
}

inline void Video::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

inline qint64 Video::accessHash() const {
    return m_accessHash;
}

inline void Video::setDate(qint32 date) {
    m_date = date;
}

inline qint32 Video::date() const {
    return m_date;
}

inline void Video::setDcId(qint32 dcId) {
    m_dcId = dcId;
}

inline qint32 Video::dcId() const {
    return m_dcId;
}

inline void Video::setDuration(qint32 duration) {
    m_duration = duration;
}

inline qint32 Video::duration() const {
    return m_duration;
}

inline void Video::setH(qint32 h) {
    m_h = h;
}

inline qint32 Video::h() const {
    return m_h;
}

inline void Video::setId(qint64 id) {
    m_id = id;
}

inline qint64 Video::id() const {
    return m_id;
}

inline void Video::setMimeType(const QString &mimeType) {
    m_mimeType = mimeType;
}

inline QString Video::mimeType() const {
    return m_mimeType;
}

inline void Video::setSize(qint32 size) {
    m_size = size;
}

inline qint32 Video::size() const {
    return m_size;
}

inline void Video::setThumb(const PhotoSize &thumb) {
    m_thumb = thumb;
}

inline PhotoSize Video::thumb() const {
    return m_thumb;
}

inline void Video::setW(qint32 w) {
    m_w = w;
}

inline qint32 Video::w() const {
    return m_w;
}

inline bool Video::operator ==(const Video &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_date == b.m_date &&
           m_dcId == b.m_dcId &&
           m_duration == b.m_duration &&
           m_h == b.m_h &&
           m_id == b.m_id &&
           m_mimeType == b.m_mimeType &&
           m_size == b.m_size &&
           m_thumb == b.m_thumb &&
           m_w == b.m_w;
}

inline void Video::setClassType(Video::VideoClassType classType) {
    m_classType = classType;
}

inline Video::VideoClassType Video::classType() const {
    return m_classType;
}

inline bool Video::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeVideoEmpty: {
        m_id = in->fetchLong();
        m_classType = static_cast<VideoClassType>(x);
        return true;
    }
        break;
    
    case typeVideo: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_duration = in->fetchInt();
        m_mimeType = in->fetchQString();
        m_size = in->fetchInt();
        m_thumb.fetch(in);
        m_dcId = in->fetchInt();
        m_w = in->fetchInt();
        m_h = in->fetchInt();
        m_classType = static_cast<VideoClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool Video::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeVideoEmpty: {
        out->appendLong(m_id);
        return true;
    }
        break;
    
    case typeVideo: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_duration);
        out->appendQString(m_mimeType);
        out->appendInt(m_size);
        m_thumb.push(out);
        out->appendInt(m_dcId);
        out->appendInt(m_w);
        out->appendInt(m_h);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> Video::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeVideoEmpty: {
        result["classType"] = "Video::typeVideoEmpty";
        result["id"] = QVariant::fromValue<qint64>(id());
        return result;
    }
        break;
    
    case typeVideo: {
        result["classType"] = "Video::typeVideo";
        result["id"] = QVariant::fromValue<qint64>(id());
        result["accessHash"] = QVariant::fromValue<qint64>(accessHash());
        result["date"] = QVariant::fromValue<qint32>(date());
        result["duration"] = QVariant::fromValue<qint32>(duration());
        result["mimeType"] = QVariant::fromValue<QString>(mimeType());
        result["size"] = QVariant::fromValue<qint32>(size());
        result["thumb"] = m_thumb.toMap();
        result["dcId"] = QVariant::fromValue<qint32>(dcId());
        result["w"] = QVariant::fromValue<qint32>(w());
        result["h"] = QVariant::fromValue<qint32>(h());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline Video Video::fromMap(const QMap<QString, QVariant> &map) {
    Video result;
    if(map.value("classType").toString() == "Video::typeVideoEmpty") {
        result.setClassType(typeVideoEmpty);
        result.setId( map.value("id").value<qint64>() );
        return result;
    }
    if(map.value("classType").toString() == "Video::typeVideo") {
        result.setClassType(typeVideo);
        result.setId( map.value("id").value<qint64>() );
        result.setAccessHash( map.value("accessHash").value<qint64>() );
        result.setDate( map.value("date").value<qint32>() );
        result.setDuration( map.value("duration").value<qint32>() );
        result.setMimeType( map.value("mimeType").value<QString>() );
        result.setSize( map.value("size").value<qint32>() );
        result.setThumb( PhotoSize::fromMap(map.value("thumb").toMap()) );
        result.setDcId( map.value("dcId").value<qint32>() );
        result.setW( map.value("w").value<qint32>() );
        result.setH( map.value("h").value<qint32>() );
        return result;
    }
    return result;
}

inline QByteArray Video::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const Video &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Video::typeVideoEmpty:
        stream << item.id();
        break;
    case Video::typeVideo:
        stream << item.id();
        stream << item.accessHash();
        stream << item.date();
        stream << item.duration();
        stream << item.mimeType();
        stream << item.size();
        stream << item.thumb();
        stream << item.dcId();
        stream << item.w();
        stream << item.h();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, Video &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Video::VideoClassType>(type));
    switch(type) {
    case Video::typeVideoEmpty: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    case Video::typeVideo: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_duration;
        stream >> m_duration;
        item.setDuration(m_duration);
        QString m_mime_type;
        stream >> m_mime_type;
        item.setMimeType(m_mime_type);
        qint32 m_size;
        stream >> m_size;
        item.setSize(m_size);
        PhotoSize m_thumb;
        stream >> m_thumb;
        item.setThumb(m_thumb);
        qint32 m_dc_id;
        stream >> m_dc_id;
        item.setDcId(m_dc_id);
        qint32 m_w;
        stream >> m_w;
        item.setW(m_w);
        qint32 m_h;
        stream >> m_h;
        item.setH(m_h);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_VIDEO
