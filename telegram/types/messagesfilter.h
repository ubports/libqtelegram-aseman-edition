// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESFILTER
#define LQTG_TYPE_MESSAGESFILTER

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>


class LIBQTELEGRAMSHARED_EXPORT MessagesFilter : public TelegramTypeObject
{
public:
    enum MessagesFilterClassType {
        typeInputMessagesFilterEmpty = 0x57e2f66c,
        typeInputMessagesFilterPhotos = 0x9609a51c,
        typeInputMessagesFilterVideo = 0x9fc00e65,
        typeInputMessagesFilterPhotoVideo = 0x56e9f0e4,
        typeInputMessagesFilterDocument = 0x9eddf188,
        typeInputMessagesFilterPhotoVideoDocuments = 0xd95e73bb,
        typeInputMessagesFilterUrl = 0x7ef0dd87,
        typeInputMessagesFilterGif = 0xffc86587,
        typeInputMessagesFilterVoice = 0x50f5c392,
        typeInputMessagesFilterMusic = 0x3751b49e,
        typeInputMessagesFilterChatPhotos = 0x3a20ecb8
    };

    MessagesFilter(MessagesFilterClassType classType = typeInputMessagesFilterEmpty, InboundPkt *in = 0);
    MessagesFilter(InboundPkt *in);
    MessagesFilter(const Null&);
    virtual ~MessagesFilter();

    void setClassType(MessagesFilterClassType classType);
    MessagesFilterClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessagesFilter fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const MessagesFilter &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    MessagesFilterClassType m_classType;
};

Q_DECLARE_METATYPE(MessagesFilter)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessagesFilter &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessagesFilter &item);

inline MessagesFilter::MessagesFilter(MessagesFilterClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline MessagesFilter::MessagesFilter(InboundPkt *in) :
    m_classType(typeInputMessagesFilterEmpty)
{
    fetch(in);
}

inline MessagesFilter::MessagesFilter(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputMessagesFilterEmpty)
{
}

inline MessagesFilter::~MessagesFilter() {
}

inline bool MessagesFilter::operator ==(const MessagesFilter &b) const {
    return m_classType == b.m_classType;
}

inline void MessagesFilter::setClassType(MessagesFilter::MessagesFilterClassType classType) {
    m_classType = classType;
}

inline MessagesFilter::MessagesFilterClassType MessagesFilter::classType() const {
    return m_classType;
}

inline bool MessagesFilter::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputMessagesFilterEmpty: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotos: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterVideo: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideo: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterDocument: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideoDocuments: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterUrl: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterGif: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterVoice: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterMusic: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessagesFilterChatPhotos: {
        m_classType = static_cast<MessagesFilterClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool MessagesFilter::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputMessagesFilterEmpty: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotos: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterVideo: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideo: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterDocument: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideoDocuments: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterUrl: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterGif: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterVoice: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterMusic: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterChatPhotos: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> MessagesFilter::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputMessagesFilterEmpty: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterEmpty";
        return result;
    }
        break;
    
    case typeInputMessagesFilterPhotos: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterPhotos";
        return result;
    }
        break;
    
    case typeInputMessagesFilterVideo: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterVideo";
        return result;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideo: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterPhotoVideo";
        return result;
    }
        break;
    
    case typeInputMessagesFilterDocument: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterDocument";
        return result;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideoDocuments: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments";
        return result;
    }
        break;
    
    case typeInputMessagesFilterUrl: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterUrl";
        return result;
    }
        break;
    
    case typeInputMessagesFilterGif: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterGif";
        return result;
    }
        break;
    
    case typeInputMessagesFilterVoice: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterVoice";
        return result;
    }
        break;
    
    case typeInputMessagesFilterMusic: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterMusic";
        return result;
    }
        break;
    
    case typeInputMessagesFilterChatPhotos: {
        result["classType"] = "MessagesFilter::typeInputMessagesFilterChatPhotos";
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline MessagesFilter MessagesFilter::fromMap(const QMap<QString, QVariant> &map) {
    MessagesFilter result;
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterEmpty") {
        result.setClassType(typeInputMessagesFilterEmpty);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterPhotos") {
        result.setClassType(typeInputMessagesFilterPhotos);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterVideo") {
        result.setClassType(typeInputMessagesFilterVideo);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterPhotoVideo") {
        result.setClassType(typeInputMessagesFilterPhotoVideo);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterDocument") {
        result.setClassType(typeInputMessagesFilterDocument);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments") {
        result.setClassType(typeInputMessagesFilterPhotoVideoDocuments);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterUrl") {
        result.setClassType(typeInputMessagesFilterUrl);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterGif") {
        result.setClassType(typeInputMessagesFilterGif);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterVoice") {
        result.setClassType(typeInputMessagesFilterVoice);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterMusic") {
        result.setClassType(typeInputMessagesFilterMusic);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFilter::typeInputMessagesFilterChatPhotos") {
        result.setClassType(typeInputMessagesFilterChatPhotos);
        return result;
    }
    return result;
}

inline QByteArray MessagesFilter::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const MessagesFilter &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesFilter::typeInputMessagesFilterEmpty:
        
        break;
    case MessagesFilter::typeInputMessagesFilterPhotos:
        
        break;
    case MessagesFilter::typeInputMessagesFilterVideo:
        
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideo:
        
        break;
    case MessagesFilter::typeInputMessagesFilterDocument:
        
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments:
        
        break;
    case MessagesFilter::typeInputMessagesFilterUrl:
        
        break;
    case MessagesFilter::typeInputMessagesFilterGif:
        
        break;
    case MessagesFilter::typeInputMessagesFilterVoice:
        
        break;
    case MessagesFilter::typeInputMessagesFilterMusic:
        
        break;
    case MessagesFilter::typeInputMessagesFilterChatPhotos:
        
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, MessagesFilter &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesFilter::MessagesFilterClassType>(type));
    switch(type) {
    case MessagesFilter::typeInputMessagesFilterEmpty: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterPhotos: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterVideo: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideo: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterDocument: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterUrl: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterGif: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterVoice: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterMusic: {
        
    }
        break;
    case MessagesFilter::typeInputMessagesFilterChatPhotos: {
        
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_MESSAGESFILTER
