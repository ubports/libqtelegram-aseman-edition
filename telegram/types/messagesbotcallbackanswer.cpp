// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesbotcallbackanswer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessagesBotCallbackAnswer::MessagesBotCallbackAnswer(MessagesBotCallbackAnswerClassType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesBotCallbackAnswer::MessagesBotCallbackAnswer(InboundPkt *in) :
    m_flags(0),
    m_classType(typeMessagesBotCallbackAnswer)
{
    fetch(in);
}

MessagesBotCallbackAnswer::MessagesBotCallbackAnswer(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeMessagesBotCallbackAnswer)
{
}

MessagesBotCallbackAnswer::~MessagesBotCallbackAnswer() {
}

void MessagesBotCallbackAnswer::setAlert(bool alert) {
    if(alert) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool MessagesBotCallbackAnswer::alert() const {
    return (m_flags & 1<<1);
}

void MessagesBotCallbackAnswer::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 MessagesBotCallbackAnswer::flags() const {
    return m_flags;
}

void MessagesBotCallbackAnswer::setMessage(const QString &message) {
    m_message = message;
}

QString MessagesBotCallbackAnswer::message() const {
    return m_message;
}

bool MessagesBotCallbackAnswer::operator ==(const MessagesBotCallbackAnswer &b) const {
    return m_classType == b.m_classType &&
           m_flags == b.m_flags &&
           m_message == b.m_message;
}

void MessagesBotCallbackAnswer::setClassType(MessagesBotCallbackAnswer::MessagesBotCallbackAnswerClassType classType) {
    m_classType = classType;
}

MessagesBotCallbackAnswer::MessagesBotCallbackAnswerClassType MessagesBotCallbackAnswer::classType() const {
    return m_classType;
}

bool MessagesBotCallbackAnswer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesBotCallbackAnswer: {
        m_flags = in->fetchInt();
        if(m_flags & 1<<0) {
            m_message = in->fetchQString();
        }
        m_classType = static_cast<MessagesBotCallbackAnswerClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesBotCallbackAnswer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesBotCallbackAnswer: {
        out->appendInt(m_flags);
        out->appendQString(m_message);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> MessagesBotCallbackAnswer::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessagesBotCallbackAnswer: {
        result["classType"] = "MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer";
        result["alert"] = QVariant::fromValue<bool>(alert());
        result["message"] = QVariant::fromValue<QString>(message());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

MessagesBotCallbackAnswer MessagesBotCallbackAnswer::fromMap(const QMap<QString, QVariant> &map) {
    MessagesBotCallbackAnswer result;
    if(map.value("classType").toString() == "MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer") {
        result.setClassType(typeMessagesBotCallbackAnswer);
        result.setAlert( map.value("alert").value<bool>() );
        result.setMessage( map.value("message").value<QString>() );
        return result;
    }
    return result;
}

QByteArray MessagesBotCallbackAnswer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessagesBotCallbackAnswer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer:
        stream << item.flags();
        stream << item.message();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessagesBotCallbackAnswer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesBotCallbackAnswer::MessagesBotCallbackAnswerClassType>(type));
    switch(type) {
    case MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_message;
        stream >> m_message;
        item.setMessage(m_message);
    }
        break;
    }
    return stream;
}

