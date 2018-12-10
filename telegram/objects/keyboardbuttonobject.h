// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_KEYBOARDBUTTON_OBJECT
#define LQTG_TYPE_KEYBOARDBUTTON_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/keyboardbutton.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT KeyboardButtonObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(KeyboardButtonClassType)
    Q_PROPERTY(QByteArray data READ data WRITE setData NOTIFY dataChanged)
    Q_PROPERTY(QString query READ query WRITE setQuery NOTIFY queryChanged)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)
    Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
    Q_PROPERTY(KeyboardButton core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum KeyboardButtonClassType {
        TypeKeyboardButton,
        TypeKeyboardButtonUrl,
        TypeKeyboardButtonCallback,
        TypeKeyboardButtonRequestPhone,
        TypeKeyboardButtonRequestGeoLocation,
        TypeKeyboardButtonSwitchInline
    };

    KeyboardButtonObject(const KeyboardButton &core, QObject *parent = 0);
    KeyboardButtonObject(QObject *parent = 0);
    virtual ~KeyboardButtonObject();

    void setData(const QByteArray &data);
    QByteArray data() const;

    void setQuery(const QString &query);
    QString query() const;

    void setText(const QString &text);
    QString text() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const KeyboardButton &core);
    KeyboardButton core() const;

    KeyboardButtonObject &operator =(const KeyboardButton &b);
    bool operator ==(const KeyboardButton &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dataChanged();
    void queryChanged();
    void textChanged();
    void urlChanged();

private Q_SLOTS:

private:
    KeyboardButton m_core;
};

inline KeyboardButtonObject::KeyboardButtonObject(const KeyboardButton &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline KeyboardButtonObject::KeyboardButtonObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline KeyboardButtonObject::~KeyboardButtonObject() {
}

inline void KeyboardButtonObject::setData(const QByteArray &data) {
    if(m_core.data() == data) return;
    m_core.setData(data);
    Q_EMIT dataChanged();
    Q_EMIT coreChanged();
}

inline QByteArray KeyboardButtonObject::data() const {
    return m_core.data();
}

inline void KeyboardButtonObject::setQuery(const QString &query) {
    if(m_core.query() == query) return;
    m_core.setQuery(query);
    Q_EMIT queryChanged();
    Q_EMIT coreChanged();
}

inline QString KeyboardButtonObject::query() const {
    return m_core.query();
}

inline void KeyboardButtonObject::setText(const QString &text) {
    if(m_core.text() == text) return;
    m_core.setText(text);
    Q_EMIT textChanged();
    Q_EMIT coreChanged();
}

inline QString KeyboardButtonObject::text() const {
    return m_core.text();
}

inline void KeyboardButtonObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

inline QString KeyboardButtonObject::url() const {
    return m_core.url();
}

inline KeyboardButtonObject &KeyboardButtonObject::operator =(const KeyboardButton &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT dataChanged();
    Q_EMIT queryChanged();
    Q_EMIT textChanged();
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool KeyboardButtonObject::operator ==(const KeyboardButton &b) const {
    return m_core == b;
}

inline void KeyboardButtonObject::setClassType(quint32 classType) {
    KeyboardButton::KeyboardButtonClassType result;
    switch(classType) {
    case TypeKeyboardButton:
        result = KeyboardButton::typeKeyboardButton;
        break;
    case TypeKeyboardButtonUrl:
        result = KeyboardButton::typeKeyboardButtonUrl;
        break;
    case TypeKeyboardButtonCallback:
        result = KeyboardButton::typeKeyboardButtonCallback;
        break;
    case TypeKeyboardButtonRequestPhone:
        result = KeyboardButton::typeKeyboardButtonRequestPhone;
        break;
    case TypeKeyboardButtonRequestGeoLocation:
        result = KeyboardButton::typeKeyboardButtonRequestGeoLocation;
        break;
    case TypeKeyboardButtonSwitchInline:
        result = KeyboardButton::typeKeyboardButtonSwitchInline;
        break;
    default:
        result = KeyboardButton::typeKeyboardButton;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 KeyboardButtonObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case KeyboardButton::typeKeyboardButton:
        result = TypeKeyboardButton;
        break;
    case KeyboardButton::typeKeyboardButtonUrl:
        result = TypeKeyboardButtonUrl;
        break;
    case KeyboardButton::typeKeyboardButtonCallback:
        result = TypeKeyboardButtonCallback;
        break;
    case KeyboardButton::typeKeyboardButtonRequestPhone:
        result = TypeKeyboardButtonRequestPhone;
        break;
    case KeyboardButton::typeKeyboardButtonRequestGeoLocation:
        result = TypeKeyboardButtonRequestGeoLocation;
        break;
    case KeyboardButton::typeKeyboardButtonSwitchInline:
        result = TypeKeyboardButtonSwitchInline;
        break;
    default:
        result = TypeKeyboardButton;
        break;
    }

    return result;
}

inline void KeyboardButtonObject::setCore(const KeyboardButton &core) {
    operator =(core);
}

inline KeyboardButton KeyboardButtonObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_KEYBOARDBUTTON_OBJECT
