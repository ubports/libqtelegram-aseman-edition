// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_UPDATES
#define LQTG_FNC_UPDATES

#include "telegramfunctionobject.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include "telegram/types/updatesstate.h"
#include "telegram/types/updatesdifference.h"
#include <QtGlobal>
#include "telegram/types/updateschanneldifference.h"
#include "telegram/types/inputchannel.h"
#include "telegram/types/channelmessagesfilter.h"

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Updates : public TelegramFunctionObject
{
public:
    enum UpdatesFunction {
        fncUpdatesGetState = 0xedd4882a,
        fncUpdatesGetDifference = 0xa041495,
        fncUpdatesGetChannelDifference = 0xbb32d7c0
    };

    Updates();
    virtual ~Updates();

    static bool getState(OutboundPkt *out);
    static UpdatesState getStateResult(InboundPkt *in);

    static bool getDifference(OutboundPkt *out, qint32 pts, qint32 date, qint32 qts);
    static UpdatesDifference getDifferenceResult(InboundPkt *in);

    static bool getChannelDifference(OutboundPkt *out, const InputChannel &channel, const ChannelMessagesFilter &filter, qint32 pts, qint32 limit);
    static UpdatesChannelDifference getChannelDifferenceResult(InboundPkt *in);

};

}
inline Functions::Updates::Updates() {
}

inline Functions::Updates::~Updates() {
}

inline bool Functions::Updates::getState(OutboundPkt *out) {
    out->appendInt(fncUpdatesGetState);
    return true;
}

inline UpdatesState Functions::Updates::getStateResult(InboundPkt *in) {
    UpdatesState result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Updates::getDifference(OutboundPkt *out, qint32 pts, qint32 date, qint32 qts) {
    out->appendInt(fncUpdatesGetDifference);
    out->appendInt(pts);
    out->appendInt(date);
    out->appendInt(qts);
    return true;
}

inline UpdatesDifference Functions::Updates::getDifferenceResult(InboundPkt *in) {
    UpdatesDifference result;
    if(!result.fetch(in)) return result;
    return result;
}

inline bool Functions::Updates::getChannelDifference(OutboundPkt *out, const InputChannel &channel, const ChannelMessagesFilter &filter, qint32 pts, qint32 limit) {
    out->appendInt(fncUpdatesGetChannelDifference);
    if(!channel.push(out)) return false;
    if(!filter.push(out)) return false;
    out->appendInt(pts);
    out->appendInt(limit);
    return true;
}

inline UpdatesChannelDifference Functions::Updates::getChannelDifferenceResult(InboundPkt *in) {
    UpdatesChannelDifference result;
    if(!result.fetch(in)) return result;
    return result;
}


}

#endif // LQTG_FNC_UPDATES
