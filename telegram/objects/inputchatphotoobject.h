// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTCHATPHOTO_OBJECT
#define LQTG_TYPE_INPUTCHATPHOTO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputchatphoto.h"

#include <QPointer>
#include "inputphotocropobject.h"
#include "inputfileobject.h"
#include "inputphotoobject.h"

class LIBQTELEGRAMSHARED_EXPORT InputChatPhotoObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputChatPhotoClassType)
    Q_PROPERTY(InputPhotoCropObject* crop READ crop WRITE setCrop NOTIFY cropChanged)
    Q_PROPERTY(InputFileObject* file READ file WRITE setFile NOTIFY fileChanged)
    Q_PROPERTY(InputPhotoObject* id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(InputChatPhoto core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputChatPhotoClassType {
        TypeInputChatPhotoEmpty,
        TypeInputChatUploadedPhoto,
        TypeInputChatPhoto
    };

    InputChatPhotoObject(const InputChatPhoto &core, QObject *parent = 0);
    InputChatPhotoObject(QObject *parent = 0);
    virtual ~InputChatPhotoObject();

    void setCrop(InputPhotoCropObject* crop);
    InputPhotoCropObject* crop() const;

    void setFile(InputFileObject* file);
    InputFileObject* file() const;

    void setId(InputPhotoObject* id);
    InputPhotoObject* id() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputChatPhoto &core);
    InputChatPhoto core() const;

    InputChatPhotoObject &operator =(const InputChatPhoto &b);
    bool operator ==(const InputChatPhoto &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void cropChanged();
    void fileChanged();
    void idChanged();

private Q_SLOTS:
    void coreCropChanged();
    void coreFileChanged();
    void coreIdChanged();

private:
    QPointer<InputPhotoCropObject> m_crop;
    QPointer<InputFileObject> m_file;
    QPointer<InputPhotoObject> m_id;
    InputChatPhoto m_core;
};

inline InputChatPhotoObject::InputChatPhotoObject(const InputChatPhoto &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_crop(0),
    m_file(0),
    m_id(0),
    m_core(core)
{
    m_crop = new InputPhotoCropObject(m_core.crop(), this);
    connect(m_crop.data(), &InputPhotoCropObject::coreChanged, this, &InputChatPhotoObject::coreCropChanged);
    m_file = new InputFileObject(m_core.file(), this);
    connect(m_file.data(), &InputFileObject::coreChanged, this, &InputChatPhotoObject::coreFileChanged);
    m_id = new InputPhotoObject(m_core.id(), this);
    connect(m_id.data(), &InputPhotoObject::coreChanged, this, &InputChatPhotoObject::coreIdChanged);
}

inline InputChatPhotoObject::InputChatPhotoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_crop(0),
    m_file(0),
    m_id(0),
    m_core()
{
    m_crop = new InputPhotoCropObject(m_core.crop(), this);
    connect(m_crop.data(), &InputPhotoCropObject::coreChanged, this, &InputChatPhotoObject::coreCropChanged);
    m_file = new InputFileObject(m_core.file(), this);
    connect(m_file.data(), &InputFileObject::coreChanged, this, &InputChatPhotoObject::coreFileChanged);
    m_id = new InputPhotoObject(m_core.id(), this);
    connect(m_id.data(), &InputPhotoObject::coreChanged, this, &InputChatPhotoObject::coreIdChanged);
}

inline InputChatPhotoObject::~InputChatPhotoObject() {
}

inline void InputChatPhotoObject::setCrop(InputPhotoCropObject* crop) {
    if(m_crop == crop) return;
    if(m_crop) delete m_crop;
    m_crop = crop;
    if(m_crop) {
        m_crop->setParent(this);
        m_core.setCrop(m_crop->core());
        connect(m_crop.data(), &InputPhotoCropObject::coreChanged, this, &InputChatPhotoObject::coreCropChanged);
    }
    Q_EMIT cropChanged();
    Q_EMIT coreChanged();
}

inline InputPhotoCropObject*  InputChatPhotoObject::crop() const {
    return m_crop;
}

inline void InputChatPhotoObject::setFile(InputFileObject* file) {
    if(m_file == file) return;
    if(m_file) delete m_file;
    m_file = file;
    if(m_file) {
        m_file->setParent(this);
        m_core.setFile(m_file->core());
        connect(m_file.data(), &InputFileObject::coreChanged, this, &InputChatPhotoObject::coreFileChanged);
    }
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}

inline InputFileObject*  InputChatPhotoObject::file() const {
    return m_file;
}

inline void InputChatPhotoObject::setId(InputPhotoObject* id) {
    if(m_id == id) return;
    if(m_id) delete m_id;
    m_id = id;
    if(m_id) {
        m_id->setParent(this);
        m_core.setId(m_id->core());
        connect(m_id.data(), &InputPhotoObject::coreChanged, this, &InputChatPhotoObject::coreIdChanged);
    }
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

inline InputPhotoObject*  InputChatPhotoObject::id() const {
    return m_id;
}

inline InputChatPhotoObject &InputChatPhotoObject::operator =(const InputChatPhoto &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_crop->setCore(b.crop());
    m_file->setCore(b.file());
    m_id->setCore(b.id());

    Q_EMIT cropChanged();
    Q_EMIT fileChanged();
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool InputChatPhotoObject::operator ==(const InputChatPhoto &b) const {
    return m_core == b;
}

inline void InputChatPhotoObject::setClassType(quint32 classType) {
    InputChatPhoto::InputChatPhotoClassType result;
    switch(classType) {
    case TypeInputChatPhotoEmpty:
        result = InputChatPhoto::typeInputChatPhotoEmpty;
        break;
    case TypeInputChatUploadedPhoto:
        result = InputChatPhoto::typeInputChatUploadedPhoto;
        break;
    case TypeInputChatPhoto:
        result = InputChatPhoto::typeInputChatPhoto;
        break;
    default:
        result = InputChatPhoto::typeInputChatPhotoEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 InputChatPhotoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputChatPhoto::typeInputChatPhotoEmpty:
        result = TypeInputChatPhotoEmpty;
        break;
    case InputChatPhoto::typeInputChatUploadedPhoto:
        result = TypeInputChatUploadedPhoto;
        break;
    case InputChatPhoto::typeInputChatPhoto:
        result = TypeInputChatPhoto;
        break;
    default:
        result = TypeInputChatPhotoEmpty;
        break;
    }

    return result;
}

inline void InputChatPhotoObject::setCore(const InputChatPhoto &core) {
    operator =(core);
}

inline InputChatPhoto InputChatPhotoObject::core() const {
    return m_core;
}

inline void InputChatPhotoObject::coreCropChanged() {
    if(m_core.crop() == m_crop->core()) return;
    m_core.setCrop(m_crop->core());
    Q_EMIT cropChanged();
    Q_EMIT coreChanged();
}

inline void InputChatPhotoObject::coreFileChanged() {
    if(m_core.file() == m_file->core()) return;
    m_core.setFile(m_file->core());
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}

inline void InputChatPhotoObject::coreIdChanged() {
    if(m_core.id() == m_id->core()) return;
    m_core.setId(m_id->core());
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_INPUTCHATPHOTO_OBJECT