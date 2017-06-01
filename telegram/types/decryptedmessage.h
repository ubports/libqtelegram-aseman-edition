// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DECRYPTEDMESSAGE
#define LQTG_TYPE_DECRYPTEDMESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include "decryptedmessageaction.h"
#include "decryptedmessagemedia.h"
#include <QString>
#include <QByteArray>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT DecryptedMessage : public TelegramTypeObject
{
public:
    enum DecryptedMessageClassType {
        typeDecryptedMessageSecret8 = 0x1f814f1f,
        typeDecryptedMessageServiceSecret8 = 0xaa48327d,
        typeDecryptedMessageSecret17 = 0x204d3878,
        typeDecryptedMessageServiceSecret17 = 0x73164160
    };

    DecryptedMessage(DecryptedMessageClassType classType = typeDecryptedMessageSecret8, InboundPkt *in = 0);
    DecryptedMessage(InboundPkt *in);
    DecryptedMessage(const Null&);
    DecryptedMessage(const DecryptedMessage &another);
    virtual ~DecryptedMessage();

    void setAction(const DecryptedMessageAction &action);
    DecryptedMessageAction action() const;

    void setMedia(const DecryptedMessageMedia &media);
    DecryptedMessageMedia media() const;

    void setMessage(const QString &message);
    QString message() const;

    void setRandomBytes(const QByteArray &randomBytes);
    QByteArray randomBytes() const;

    void setRandomId(qint64 randomId);
    qint64 randomId() const;

    void setTtl(qint32 ttl);
    qint32 ttl() const;

    void setClassType(DecryptedMessageClassType classType);
    DecryptedMessageClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static DecryptedMessage fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const DecryptedMessage &b) const;
    DecryptedMessage &operator =(const DecryptedMessage &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    DecryptedMessageAction m_action;
    DecryptedMessageMedia m_media;
    QString m_message;
    QByteArray m_randomBytes;
    qint64 m_randomId;
    qint32 m_ttl;
    DecryptedMessageClassType m_classType;
};

Q_DECLARE_METATYPE(DecryptedMessage)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const DecryptedMessage &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, DecryptedMessage &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const DecryptedMessage &item);

#endif // LQTG_TYPE_DECRYPTEDMESSAGE
