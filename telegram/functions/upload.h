// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_UPLOAD
#define LQTG_FNC_UPLOAD

#include "telegramfunctionobject.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QtGlobal>
#include <QByteArray>
#include "telegram/types/uploadfile.h"
#include "telegram/types/inputfilelocation.h"

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Upload : public TelegramFunctionObject
{
public:
    enum UploadFunction {
        fncUploadSaveFilePart = 0xb304a621,
        fncUploadGetFile = 0xe3a6cfb5,
        fncUploadSaveBigFilePart = 0xde7b673d
    };

    Upload();
    virtual ~Upload();

    static bool saveFilePart(OutboundPkt *out, qint64 fileId, qint32 filePart, const QByteArray &bytes);
    static bool saveFilePartResult(InboundPkt *in);

    static bool getFile(OutboundPkt *out, const InputFileLocation &location, qint32 offset, qint32 limit);
    static UploadFile getFileResult(InboundPkt *in);

    static bool saveBigFilePart(OutboundPkt *out, qint64 fileId, qint32 filePart, qint32 fileTotalParts, const QByteArray &bytes);
    static bool saveBigFilePartResult(InboundPkt *in);

};

}
inline Functions::Upload::Upload() {
}

inline Functions::Upload::~Upload() {
}

inline bool Functions::Upload::saveFilePart(OutboundPkt *out, qint64 fileId, qint32 filePart, const QByteArray &bytes) {
    out->appendInt(fncUploadSaveFilePart);
    out->appendLong(fileId);
    out->appendInt(filePart);
    out->appendBytes(bytes);
    return true;
}

inline bool Functions::Upload::saveFilePartResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}

inline bool Functions::Upload::getFile(OutboundPkt *out, const InputFileLocation &location, qint32 offset, qint32 limit) {
    out->appendInt(fncUploadGetFile);
    if(!location.push(out)) return false;
    out->appendInt(offset);
    out->appendInt(limit);
    return true;
}

inline UploadFile Functions::Upload::getFileResult(InboundPkt *in) {
    UploadFile result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Upload::saveBigFilePart(OutboundPkt *out, qint64 fileId, qint32 filePart, qint32 fileTotalParts, const QByteArray &bytes) {
    out->appendInt(fncUploadSaveBigFilePart);
    out->appendLong(fileId);
    out->appendInt(filePart);
    out->appendInt(fileTotalParts);
    out->appendBytes(bytes);
    return true;
}

inline bool Functions::Upload::saveBigFilePartResult(InboundPkt *in) {
    bool result;
    result = in->fetchBool();
    return result;
}


}

#endif // LQTG_FNC_UPLOAD
