// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_VIDEO_OBJECT
#define LQTG_TYPE_VIDEO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/video.h"

#include <QPointer>
#include "photosizeobject.h"

class LIBQTELEGRAMSHARED_EXPORT VideoObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(VideoClassType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 dcId READ dcId WRITE setDcId NOTIFY dcIdChanged)
    Q_PROPERTY(qint32 duration READ duration WRITE setDuration NOTIFY durationChanged)
    Q_PROPERTY(qint32 h READ h WRITE setH NOTIFY hChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString mimeType READ mimeType WRITE setMimeType NOTIFY mimeTypeChanged)
    Q_PROPERTY(qint32 size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(PhotoSizeObject* thumb READ thumb WRITE setThumb NOTIFY thumbChanged)
    Q_PROPERTY(qint32 w READ w WRITE setW NOTIFY wChanged)
    Q_PROPERTY(Video core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum VideoClassType {
        TypeVideoEmpty,
        TypeVideo
    };

    VideoObject(const Video &core, QObject *parent = 0);
    VideoObject(QObject *parent = 0);
    virtual ~VideoObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setH(qint32 h);
    qint32 h() const;

    void setId(qint64 id);
    qint64 id() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setThumb(PhotoSizeObject* thumb);
    PhotoSizeObject* thumb() const;

    void setW(qint32 w);
    qint32 w() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const Video &core);
    Video core() const;

    VideoObject &operator =(const Video &b);
    bool operator ==(const Video &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void dateChanged();
    void dcIdChanged();
    void durationChanged();
    void hChanged();
    void idChanged();
    void mimeTypeChanged();
    void sizeChanged();
    void thumbChanged();
    void wChanged();

private Q_SLOTS:
    void coreThumbChanged();

private:
    QPointer<PhotoSizeObject> m_thumb;
    Video m_core;
};

inline VideoObject::VideoObject(const Video &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumb(0),
    m_core(core)
{
    m_thumb = new PhotoSizeObject(m_core.thumb(), this);
    connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &VideoObject::coreThumbChanged);
}

inline VideoObject::VideoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumb(0),
    m_core()
{
    m_thumb = new PhotoSizeObject(m_core.thumb(), this);
    connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &VideoObject::coreThumbChanged);
}

inline VideoObject::~VideoObject() {
}

inline void VideoObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

inline qint64 VideoObject::accessHash() const {
    return m_core.accessHash();
}

inline void VideoObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

inline qint32 VideoObject::date() const {
    return m_core.date();
}

inline void VideoObject::setDcId(qint32 dcId) {
    if(m_core.dcId() == dcId) return;
    m_core.setDcId(dcId);
    Q_EMIT dcIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 VideoObject::dcId() const {
    return m_core.dcId();
}

inline void VideoObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

inline qint32 VideoObject::duration() const {
    return m_core.duration();
}

inline void VideoObject::setH(qint32 h) {
    if(m_core.h() == h) return;
    m_core.setH(h);
    Q_EMIT hChanged();
    Q_EMIT coreChanged();
}

inline qint32 VideoObject::h() const {
    return m_core.h();
}

inline void VideoObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

inline qint64 VideoObject::id() const {
    return m_core.id();
}

inline void VideoObject::setMimeType(const QString &mimeType) {
    if(m_core.mimeType() == mimeType) return;
    m_core.setMimeType(mimeType);
    Q_EMIT mimeTypeChanged();
    Q_EMIT coreChanged();
}

inline QString VideoObject::mimeType() const {
    return m_core.mimeType();
}

inline void VideoObject::setSize(qint32 size) {
    if(m_core.size() == size) return;
    m_core.setSize(size);
    Q_EMIT sizeChanged();
    Q_EMIT coreChanged();
}

inline qint32 VideoObject::size() const {
    return m_core.size();
}

inline void VideoObject::setThumb(PhotoSizeObject* thumb) {
    if(m_thumb == thumb) return;
    if(m_thumb) delete m_thumb;
    m_thumb = thumb;
    if(m_thumb) {
        m_thumb->setParent(this);
        m_core.setThumb(m_thumb->core());
        connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &VideoObject::coreThumbChanged);
    }
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}

inline PhotoSizeObject*  VideoObject::thumb() const {
    return m_thumb;
}

inline void VideoObject::setW(qint32 w) {
    if(m_core.w() == w) return;
    m_core.setW(w);
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
}

inline qint32 VideoObject::w() const {
    return m_core.w();
}

inline VideoObject &VideoObject::operator =(const Video &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_thumb->setCore(b.thumb());

    Q_EMIT accessHashChanged();
    Q_EMIT dateChanged();
    Q_EMIT dcIdChanged();
    Q_EMIT durationChanged();
    Q_EMIT hChanged();
    Q_EMIT idChanged();
    Q_EMIT mimeTypeChanged();
    Q_EMIT sizeChanged();
    Q_EMIT thumbChanged();
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool VideoObject::operator ==(const Video &b) const {
    return m_core == b;
}

inline void VideoObject::setClassType(quint32 classType) {
    Video::VideoClassType result;
    switch(classType) {
    case TypeVideoEmpty:
        result = Video::typeVideoEmpty;
        break;
    case TypeVideo:
        result = Video::typeVideo;
        break;
    default:
        result = Video::typeVideoEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 VideoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Video::typeVideoEmpty:
        result = TypeVideoEmpty;
        break;
    case Video::typeVideo:
        result = TypeVideo;
        break;
    default:
        result = TypeVideoEmpty;
        break;
    }

    return result;
}

inline void VideoObject::setCore(const Video &core) {
    operator =(core);
}

inline Video VideoObject::core() const {
    return m_core;
}

inline void VideoObject::coreThumbChanged() {
    if(m_core.thumb() == m_thumb->core()) return;
    m_core.setThumb(m_thumb->core());
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_VIDEO_OBJECT
