// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DECRYPTEDMESSAGEMEDIA
#define LQTG_TYPE_DECRYPTEDMESSAGEMEDIA

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QList>
#include "documentattribute.h"
#include <QString>
#include <QByteArray>
#include "photosize.h"

class LIBQTELEGRAMSHARED_EXPORT DecryptedMessageMedia : public TelegramTypeObject
{
public:
    enum DecryptedMessageMediaClassType {
        typeDecryptedMessageMediaEmptySecret8 = 0x89f5c4a,
        typeDecryptedMessageMediaPhotoSecret8 = 0x32798a8c,
        typeDecryptedMessageMediaVideoSecret8 = 0x4cee6ef3,
        typeDecryptedMessageMediaGeoPointSecret8 = 0x35480a59,
        typeDecryptedMessageMediaContactSecret8 = 0x588a0a97,
        typeDecryptedMessageMediaDocumentSecret8 = 0xb095434b,
        typeDecryptedMessageMediaAudioSecret8 = 0x6080758f,
        typeDecryptedMessageMediaVideoSecret17 = 0x524a415d,
        typeDecryptedMessageMediaAudioSecret17 = 0x57e0a9cb,
        typeDecryptedMessageMediaExternalDocumentSecret23 = 0xfa95b0dd
    };

    DecryptedMessageMedia(DecryptedMessageMediaClassType classType = typeDecryptedMessageMediaEmptySecret8, InboundPkt *in = 0);
    DecryptedMessageMedia(InboundPkt *in);
    DecryptedMessageMedia(const Null&);
    DecryptedMessageMedia(const DecryptedMessageMedia &another);
    virtual ~DecryptedMessageMedia();

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

    void setThumbPhotoSize(const PhotoSize &thumbPhotoSize);
    PhotoSize thumbPhotoSize() const;

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

    void setClassType(DecryptedMessageMediaClassType classType);
    DecryptedMessageMediaClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static DecryptedMessageMedia fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const DecryptedMessageMedia &b) const;
    DecryptedMessageMedia &operator =(const DecryptedMessageMedia &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    QList<DocumentAttribute> m_attributes;
    qint32 m_date;
    qint32 m_dcId;
    qint32 m_duration;
    QString m_fileName;
    QString m_firstName;
    qint32 m_h;
    qint64 m_id;
    QByteArray m_iv;
    QByteArray m_key;
    QString m_lastName;
    qreal m_lat;
    qreal m_longValue;
    QString m_mimeType;
    QString m_phoneNumber;
    qint32 m_size;
    PhotoSize m_thumbPhotoSize;
    QByteArray m_thumbBytes;
    qint32 m_thumbH;
    qint32 m_thumbW;
    qint32 m_userId;
    qint32 m_w;
    DecryptedMessageMediaClassType m_classType;
};

Q_DECLARE_METATYPE(DecryptedMessageMedia)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const DecryptedMessageMedia &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, DecryptedMessageMedia &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const DecryptedMessageMedia &item);

#endif // LQTG_TYPE_DECRYPTEDMESSAGEMEDIA
