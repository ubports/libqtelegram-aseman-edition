// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_KEYBOARDBUTTONROW
#define LQTG_TYPE_KEYBOARDBUTTONROW

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "keyboardbutton.h"

class LIBQTELEGRAMSHARED_EXPORT KeyboardButtonRow : public TelegramTypeObject
{
public:
    enum KeyboardButtonRowClassType {
        typeKeyboardButtonRow = 0x77608b83
    };

    KeyboardButtonRow(KeyboardButtonRowClassType classType = typeKeyboardButtonRow, InboundPkt *in = 0);
    KeyboardButtonRow(InboundPkt *in);
    KeyboardButtonRow(const Null&);
    virtual ~KeyboardButtonRow();

    void setButtons(const QList<KeyboardButton> &buttons);
    QList<KeyboardButton> buttons() const;

    void setClassType(KeyboardButtonRowClassType classType);
    KeyboardButtonRowClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static KeyboardButtonRow fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const KeyboardButtonRow &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<KeyboardButton> m_buttons;
    KeyboardButtonRowClassType m_classType;
};

Q_DECLARE_METATYPE(KeyboardButtonRow)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const KeyboardButtonRow &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, KeyboardButtonRow &item);

inline KeyboardButtonRow::KeyboardButtonRow(KeyboardButtonRowClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline KeyboardButtonRow::KeyboardButtonRow(InboundPkt *in) :
    m_classType(typeKeyboardButtonRow)
{
    fetch(in);
}

inline KeyboardButtonRow::KeyboardButtonRow(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeKeyboardButtonRow)
{
}

inline KeyboardButtonRow::~KeyboardButtonRow() {
}

inline void KeyboardButtonRow::setButtons(const QList<KeyboardButton> &buttons) {
    m_buttons = buttons;
}

inline QList<KeyboardButton> KeyboardButtonRow::buttons() const {
    return m_buttons;
}

inline bool KeyboardButtonRow::operator ==(const KeyboardButtonRow &b) const {
    return m_classType == b.m_classType &&
           m_buttons == b.m_buttons;
}

inline void KeyboardButtonRow::setClassType(KeyboardButtonRow::KeyboardButtonRowClassType classType) {
    m_classType = classType;
}

inline KeyboardButtonRow::KeyboardButtonRowClassType KeyboardButtonRow::classType() const {
    return m_classType;
}

inline bool KeyboardButtonRow::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeKeyboardButtonRow: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_buttons_length = in->fetchInt();
        m_buttons.clear();
        for (qint32 i = 0; i < m_buttons_length; i++) {
            KeyboardButton type;
            type.fetch(in);
            m_buttons.append(type);
        }
        m_classType = static_cast<KeyboardButtonRowClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool KeyboardButtonRow::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeKeyboardButtonRow: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_buttons.count());
        for (qint32 i = 0; i < m_buttons.count(); i++) {
            m_buttons[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> KeyboardButtonRow::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeKeyboardButtonRow: {
        result["classType"] = "KeyboardButtonRow::typeKeyboardButtonRow";
        QList<QVariant> _buttons;
        Q_FOREACH(const KeyboardButton &m__type, m_buttons)
            _buttons << m__type.toMap();
        result["buttons"] = _buttons;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline KeyboardButtonRow KeyboardButtonRow::fromMap(const QMap<QString, QVariant> &map) {
    KeyboardButtonRow result;
    if(map.value("classType").toString() == "KeyboardButtonRow::typeKeyboardButtonRow") {
        result.setClassType(typeKeyboardButtonRow);
        QList<QVariant> map_buttons = map["buttons"].toList();
        QList<KeyboardButton> _buttons;
        Q_FOREACH(const QVariant &var, map_buttons)
            _buttons << KeyboardButton::fromMap(var.toMap());
        result.setButtons(_buttons);
        return result;
    }
    return result;
}

inline QByteArray KeyboardButtonRow::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const KeyboardButtonRow &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case KeyboardButtonRow::typeKeyboardButtonRow:
        stream << item.buttons();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, KeyboardButtonRow &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<KeyboardButtonRow::KeyboardButtonRowClassType>(type));
    switch(type) {
    case KeyboardButtonRow::typeKeyboardButtonRow: {
        QList<KeyboardButton> m_buttons;
        stream >> m_buttons;
        item.setButtons(m_buttons);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_KEYBOARDBUTTONROW
