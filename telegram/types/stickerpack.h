// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_STICKERPACK
#define LQTG_TYPE_STICKERPACK

#include "telegramtypeobject.h"
#include <QList>
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT StickerPack : public TelegramTypeObject
{
public:
    enum StickerPackType {
        typeStickerPack = 0x12b299d4
    };

    StickerPack(StickerPackType classType = typeStickerPack, InboundPkt *in = 0);
    StickerPack(InboundPkt *in);
    virtual ~StickerPack();

    void setDocuments(const QList<qint64> &documents);
    QList<qint64> documents() const;

    void setEmoticon(const QString &emoticon);
    QString emoticon() const;

    void setClassType(StickerPackType classType);
    StickerPackType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const StickerPack &b);

private:
    QList<qint64> m_documents;
    QString m_emoticon;
    StickerPackType m_classType;
};

#endif // LQTG_TYPE_STICKERPACK