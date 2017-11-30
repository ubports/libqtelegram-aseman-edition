// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_KEYBOARDBUTTON
#define LQTG_TYPE_KEYBOARDBUTTON

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QString>

class LIBQTELEGRAMSHARED_EXPORT KeyboardButton : public TelegramTypeObject
{
public:
    enum KeyboardButtonClassType {
        typeKeyboardButton = 0xa2fa4880
    };

    KeyboardButton(KeyboardButtonClassType classType = typeKeyboardButton, InboundPkt *in = 0);
    KeyboardButton(InboundPkt *in);
    KeyboardButton(const Null&);
    virtual ~KeyboardButton();

    void setText(const QString &text);
    QString text() const;

    void setClassType(KeyboardButtonClassType classType);
    KeyboardButtonClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static KeyboardButton fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const KeyboardButton &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_text;
    KeyboardButtonClassType m_classType;
};

Q_DECLARE_METATYPE(KeyboardButton)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const KeyboardButton &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, KeyboardButton &item);

inline KeyboardButton::KeyboardButton(KeyboardButtonClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline KeyboardButton::KeyboardButton(InboundPkt *in) :
    m_classType(typeKeyboardButton)
{
    fetch(in);
}

inline KeyboardButton::KeyboardButton(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeKeyboardButton)
{
}

inline KeyboardButton::~KeyboardButton() {
}

inline void KeyboardButton::setText(const QString &text) {
    m_text = text;
}

inline QString KeyboardButton::text() const {
    return m_text;
}

inline bool KeyboardButton::operator ==(const KeyboardButton &b) const {
    return m_classType == b.m_classType &&
           m_text == b.m_text;
}

inline void KeyboardButton::setClassType(KeyboardButton::KeyboardButtonClassType classType) {
    m_classType = classType;
}

inline KeyboardButton::KeyboardButtonClassType KeyboardButton::classType() const {
    return m_classType;
}

inline bool KeyboardButton::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeKeyboardButton: {
        m_text = in->fetchQString();
        m_classType = static_cast<KeyboardButtonClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool KeyboardButton::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeKeyboardButton: {
        out->appendQString(m_text);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> KeyboardButton::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeKeyboardButton: {
        result["classType"] = "KeyboardButton::typeKeyboardButton";
        result["text"] = QVariant::fromValue<QString>(text());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline KeyboardButton KeyboardButton::fromMap(const QMap<QString, QVariant> &map) {
    KeyboardButton result;
    if(map.value("classType").toString() == "KeyboardButton::typeKeyboardButton") {
        result.setClassType(typeKeyboardButton);
        result.setText( map.value("text").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray KeyboardButton::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const KeyboardButton &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case KeyboardButton::typeKeyboardButton:
        stream << item.text();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, KeyboardButton &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<KeyboardButton::KeyboardButtonClassType>(type));
    switch(type) {
    case KeyboardButton::typeKeyboardButton: {
        QString m_text;
        stream >> m_text;
        item.setText(m_text);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_KEYBOARDBUTTON