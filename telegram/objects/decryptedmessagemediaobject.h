// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DECRYPTEDMESSAGEMEDIA_OBJECT
#define LQTG_TYPE_DECRYPTEDMESSAGEMEDIA_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/decryptedmessagemedia.h"

#include <QPointer>
#include "photosizeobject.h"

class LIBQTELEGRAMSHARED_EXPORT DecryptedMessageMediaObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(DecryptedMessageMediaClassType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(QList<DocumentAttribute> attributes READ attributes WRITE setAttributes NOTIFY attributesChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 dcId READ dcId WRITE setDcId NOTIFY dcIdChanged)
    Q_PROPERTY(qint32 duration READ duration WRITE setDuration NOTIFY durationChanged)
    Q_PROPERTY(QString fileName READ fileName WRITE setFileName NOTIFY fileNameChanged)
    Q_PROPERTY(QString firstName READ firstName WRITE setFirstName NOTIFY firstNameChanged)
    Q_PROPERTY(qint32 h READ h WRITE setH NOTIFY hChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QByteArray iv READ iv WRITE setIv NOTIFY ivChanged)
    Q_PROPERTY(QByteArray key READ key WRITE setKey NOTIFY keyChanged)
    Q_PROPERTY(QString lastName READ lastName WRITE setLastName NOTIFY lastNameChanged)
    Q_PROPERTY(qreal lat READ lat WRITE setLat NOTIFY latChanged)
    Q_PROPERTY(qreal longValue READ longValue WRITE setLongValue NOTIFY longValueChanged)
    Q_PROPERTY(QString mimeType READ mimeType WRITE setMimeType NOTIFY mimeTypeChanged)
    Q_PROPERTY(QString phoneNumber READ phoneNumber WRITE setPhoneNumber NOTIFY phoneNumberChanged)
    Q_PROPERTY(qint32 size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(PhotoSizeObject* thumbPhotoSize READ thumbPhotoSize WRITE setThumbPhotoSize NOTIFY thumbPhotoSizeChanged)
    Q_PROPERTY(QByteArray thumbBytes READ thumbBytes WRITE setThumbBytes NOTIFY thumbBytesChanged)
    Q_PROPERTY(qint32 thumbH READ thumbH WRITE setThumbH NOTIFY thumbHChanged)
    Q_PROPERTY(qint32 thumbW READ thumbW WRITE setThumbW NOTIFY thumbWChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(qint32 w READ w WRITE setW NOTIFY wChanged)
    Q_PROPERTY(DecryptedMessageMedia core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum DecryptedMessageMediaClassType {
        TypeDecryptedMessageMediaEmptySecret8,
        TypeDecryptedMessageMediaPhotoSecret8,
        TypeDecryptedMessageMediaVideoSecret8,
        TypeDecryptedMessageMediaGeoPointSecret8,
        TypeDecryptedMessageMediaContactSecret8,
        TypeDecryptedMessageMediaDocumentSecret8,
        TypeDecryptedMessageMediaAudioSecret8,
        TypeDecryptedMessageMediaVideoSecret17,
        TypeDecryptedMessageMediaAudioSecret17,
        TypeDecryptedMessageMediaExternalDocumentSecret23
    };

    DecryptedMessageMediaObject(const DecryptedMessageMedia &core, QObject *parent = 0);
    DecryptedMessageMediaObject(QObject *parent = 0);
    virtual ~DecryptedMessageMediaObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setAttributes(const QList<DocumentAttribute> &attributes);
    QList<DocumentAttribute> attributes() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setFileName(const QString &fileName);
    QString fileName() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setH(qint32 h);
    qint32 h() const;

    void setId(qint64 id);
    qint64 id() const;

    void setIv(const QByteArray &iv);
    QByteArray iv() const;

    void setKey(const QByteArray &key);
    QByteArray key() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setLat(qreal lat);
    qreal lat() const;

    void setLongValue(qreal longValue);
    qreal longValue() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setPhoneNumber(const QString &phoneNumber);
    QString phoneNumber() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setThumbPhotoSize(PhotoSizeObject* thumbPhotoSize);
    PhotoSizeObject* thumbPhotoSize() const;

    void setThumbBytes(const QByteArray &thumbBytes);
    QByteArray thumbBytes() const;

    void setThumbH(qint32 thumbH);
    qint32 thumbH() const;

    void setThumbW(qint32 thumbW);
    qint32 thumbW() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setW(qint32 w);
    qint32 w() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const DecryptedMessageMedia &core);
    DecryptedMessageMedia core() const;

    DecryptedMessageMediaObject &operator =(const DecryptedMessageMedia &b);
    bool operator ==(const DecryptedMessageMedia &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void attributesChanged();
    void dateChanged();
    void dcIdChanged();
    void durationChanged();
    void fileNameChanged();
    void firstNameChanged();
    void hChanged();
    void idChanged();
    void ivChanged();
    void keyChanged();
    void lastNameChanged();
    void latChanged();
    void longValueChanged();
    void mimeTypeChanged();
    void phoneNumberChanged();
    void sizeChanged();
    void thumbPhotoSizeChanged();
    void thumbBytesChanged();
    void thumbHChanged();
    void thumbWChanged();
    void userIdChanged();
    void wChanged();

private Q_SLOTS:
    void coreThumbPhotoSizeChanged();

private:
    QPointer<PhotoSizeObject> m_thumbPhotoSize;
    DecryptedMessageMedia m_core;
};

inline DecryptedMessageMediaObject::DecryptedMessageMediaObject(const DecryptedMessageMedia &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumbPhotoSize(0),
    m_core(core)
{
    m_thumbPhotoSize = new PhotoSizeObject(m_core.thumbPhotoSize(), this);
    connect(m_thumbPhotoSize.data(), &PhotoSizeObject::coreChanged, this, &DecryptedMessageMediaObject::coreThumbPhotoSizeChanged);
}

inline DecryptedMessageMediaObject::DecryptedMessageMediaObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumbPhotoSize(0),
    m_core()
{
    m_thumbPhotoSize = new PhotoSizeObject(m_core.thumbPhotoSize(), this);
    connect(m_thumbPhotoSize.data(), &PhotoSizeObject::coreChanged, this, &DecryptedMessageMediaObject::coreThumbPhotoSizeChanged);
}

inline DecryptedMessageMediaObject::~DecryptedMessageMediaObject() {
}

inline void DecryptedMessageMediaObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

inline qint64 DecryptedMessageMediaObject::accessHash() const {
    return m_core.accessHash();
}

inline void DecryptedMessageMediaObject::setAttributes(const QList<DocumentAttribute> &attributes) {
    if(m_core.attributes() == attributes) return;
    m_core.setAttributes(attributes);
    Q_EMIT attributesChanged();
    Q_EMIT coreChanged();
}

inline QList<DocumentAttribute> DecryptedMessageMediaObject::attributes() const {
    return m_core.attributes();
}

inline void DecryptedMessageMediaObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::date() const {
    return m_core.date();
}

inline void DecryptedMessageMediaObject::setDcId(qint32 dcId) {
    if(m_core.dcId() == dcId) return;
    m_core.setDcId(dcId);
    Q_EMIT dcIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::dcId() const {
    return m_core.dcId();
}

inline void DecryptedMessageMediaObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::duration() const {
    return m_core.duration();
}

inline void DecryptedMessageMediaObject::setFileName(const QString &fileName) {
    if(m_core.fileName() == fileName) return;
    m_core.setFileName(fileName);
    Q_EMIT fileNameChanged();
    Q_EMIT coreChanged();
}

inline QString DecryptedMessageMediaObject::fileName() const {
    return m_core.fileName();
}

inline void DecryptedMessageMediaObject::setFirstName(const QString &firstName) {
    if(m_core.firstName() == firstName) return;
    m_core.setFirstName(firstName);
    Q_EMIT firstNameChanged();
    Q_EMIT coreChanged();
}

inline QString DecryptedMessageMediaObject::firstName() const {
    return m_core.firstName();
}

inline void DecryptedMessageMediaObject::setH(qint32 h) {
    if(m_core.h() == h) return;
    m_core.setH(h);
    Q_EMIT hChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::h() const {
    return m_core.h();
}

inline void DecryptedMessageMediaObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

inline qint64 DecryptedMessageMediaObject::id() const {
    return m_core.id();
}

inline void DecryptedMessageMediaObject::setIv(const QByteArray &iv) {
    if(m_core.iv() == iv) return;
    m_core.setIv(iv);
    Q_EMIT ivChanged();
    Q_EMIT coreChanged();
}

inline QByteArray DecryptedMessageMediaObject::iv() const {
    return m_core.iv();
}

inline void DecryptedMessageMediaObject::setKey(const QByteArray &key) {
    if(m_core.key() == key) return;
    m_core.setKey(key);
    Q_EMIT keyChanged();
    Q_EMIT coreChanged();
}

inline QByteArray DecryptedMessageMediaObject::key() const {
    return m_core.key();
}

inline void DecryptedMessageMediaObject::setLastName(const QString &lastName) {
    if(m_core.lastName() == lastName) return;
    m_core.setLastName(lastName);
    Q_EMIT lastNameChanged();
    Q_EMIT coreChanged();
}

inline QString DecryptedMessageMediaObject::lastName() const {
    return m_core.lastName();
}

inline void DecryptedMessageMediaObject::setLat(qreal lat) {
    if(m_core.lat() == lat) return;
    m_core.setLat(lat);
    Q_EMIT latChanged();
    Q_EMIT coreChanged();
}

inline qreal DecryptedMessageMediaObject::lat() const {
    return m_core.lat();
}

inline void DecryptedMessageMediaObject::setLongValue(qreal longValue) {
    if(m_core.longValue() == longValue) return;
    m_core.setLongValue(longValue);
    Q_EMIT longValueChanged();
    Q_EMIT coreChanged();
}

inline qreal DecryptedMessageMediaObject::longValue() const {
    return m_core.longValue();
}

inline void DecryptedMessageMediaObject::setMimeType(const QString &mimeType) {
    if(m_core.mimeType() == mimeType) return;
    m_core.setMimeType(mimeType);
    Q_EMIT mimeTypeChanged();
    Q_EMIT coreChanged();
}

inline QString DecryptedMessageMediaObject::mimeType() const {
    return m_core.mimeType();
}

inline void DecryptedMessageMediaObject::setPhoneNumber(const QString &phoneNumber) {
    if(m_core.phoneNumber() == phoneNumber) return;
    m_core.setPhoneNumber(phoneNumber);
    Q_EMIT phoneNumberChanged();
    Q_EMIT coreChanged();
}

inline QString DecryptedMessageMediaObject::phoneNumber() const {
    return m_core.phoneNumber();
}

inline void DecryptedMessageMediaObject::setSize(qint32 size) {
    if(m_core.size() == size) return;
    m_core.setSize(size);
    Q_EMIT sizeChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::size() const {
    return m_core.size();
}

inline void DecryptedMessageMediaObject::setThumbPhotoSize(PhotoSizeObject* thumbPhotoSize) {
    if(m_thumbPhotoSize == thumbPhotoSize) return;
    if(m_thumbPhotoSize) delete m_thumbPhotoSize;
    m_thumbPhotoSize = thumbPhotoSize;
    if(m_thumbPhotoSize) {
        m_thumbPhotoSize->setParent(this);
        m_core.setThumbPhotoSize(m_thumbPhotoSize->core());
        connect(m_thumbPhotoSize.data(), &PhotoSizeObject::coreChanged, this, &DecryptedMessageMediaObject::coreThumbPhotoSizeChanged);
    }
    Q_EMIT thumbPhotoSizeChanged();
    Q_EMIT coreChanged();
}

inline PhotoSizeObject*  DecryptedMessageMediaObject::thumbPhotoSize() const {
    return m_thumbPhotoSize;
}

inline void DecryptedMessageMediaObject::setThumbBytes(const QByteArray &thumbBytes) {
    if(m_core.thumbBytes() == thumbBytes) return;
    m_core.setThumbBytes(thumbBytes);
    Q_EMIT thumbBytesChanged();
    Q_EMIT coreChanged();
}

inline QByteArray DecryptedMessageMediaObject::thumbBytes() const {
    return m_core.thumbBytes();
}

inline void DecryptedMessageMediaObject::setThumbH(qint32 thumbH) {
    if(m_core.thumbH() == thumbH) return;
    m_core.setThumbH(thumbH);
    Q_EMIT thumbHChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::thumbH() const {
    return m_core.thumbH();
}

inline void DecryptedMessageMediaObject::setThumbW(qint32 thumbW) {
    if(m_core.thumbW() == thumbW) return;
    m_core.setThumbW(thumbW);
    Q_EMIT thumbWChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::thumbW() const {
    return m_core.thumbW();
}

inline void DecryptedMessageMediaObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::userId() const {
    return m_core.userId();
}

inline void DecryptedMessageMediaObject::setW(qint32 w) {
    if(m_core.w() == w) return;
    m_core.setW(w);
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
}

inline qint32 DecryptedMessageMediaObject::w() const {
    return m_core.w();
}

inline DecryptedMessageMediaObject &DecryptedMessageMediaObject::operator =(const DecryptedMessageMedia &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_thumbPhotoSize->setCore(b.thumbPhotoSize());

    Q_EMIT accessHashChanged();
    Q_EMIT attributesChanged();
    Q_EMIT dateChanged();
    Q_EMIT dcIdChanged();
    Q_EMIT durationChanged();
    Q_EMIT fileNameChanged();
    Q_EMIT firstNameChanged();
    Q_EMIT hChanged();
    Q_EMIT idChanged();
    Q_EMIT ivChanged();
    Q_EMIT keyChanged();
    Q_EMIT lastNameChanged();
    Q_EMIT latChanged();
    Q_EMIT longValueChanged();
    Q_EMIT mimeTypeChanged();
    Q_EMIT phoneNumberChanged();
    Q_EMIT sizeChanged();
    Q_EMIT thumbPhotoSizeChanged();
    Q_EMIT thumbBytesChanged();
    Q_EMIT thumbHChanged();
    Q_EMIT thumbWChanged();
    Q_EMIT userIdChanged();
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool DecryptedMessageMediaObject::operator ==(const DecryptedMessageMedia &b) const {
    return m_core == b;
}

inline void DecryptedMessageMediaObject::setClassType(quint32 classType) {
    DecryptedMessageMedia::DecryptedMessageMediaClassType result;
    switch(classType) {
    case TypeDecryptedMessageMediaEmptySecret8:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaEmptySecret8;
        break;
    case TypeDecryptedMessageMediaPhotoSecret8:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaPhotoSecret8;
        break;
    case TypeDecryptedMessageMediaVideoSecret8:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret8;
        break;
    case TypeDecryptedMessageMediaGeoPointSecret8:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaGeoPointSecret8;
        break;
    case TypeDecryptedMessageMediaContactSecret8:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaContactSecret8;
        break;
    case TypeDecryptedMessageMediaDocumentSecret8:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaDocumentSecret8;
        break;
    case TypeDecryptedMessageMediaAudioSecret8:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaAudioSecret8;
        break;
    case TypeDecryptedMessageMediaVideoSecret17:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret17;
        break;
    case TypeDecryptedMessageMediaAudioSecret17:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaAudioSecret17;
        break;
    case TypeDecryptedMessageMediaExternalDocumentSecret23:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaExternalDocumentSecret23;
        break;
    default:
        result = DecryptedMessageMedia::typeDecryptedMessageMediaEmptySecret8;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 DecryptedMessageMediaObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case DecryptedMessageMedia::typeDecryptedMessageMediaEmptySecret8:
        result = TypeDecryptedMessageMediaEmptySecret8;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaPhotoSecret8:
        result = TypeDecryptedMessageMediaPhotoSecret8;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret8:
        result = TypeDecryptedMessageMediaVideoSecret8;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaGeoPointSecret8:
        result = TypeDecryptedMessageMediaGeoPointSecret8;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaContactSecret8:
        result = TypeDecryptedMessageMediaContactSecret8;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaDocumentSecret8:
        result = TypeDecryptedMessageMediaDocumentSecret8;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaAudioSecret8:
        result = TypeDecryptedMessageMediaAudioSecret8;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret17:
        result = TypeDecryptedMessageMediaVideoSecret17;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaAudioSecret17:
        result = TypeDecryptedMessageMediaAudioSecret17;
        break;
    case DecryptedMessageMedia::typeDecryptedMessageMediaExternalDocumentSecret23:
        result = TypeDecryptedMessageMediaExternalDocumentSecret23;
        break;
    default:
        result = TypeDecryptedMessageMediaEmptySecret8;
        break;
    }

    return result;
}

inline void DecryptedMessageMediaObject::setCore(const DecryptedMessageMedia &core) {
    operator =(core);
}

inline DecryptedMessageMedia DecryptedMessageMediaObject::core() const {
    return m_core;
}

inline void DecryptedMessageMediaObject::coreThumbPhotoSizeChanged() {
    if(m_core.thumbPhotoSize() == m_thumbPhotoSize->core()) return;
    m_core.setThumbPhotoSize(m_thumbPhotoSize->core());
    Q_EMIT thumbPhotoSizeChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_DECRYPTEDMESSAGEMEDIA_OBJECT