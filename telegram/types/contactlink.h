// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTLINK
#define LQTG_TYPE_CONTACTLINK

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>


class LIBQTELEGRAMSHARED_EXPORT ContactLink : public TelegramTypeObject
{
public:
    enum ContactLinkClassType {
        typeContactLinkUnknown = 0x5f4f9247,
        typeContactLinkNone = 0xfeedd3ad,
        typeContactLinkHasPhone = 0x268f3f59,
        typeContactLinkContact = 0xd502c2d0
    };

    ContactLink(ContactLinkClassType classType = typeContactLinkUnknown, InboundPkt *in = 0);
    ContactLink(InboundPkt *in);
    ContactLink(const Null&);
    virtual ~ContactLink();

    void setClassType(ContactLinkClassType classType);
    ContactLinkClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ContactLink fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const ContactLink &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    ContactLinkClassType m_classType;
};

Q_DECLARE_METATYPE(ContactLink)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ContactLink &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ContactLink &item);

inline ContactLink::ContactLink(ContactLinkClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline ContactLink::ContactLink(InboundPkt *in) :
    m_classType(typeContactLinkUnknown)
{
    fetch(in);
}

inline ContactLink::ContactLink(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeContactLinkUnknown)
{
}

inline ContactLink::~ContactLink() {
}

inline bool ContactLink::operator ==(const ContactLink &b) const {
    return m_classType == b.m_classType;
}

inline void ContactLink::setClassType(ContactLink::ContactLinkClassType classType) {
    m_classType = classType;
}

inline ContactLink::ContactLinkClassType ContactLink::classType() const {
    return m_classType;
}

inline bool ContactLink::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactLinkUnknown: {
        m_classType = static_cast<ContactLinkClassType>(x);
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        m_classType = static_cast<ContactLinkClassType>(x);
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        m_classType = static_cast<ContactLinkClassType>(x);
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        m_classType = static_cast<ContactLinkClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool ContactLink::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactLinkUnknown: {
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> ContactLink::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeContactLinkUnknown: {
        result["classType"] = "ContactLink::typeContactLinkUnknown";
        return result;
    }
        break;
    
    case typeContactLinkNone: {
        result["classType"] = "ContactLink::typeContactLinkNone";
        return result;
    }
        break;
    
    case typeContactLinkHasPhone: {
        result["classType"] = "ContactLink::typeContactLinkHasPhone";
        return result;
    }
        break;
    
    case typeContactLinkContact: {
        result["classType"] = "ContactLink::typeContactLinkContact";
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline ContactLink ContactLink::fromMap(const QMap<QString, QVariant> &map) {
    ContactLink result;
    if(map.value("classType").toString() == "ContactLink::typeContactLinkUnknown") {
        result.setClassType(typeContactLinkUnknown);
        return result;
    }
    if(map.value("classType").toString() == "ContactLink::typeContactLinkNone") {
        result.setClassType(typeContactLinkNone);
        return result;
    }
    if(map.value("classType").toString() == "ContactLink::typeContactLinkHasPhone") {
        result.setClassType(typeContactLinkHasPhone);
        return result;
    }
    if(map.value("classType").toString() == "ContactLink::typeContactLinkContact") {
        result.setClassType(typeContactLinkContact);
        return result;
    }
    return result;
}

inline QByteArray ContactLink::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const ContactLink &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ContactLink::typeContactLinkUnknown:
        
        break;
    case ContactLink::typeContactLinkNone:
        
        break;
    case ContactLink::typeContactLinkHasPhone:
        
        break;
    case ContactLink::typeContactLinkContact:
        
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, ContactLink &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ContactLink::ContactLinkClassType>(type));
    switch(type) {
    case ContactLink::typeContactLinkUnknown: {
        
    }
        break;
    case ContactLink::typeContactLinkNone: {
        
    }
        break;
    case ContactLink::typeContactLinkHasPhone: {
        
    }
        break;
    case ContactLink::typeContactLinkContact: {
        
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_CONTACTLINK
