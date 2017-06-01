// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_WEBPAGE
#define LQTG_TYPE_WEBPAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QString>
#include <QtGlobal>
#include "photo.h"

class LIBQTELEGRAMSHARED_EXPORT WebPage : public TelegramTypeObject
{
public:
    enum WebPageClassType {
        typeWebPageEmpty = 0xeb1477e8,
        typeWebPagePending = 0xc586da1c,
        typeWebPage = 0xa31ea0b5
    };

    WebPage(WebPageClassType classType = typeWebPageEmpty, InboundPkt *in = 0);
    WebPage(InboundPkt *in);
    WebPage(const Null&);
    virtual ~WebPage();

    void setAuthor(const QString &author);
    QString author() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDescription(const QString &description);
    QString description() const;

    void setDisplayUrl(const QString &displayUrl);
    QString displayUrl() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setEmbedHeight(qint32 embedHeight);
    qint32 embedHeight() const;

    void setEmbedType(const QString &embedType);
    QString embedType() const;

    void setEmbedUrl(const QString &embedUrl);
    QString embedUrl() const;

    void setEmbedWidth(qint32 embedWidth);
    qint32 embedWidth() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint64 id);
    qint64 id() const;

    void setPhoto(const Photo &photo);
    Photo photo() const;

    void setSiteName(const QString &siteName);
    QString siteName() const;

    void setTitle(const QString &title);
    QString title() const;

    void setType(const QString &type);
    QString type() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(WebPageClassType classType);
    WebPageClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static WebPage fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const WebPage &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_author;
    qint32 m_date;
    QString m_description;
    QString m_displayUrl;
    qint32 m_duration;
    qint32 m_embedHeight;
    QString m_embedType;
    QString m_embedUrl;
    qint32 m_embedWidth;
    qint32 m_flags;
    qint64 m_id;
    Photo m_photo;
    QString m_siteName;
    QString m_title;
    QString m_type;
    QString m_url;
    WebPageClassType m_classType;
};

Q_DECLARE_METATYPE(WebPage)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const WebPage &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, WebPage &item);

inline WebPage::WebPage(WebPageClassType classType, InboundPkt *in) :
    m_date(0),
    m_duration(0),
    m_embedHeight(0),
    m_embedWidth(0),
    m_flags(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline WebPage::WebPage(InboundPkt *in) :
    m_date(0),
    m_duration(0),
    m_embedHeight(0),
    m_embedWidth(0),
    m_flags(0),
    m_id(0),
    m_classType(typeWebPageEmpty)
{
    fetch(in);
}

inline WebPage::WebPage(const Null &null) :
    TelegramTypeObject(null),
    m_date(0),
    m_duration(0),
    m_embedHeight(0),
    m_embedWidth(0),
    m_flags(0),
    m_id(0),
    m_classType(typeWebPageEmpty)
{
}

inline WebPage::~WebPage() {
}

inline void WebPage::setAuthor(const QString &author) {
    m_author = author;
}

inline QString WebPage::author() const {
    return m_author;
}

inline void WebPage::setDate(qint32 date) {
    m_date = date;
}

inline qint32 WebPage::date() const {
    return m_date;
}

inline void WebPage::setDescription(const QString &description) {
    m_description = description;
}

inline QString WebPage::description() const {
    return m_description;
}

inline void WebPage::setDisplayUrl(const QString &displayUrl) {
    m_displayUrl = displayUrl;
}

inline QString WebPage::displayUrl() const {
    return m_displayUrl;
}

inline void WebPage::setDuration(qint32 duration) {
    m_duration = duration;
}

inline qint32 WebPage::duration() const {
    return m_duration;
}

inline void WebPage::setEmbedHeight(qint32 embedHeight) {
    m_embedHeight = embedHeight;
}

inline qint32 WebPage::embedHeight() const {
    return m_embedHeight;
}

inline void WebPage::setEmbedType(const QString &embedType) {
    m_embedType = embedType;
}

inline QString WebPage::embedType() const {
    return m_embedType;
}

inline void WebPage::setEmbedUrl(const QString &embedUrl) {
    m_embedUrl = embedUrl;
}

inline QString WebPage::embedUrl() const {
    return m_embedUrl;
}

inline void WebPage::setEmbedWidth(qint32 embedWidth) {
    m_embedWidth = embedWidth;
}

inline qint32 WebPage::embedWidth() const {
    return m_embedWidth;
}

inline void WebPage::setFlags(qint32 flags) {
    m_flags = flags;
}

inline qint32 WebPage::flags() const {
    return m_flags;
}

inline void WebPage::setId(qint64 id) {
    m_id = id;
}

inline qint64 WebPage::id() const {
    return m_id;
}

inline void WebPage::setPhoto(const Photo &photo) {
    m_photo = photo;
}

inline Photo WebPage::photo() const {
    return m_photo;
}

inline void WebPage::setSiteName(const QString &siteName) {
    m_siteName = siteName;
}

inline QString WebPage::siteName() const {
    return m_siteName;
}

inline void WebPage::setTitle(const QString &title) {
    m_title = title;
}

inline QString WebPage::title() const {
    return m_title;
}

inline void WebPage::setType(const QString &type) {
    m_type = type;
}

inline QString WebPage::type() const {
    return m_type;
}

inline void WebPage::setUrl(const QString &url) {
    m_url = url;
}

inline QString WebPage::url() const {
    return m_url;
}

inline bool WebPage::operator ==(const WebPage &b) const {
    return m_classType == b.m_classType &&
           m_author == b.m_author &&
           m_date == b.m_date &&
           m_description == b.m_description &&
           m_displayUrl == b.m_displayUrl &&
           m_duration == b.m_duration &&
           m_embedHeight == b.m_embedHeight &&
           m_embedType == b.m_embedType &&
           m_embedUrl == b.m_embedUrl &&
           m_embedWidth == b.m_embedWidth &&
           m_flags == b.m_flags &&
           m_id == b.m_id &&
           m_photo == b.m_photo &&
           m_siteName == b.m_siteName &&
           m_title == b.m_title &&
           m_type == b.m_type &&
           m_url == b.m_url;
}

inline void WebPage::setClassType(WebPage::WebPageClassType classType) {
    m_classType = classType;
}

inline WebPage::WebPageClassType WebPage::classType() const {
    return m_classType;
}

inline bool WebPage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeWebPageEmpty: {
        m_id = in->fetchLong();
        m_classType = static_cast<WebPageClassType>(x);
        return true;
    }
        break;
    
    case typeWebPagePending: {
        m_id = in->fetchLong();
        m_date = in->fetchInt();
        m_classType = static_cast<WebPageClassType>(x);
        return true;
    }
        break;
    
    case typeWebPage: {
        m_flags = in->fetchInt();
        m_id = in->fetchLong();
        m_url = in->fetchQString();
        m_displayUrl = in->fetchQString();
        if(m_flags & 1<<0) {
            m_type = in->fetchQString();
        }
        if(m_flags & 1<<1) {
            m_siteName = in->fetchQString();
        }
        if(m_flags & 1<<2) {
            m_title = in->fetchQString();
        }
        if(m_flags & 1<<3) {
            m_description = in->fetchQString();
        }
        if(m_flags & 1<<4) {
            m_photo.fetch(in);
        }
        if(m_flags & 1<<5) {
            m_embedUrl = in->fetchQString();
        }
        if(m_flags & 1<<5) {
            m_embedType = in->fetchQString();
        }
        if(m_flags & 1<<6) {
            m_embedWidth = in->fetchInt();
        }
        if(m_flags & 1<<6) {
            m_embedHeight = in->fetchInt();
        }
        if(m_flags & 1<<7) {
            m_duration = in->fetchInt();
        }
        if(m_flags & 1<<8) {
            m_author = in->fetchQString();
        }
        m_classType = static_cast<WebPageClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool WebPage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeWebPageEmpty: {
        out->appendLong(m_id);
        return true;
    }
        break;
    
    case typeWebPagePending: {
        out->appendLong(m_id);
        out->appendInt(m_date);
        return true;
    }
        break;
    
    case typeWebPage: {
        out->appendInt(m_flags);
        out->appendLong(m_id);
        out->appendQString(m_url);
        out->appendQString(m_displayUrl);
        out->appendQString(m_type);
        out->appendQString(m_siteName);
        out->appendQString(m_title);
        out->appendQString(m_description);
        m_photo.push(out);
        out->appendQString(m_embedUrl);
        out->appendQString(m_embedType);
        out->appendInt(m_embedWidth);
        out->appendInt(m_embedHeight);
        out->appendInt(m_duration);
        out->appendQString(m_author);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> WebPage::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeWebPageEmpty: {
        result["classType"] = "WebPage::typeWebPageEmpty";
        result["id"] = QVariant::fromValue<qint64>(id());
        return result;
    }
        break;
    
    case typeWebPagePending: {
        result["classType"] = "WebPage::typeWebPagePending";
        result["id"] = QVariant::fromValue<qint64>(id());
        result["date"] = QVariant::fromValue<qint32>(date());
        return result;
    }
        break;
    
    case typeWebPage: {
        result["classType"] = "WebPage::typeWebPage";
        result["id"] = QVariant::fromValue<qint64>(id());
        result["url"] = QVariant::fromValue<QString>(url());
        result["displayUrl"] = QVariant::fromValue<QString>(displayUrl());
        result["type"] = QVariant::fromValue<QString>(type());
        result["siteName"] = QVariant::fromValue<QString>(siteName());
        result["title"] = QVariant::fromValue<QString>(title());
        result["description"] = QVariant::fromValue<QString>(description());
        result["photo"] = m_photo.toMap();
        result["embedUrl"] = QVariant::fromValue<QString>(embedUrl());
        result["embedType"] = QVariant::fromValue<QString>(embedType());
        result["embedWidth"] = QVariant::fromValue<qint32>(embedWidth());
        result["embedHeight"] = QVariant::fromValue<qint32>(embedHeight());
        result["duration"] = QVariant::fromValue<qint32>(duration());
        result["author"] = QVariant::fromValue<QString>(author());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline WebPage WebPage::fromMap(const QMap<QString, QVariant> &map) {
    WebPage result;
    if(map.value("classType").toString() == "WebPage::typeWebPageEmpty") {
        result.setClassType(typeWebPageEmpty);
        result.setId( map.value("id").value<qint64>() );
        return result;
    }
    if(map.value("classType").toString() == "WebPage::typeWebPagePending") {
        result.setClassType(typeWebPagePending);
        result.setId( map.value("id").value<qint64>() );
        result.setDate( map.value("date").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "WebPage::typeWebPage") {
        result.setClassType(typeWebPage);
        result.setId( map.value("id").value<qint64>() );
        result.setUrl( map.value("url").value<QString>() );
        result.setDisplayUrl( map.value("displayUrl").value<QString>() );
        result.setType( map.value("type").value<QString>() );
        result.setSiteName( map.value("siteName").value<QString>() );
        result.setTitle( map.value("title").value<QString>() );
        result.setDescription( map.value("description").value<QString>() );
        result.setPhoto( Photo::fromMap(map.value("photo").toMap()) );
        result.setEmbedUrl( map.value("embedUrl").value<QString>() );
        result.setEmbedType( map.value("embedType").value<QString>() );
        result.setEmbedWidth( map.value("embedWidth").value<qint32>() );
        result.setEmbedHeight( map.value("embedHeight").value<qint32>() );
        result.setDuration( map.value("duration").value<qint32>() );
        result.setAuthor( map.value("author").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray WebPage::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const WebPage &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case WebPage::typeWebPageEmpty:
        stream << item.id();
        break;
    case WebPage::typeWebPagePending:
        stream << item.id();
        stream << item.date();
        break;
    case WebPage::typeWebPage:
        stream << item.flags();
        stream << item.id();
        stream << item.url();
        stream << item.displayUrl();
        stream << item.type();
        stream << item.siteName();
        stream << item.title();
        stream << item.description();
        stream << item.photo();
        stream << item.embedUrl();
        stream << item.embedType();
        stream << item.embedWidth();
        stream << item.embedHeight();
        stream << item.duration();
        stream << item.author();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, WebPage &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<WebPage::WebPageClassType>(type));
    switch(type) {
    case WebPage::typeWebPageEmpty: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    case WebPage::typeWebPagePending: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
    }
        break;
    case WebPage::typeWebPage: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        QString m_display_url;
        stream >> m_display_url;
        item.setDisplayUrl(m_display_url);
        QString m_type;
        stream >> m_type;
        item.setType(m_type);
        QString m_site_name;
        stream >> m_site_name;
        item.setSiteName(m_site_name);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QString m_description;
        stream >> m_description;
        item.setDescription(m_description);
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        QString m_embed_url;
        stream >> m_embed_url;
        item.setEmbedUrl(m_embed_url);
        QString m_embed_type;
        stream >> m_embed_type;
        item.setEmbedType(m_embed_type);
        qint32 m_embed_width;
        stream >> m_embed_width;
        item.setEmbedWidth(m_embed_width);
        qint32 m_embed_height;
        stream >> m_embed_height;
        item.setEmbedHeight(m_embed_height);
        qint32 m_duration;
        stream >> m_duration;
        item.setDuration(m_duration);
        QString m_author;
        stream >> m_author;
        item.setAuthor(m_author);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_WEBPAGE
