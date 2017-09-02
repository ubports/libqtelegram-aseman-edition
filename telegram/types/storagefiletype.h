// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_STORAGEFILETYPE
#define LQTG_TYPE_STORAGEFILETYPE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>


class LIBQTELEGRAMSHARED_EXPORT StorageFileType : public TelegramTypeObject
{
public:
    enum StorageFileTypeClassType {
        typeStorageFileUnknown = 0xaa963b05,
        typeStorageFileJpeg = 0x7efe0e,
        typeStorageFileGif = 0xcae1aadf,
        typeStorageFilePng = 0xa4f63c0,
        typeStorageFileMp3 = 0x528a0677,
        typeStorageFileMov = 0x4b09ebbc,
        typeStorageFilePartial = 0x40bc6f52,
        typeStorageFileMp4 = 0xb3cea0e4,
        typeStorageFileWebp = 0x1081464c,
        typeStorageFilePdf = 0xae1e508d
    };

    StorageFileType(StorageFileTypeClassType classType = typeStorageFileUnknown, InboundPkt *in = 0);
    StorageFileType(InboundPkt *in);
    StorageFileType(const Null&);
    virtual ~StorageFileType();

    void setClassType(StorageFileTypeClassType classType);
    StorageFileTypeClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static StorageFileType fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const StorageFileType &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    StorageFileTypeClassType m_classType;
};

Q_DECLARE_METATYPE(StorageFileType)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const StorageFileType &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, StorageFileType &item);

inline StorageFileType::StorageFileType(StorageFileTypeClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline StorageFileType::StorageFileType(InboundPkt *in) :
    m_classType(typeStorageFileUnknown)
{
    fetch(in);
}

inline StorageFileType::StorageFileType(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeStorageFileUnknown)
{
}

inline StorageFileType::~StorageFileType() {
}

inline bool StorageFileType::operator ==(const StorageFileType &b) const {
    return m_classType == b.m_classType;
}

inline void StorageFileType::setClassType(StorageFileType::StorageFileTypeClassType classType) {
    m_classType = classType;
}

inline StorageFileType::StorageFileTypeClassType StorageFileType::classType() const {
    return m_classType;
}

inline bool StorageFileType::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeStorageFileUnknown: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFileJpeg: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFileGif: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFilePng: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFileMp3: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFileMov: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFilePartial: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFileMp4: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFileWebp: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    case typeStorageFilePdf: {
        m_classType = static_cast<StorageFileTypeClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool StorageFileType::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeStorageFileUnknown: {
        return true;
    }
        break;
    
    case typeStorageFileJpeg: {
        return true;
    }
        break;
    
    case typeStorageFileGif: {
        return true;
    }
        break;
    
    case typeStorageFilePng: {
        return true;
    }
        break;
    
    case typeStorageFileMp3: {
        return true;
    }
        break;
    
    case typeStorageFileMov: {
        return true;
    }
        break;
    
    case typeStorageFilePartial: {
        return true;
    }
        break;
    
    case typeStorageFileMp4: {
        return true;
    }
        break;
    
    case typeStorageFileWebp: {
        return true;
    }
        break;
    
    case typeStorageFilePdf: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> StorageFileType::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeStorageFileUnknown: {
        result["classType"] = "StorageFileType::typeStorageFileUnknown";
        return result;
    }
        break;
    
    case typeStorageFileJpeg: {
        result["classType"] = "StorageFileType::typeStorageFileJpeg";
        return result;
    }
        break;
    
    case typeStorageFileGif: {
        result["classType"] = "StorageFileType::typeStorageFileGif";
        return result;
    }
        break;
    
    case typeStorageFilePng: {
        result["classType"] = "StorageFileType::typeStorageFilePng";
        return result;
    }
        break;
    
    case typeStorageFileMp3: {
        result["classType"] = "StorageFileType::typeStorageFileMp3";
        return result;
    }
        break;
    
    case typeStorageFileMov: {
        result["classType"] = "StorageFileType::typeStorageFileMov";
        return result;
    }
        break;
    
    case typeStorageFilePartial: {
        result["classType"] = "StorageFileType::typeStorageFilePartial";
        return result;
    }
        break;
    
    case typeStorageFileMp4: {
        result["classType"] = "StorageFileType::typeStorageFileMp4";
        return result;
    }
        break;
    
    case typeStorageFileWebp: {
        result["classType"] = "StorageFileType::typeStorageFileWebp";
        return result;
    }
        break;
    
    case typeStorageFilePdf: {
        result["classType"] = "StorageFileType::typeStorageFilePdf";
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline StorageFileType StorageFileType::fromMap(const QMap<QString, QVariant> &map) {
    StorageFileType result;
    if(map.value("classType").toString() == "StorageFileType::typeStorageFileUnknown") {
        result.setClassType(typeStorageFileUnknown);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFileJpeg") {
        result.setClassType(typeStorageFileJpeg);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFileGif") {
        result.setClassType(typeStorageFileGif);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFilePng") {
        result.setClassType(typeStorageFilePng);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFileMp3") {
        result.setClassType(typeStorageFileMp3);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFileMov") {
        result.setClassType(typeStorageFileMov);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFilePartial") {
        result.setClassType(typeStorageFilePartial);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFileMp4") {
        result.setClassType(typeStorageFileMp4);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFileWebp") {
        result.setClassType(typeStorageFileWebp);
        return result;
    }
    if(map.value("classType").toString() == "StorageFileType::typeStorageFilePdf") {
        result.setClassType(typeStorageFilePdf);
        return result;
    }
    return result;
}

inline QByteArray StorageFileType::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const StorageFileType &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case StorageFileType::typeStorageFileUnknown:
        
        break;
    case StorageFileType::typeStorageFileJpeg:
        
        break;
    case StorageFileType::typeStorageFileGif:
        
        break;
    case StorageFileType::typeStorageFilePng:
        
        break;
    case StorageFileType::typeStorageFileMp3:
        
        break;
    case StorageFileType::typeStorageFileMov:
        
        break;
    case StorageFileType::typeStorageFilePartial:
        
        break;
    case StorageFileType::typeStorageFileMp4:
        
        break;
    case StorageFileType::typeStorageFileWebp:
        
        break;
    case StorageFileType::typeStorageFilePdf:
        
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, StorageFileType &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<StorageFileType::StorageFileTypeClassType>(type));
    switch(type) {
    case StorageFileType::typeStorageFileUnknown: {
        
    }
        break;
    case StorageFileType::typeStorageFileJpeg: {
        
    }
        break;
    case StorageFileType::typeStorageFileGif: {
        
    }
        break;
    case StorageFileType::typeStorageFilePng: {
        
    }
        break;
    case StorageFileType::typeStorageFileMp3: {
        
    }
        break;
    case StorageFileType::typeStorageFileMov: {
        
    }
        break;
    case StorageFileType::typeStorageFilePartial: {
        
    }
        break;
    case StorageFileType::typeStorageFileMp4: {
        
    }
        break;
    case StorageFileType::typeStorageFileWebp: {
        
    }
        break;
    case StorageFileType::typeStorageFilePdf: {
        
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_STORAGEFILETYPE
