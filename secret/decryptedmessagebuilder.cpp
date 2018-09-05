#include "decryptedmessagebuilder.h"
#include "util/utils.h"

DecryptedMessageBuilder::DecryptedMessageBuilder(qint32 layer) : mLayer(layer) {
}

QByteArray DecryptedMessageBuilder::generateRandomBytes() {
    qint32 n = 15 + 4 * (lrand48() % 3);
    QScopedArrayPointer<char> rnd(new char[n]);
    Utils::randomBytes(rnd.data(), n);
    QByteArray randomBytes(rnd.data());
    return randomBytes;
}

DecryptedMessage DecryptedMessageBuilder::buildDecryptedMessageForSendMessage(qint64 randomId, qint32 ttl, const QString &message) {

    DecryptedMessage::DecryptedMessageClassType type = mLayer < 17 ?
                DecryptedMessage::typeDecryptedMessageSecret8 : DecryptedMessage::typeDecryptedMessageSecret17;

    DecryptedMessage decryptedMessage(type);
    decryptedMessage.setRandomId(randomId);
    if (mLayer < 17) {
        decryptedMessage.setRandomBytes(generateRandomBytes());
    } else {
        decryptedMessage.setTtl(ttl);
    }
    decryptedMessage.setMessage(message);

    return decryptedMessage;
}

DecryptedMessage DecryptedMessageBuilder::buildDecryptedMessageForSendVideo(qint64 randomId, qint32 ttl, const QByteArray &key, const QByteArray &iv, qint32 size,
                                                        const QString &mimeType,
                                                        qint32 duration, qint32 width, qint32 height,
                                                        const QByteArray &thumb, qint32 thumbW, qint32 thumbH) {

    DecryptedMessageMedia::DecryptedMessageMediaClassType mediaType = mLayer < 17 ?
                DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret8 :
                DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret17;

    DecryptedMessageMedia media(mediaType);
    media.setThumbBytes(thumb);
    media.setThumbW(thumbW);
    media.setThumbH(thumbH);
    media.setDuration(duration);
    media.setMimeType(mimeType);
    media.setW(width);
    media.setH(height);
    media.setSize(size);
    media.setKey(key);
    media.setIv(iv);

    DecryptedMessage::DecryptedMessageClassType type = mLayer < 17 ?
                DecryptedMessage::typeDecryptedMessageSecret8 : DecryptedMessage::typeDecryptedMessageSecret17;

    DecryptedMessage decryptedMessage(type);
    decryptedMessage.setRandomId(randomId);
    if (mLayer < 17) {
        decryptedMessage.setRandomBytes(generateRandomBytes());
    } else {
        decryptedMessage.setTtl(ttl);
    }
    decryptedMessage.setMedia(media);

    return decryptedMessage;
}

DecryptedMessage DecryptedMessageBuilder::buildDecryptedMessageForSendPhoto(qint64 randomId, qint32 ttl, const QByteArray &key, const QByteArray &iv, qint32 size,
                                                                            qint32 width, qint32 height,
                                                                            const QByteArray &thumb, qint32 thumbW, qint32 thumbH) {

    DecryptedMessageMedia media(DecryptedMessageMedia::DecryptedMessageMediaClassType::typeDecryptedMessageMediaPhotoSecret8);
    media.setThumbBytes(thumb);
    media.setThumbW(thumbW);
    media.setThumbH(thumbH);
    media.setW(width);
    media.setH(height);
    media.setSize(size);
    media.setKey(key);
    media.setIv(iv);

    DecryptedMessage::DecryptedMessageClassType type = mLayer < 17 ?
                DecryptedMessage::typeDecryptedMessageSecret8 : DecryptedMessage::typeDecryptedMessageSecret17;

    DecryptedMessage decryptedMessage(type);
    decryptedMessage.setRandomId(randomId);
    if (mLayer < 17) {
        decryptedMessage.setRandomBytes(generateRandomBytes());
    } else {
        decryptedMessage.setTtl(ttl);
    }
    decryptedMessage.setMedia(media);

    return decryptedMessage;
}


DecryptedMessage DecryptedMessageBuilder::buildDecryptedMessageForSendDocument(qint64 randomId, qint32 ttl, const QByteArray &key, const QByteArray &iv, qint32 size,
                                                                               const QString &fileName, const QString &mimeType,
                                                                               const QByteArray &thumb, qint32 thumbW, qint32 thumbH) {

    DecryptedMessageMedia media(DecryptedMessageMedia::DecryptedMessageMediaClassType::typeDecryptedMessageMediaDocumentSecret8);
    media.setThumbBytes(thumb);
    media.setThumbW(thumbW);
    media.setThumbH(thumbH);
    media.setFileName(fileName);
    media.setMimeType(mimeType);
    media.setSize(size);
    media.setKey(key);
    media.setIv(iv);

    DecryptedMessage::DecryptedMessageClassType type = mLayer < 17 ?
                DecryptedMessage::typeDecryptedMessageSecret8 : DecryptedMessage::typeDecryptedMessageSecret17;

    DecryptedMessage decryptedMessage(type);
    decryptedMessage.setRandomId(randomId);
    if (mLayer < 17) {
        decryptedMessage.setRandomBytes(generateRandomBytes());
    } else {
        decryptedMessage.setTtl(ttl);
    }
    decryptedMessage.setMedia(media);

    return decryptedMessage;
}

DecryptedMessage DecryptedMessageBuilder::buildDecryptedMessageForNotifyLayer(qint64 randomId, qint32 layer) {

    DecryptedMessage::DecryptedMessageClassType type = mLayer < 17 ?
                DecryptedMessage::typeDecryptedMessageServiceSecret8 : DecryptedMessage::typeDecryptedMessageServiceSecret17;

    DecryptedMessage decryptedMessage(type);
    decryptedMessage.setRandomId(randomId);
    if (mLayer < 17) {
        decryptedMessage.setRandomBytes(generateRandomBytes());
    }
    DecryptedMessageAction action(DecryptedMessageAction::typeDecryptedMessageActionNotifyLayerSecret17);
    action.setLayer(layer);
    decryptedMessage.setAction(action);

    return decryptedMessage;
}

DecryptedMessage DecryptedMessageBuilder::buildDecryptedMessageForTtl(qint64 randomId, qint32 ttl) {

    DecryptedMessage::DecryptedMessageClassType type = mLayer < 17 ?
                DecryptedMessage::typeDecryptedMessageSecret8 : DecryptedMessage::typeDecryptedMessageSecret17;

    DecryptedMessage decryptedMessage(type);
    decryptedMessage.setRandomId(randomId);
    if (mLayer < 17) {
        decryptedMessage.setRandomBytes(generateRandomBytes());
    }
    DecryptedMessageAction action(DecryptedMessageAction::DecryptedMessageActionClassType::typeDecryptedMessageActionSetMessageTTLSecret8);
    action.setTtlSeconds(ttl);
    decryptedMessage.setAction(action);

    return decryptedMessage;
}

DecryptedMessage DecryptedMessageBuilder::buildDecryptedMessageForResend(qint64 randomId, qint32 startSeqNo, qint32 endSeqNo) {

    DecryptedMessage::DecryptedMessageClassType type = mLayer < 17 ?
                DecryptedMessage::typeDecryptedMessageSecret8 : DecryptedMessage::typeDecryptedMessageSecret17;

    DecryptedMessage decryptedMessage(type);
    decryptedMessage.setRandomId(randomId);
    if (mLayer < 17) {
        decryptedMessage.setRandomBytes(generateRandomBytes());
    }
    DecryptedMessageAction action(DecryptedMessageAction::DecryptedMessageActionClassType::typeDecryptedMessageActionResendSecret17);
    action.setStartSeqNo(startSeqNo);
    action.setEndSeqNo(endSeqNo);
    decryptedMessage.setAction(action);

    return decryptedMessage;
}
