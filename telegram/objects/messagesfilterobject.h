// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESFILTER_OBJECT
#define LQTG_TYPE_MESSAGESFILTER_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesfilter.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesFilterObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesFilterClassType)
    Q_PROPERTY(MessagesFilter core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesFilterClassType {
        TypeInputMessagesFilterEmpty,
        TypeInputMessagesFilterPhotos,
        TypeInputMessagesFilterVideo,
        TypeInputMessagesFilterPhotoVideo,
        TypeInputMessagesFilterDocument,
        TypeInputMessagesFilterPhotoVideoDocuments,
        TypeInputMessagesFilterUrl,
        TypeInputMessagesFilterGif,
        TypeInputMessagesFilterVoice,
        TypeInputMessagesFilterMusic,
        TypeInputMessagesFilterChatPhotos
    };

    MessagesFilterObject(const MessagesFilter &core, QObject *parent = 0);
    MessagesFilterObject(QObject *parent = 0);
    virtual ~MessagesFilterObject();

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesFilter &core);
    MessagesFilter core() const;

    MessagesFilterObject &operator =(const MessagesFilter &b);
    bool operator ==(const MessagesFilter &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();

private Q_SLOTS:

private:
    MessagesFilter m_core;
};

inline MessagesFilterObject::MessagesFilterObject(const MessagesFilter &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline MessagesFilterObject::MessagesFilterObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline MessagesFilterObject::~MessagesFilterObject() {
}

inline MessagesFilterObject &MessagesFilterObject::operator =(const MessagesFilter &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

inline bool MessagesFilterObject::operator ==(const MessagesFilter &b) const {
    return m_core == b;
}

inline void MessagesFilterObject::setClassType(quint32 classType) {
    MessagesFilter::MessagesFilterClassType result;
    switch(classType) {
    case TypeInputMessagesFilterEmpty:
        result = MessagesFilter::typeInputMessagesFilterEmpty;
        break;
    case TypeInputMessagesFilterPhotos:
        result = MessagesFilter::typeInputMessagesFilterPhotos;
        break;
    case TypeInputMessagesFilterVideo:
        result = MessagesFilter::typeInputMessagesFilterVideo;
        break;
    case TypeInputMessagesFilterPhotoVideo:
        result = MessagesFilter::typeInputMessagesFilterPhotoVideo;
        break;
    case TypeInputMessagesFilterDocument:
        result = MessagesFilter::typeInputMessagesFilterDocument;
        break;
    case TypeInputMessagesFilterPhotoVideoDocuments:
        result = MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments;
        break;
    case TypeInputMessagesFilterUrl:
        result = MessagesFilter::typeInputMessagesFilterUrl;
        break;
    case TypeInputMessagesFilterGif:
        result = MessagesFilter::typeInputMessagesFilterGif;
        break;
    case TypeInputMessagesFilterVoice:
        result = MessagesFilter::typeInputMessagesFilterVoice;
        break;
    case TypeInputMessagesFilterMusic:
        result = MessagesFilter::typeInputMessagesFilterMusic;
        break;
    case TypeInputMessagesFilterChatPhotos:
        result = MessagesFilter::typeInputMessagesFilterChatPhotos;
        break;
    default:
        result = MessagesFilter::typeInputMessagesFilterEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessagesFilterObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesFilter::typeInputMessagesFilterEmpty:
        result = TypeInputMessagesFilterEmpty;
        break;
    case MessagesFilter::typeInputMessagesFilterPhotos:
        result = TypeInputMessagesFilterPhotos;
        break;
    case MessagesFilter::typeInputMessagesFilterVideo:
        result = TypeInputMessagesFilterVideo;
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideo:
        result = TypeInputMessagesFilterPhotoVideo;
        break;
    case MessagesFilter::typeInputMessagesFilterDocument:
        result = TypeInputMessagesFilterDocument;
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments:
        result = TypeInputMessagesFilterPhotoVideoDocuments;
        break;
    case MessagesFilter::typeInputMessagesFilterUrl:
        result = TypeInputMessagesFilterUrl;
        break;
    case MessagesFilter::typeInputMessagesFilterGif:
        result = TypeInputMessagesFilterGif;
        break;
    case MessagesFilter::typeInputMessagesFilterVoice:
        result = TypeInputMessagesFilterVoice;
        break;
    case MessagesFilter::typeInputMessagesFilterMusic:
        result = TypeInputMessagesFilterMusic;
        break;
    case MessagesFilter::typeInputMessagesFilterChatPhotos:
        result = TypeInputMessagesFilterChatPhotos;
        break;
    default:
        result = TypeInputMessagesFilterEmpty;
        break;
    }

    return result;
}

inline void MessagesFilterObject::setCore(const MessagesFilter &core) {
    operator =(core);
}

inline MessagesFilter MessagesFilterObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_MESSAGESFILTER_OBJECT
