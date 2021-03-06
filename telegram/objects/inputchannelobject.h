// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTCHANNEL_OBJECT
#define LQTG_TYPE_INPUTCHANNEL_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputchannel.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputChannelObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputChannelClassType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint32 channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
    Q_PROPERTY(InputChannel core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputChannelClassType {
        TypeInputChannelEmpty,
        TypeInputChannel
    };

    InputChannelObject(const InputChannel &core, QObject *parent = 0);
    InputChannelObject(QObject *parent = 0);
    virtual ~InputChannelObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setChannelId(qint32 channelId);
    qint32 channelId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputChannel &core);
    InputChannel core() const;

    InputChannelObject &operator =(const InputChannel &b);
    bool operator ==(const InputChannel &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void channelIdChanged();

private Q_SLOTS:

private:
    InputChannel m_core;
};

inline InputChannelObject::InputChannelObject(const InputChannel &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline InputChannelObject::InputChannelObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline InputChannelObject::~InputChannelObject() {
}

inline void InputChannelObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

inline qint64 InputChannelObject::accessHash() const {
    return m_core.accessHash();
}

inline void InputChannelObject::setChannelId(qint32 channelId) {
    if(m_core.channelId() == channelId) return;
    m_core.setChannelId(channelId);
    Q_EMIT channelIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 InputChannelObject::channelId() const {
    return m_core.channelId();
}

inline InputChannelObject &InputChannelObject::operator =(const InputChannel &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT accessHashChanged();
    Q_EMIT channelIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool InputChannelObject::operator ==(const InputChannel &b) const {
    return m_core == b;
}

inline void InputChannelObject::setClassType(quint32 classType) {
    InputChannel::InputChannelClassType result;
    switch(classType) {
    case TypeInputChannelEmpty:
        result = InputChannel::typeInputChannelEmpty;
        break;
    case TypeInputChannel:
        result = InputChannel::typeInputChannel;
        break;
    default:
        result = InputChannel::typeInputChannelEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 InputChannelObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputChannel::typeInputChannelEmpty:
        result = TypeInputChannelEmpty;
        break;
    case InputChannel::typeInputChannel:
        result = TypeInputChannel;
        break;
    default:
        result = TypeInputChannelEmpty;
        break;
    }

    return result;
}

inline void InputChannelObject::setCore(const InputChannel &core) {
    operator =(core);
}

inline InputChannel InputChannelObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_INPUTCHANNEL_OBJECT
