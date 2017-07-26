// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "sendmessageaction.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

SendMessageAction::SendMessageAction(SendMessageActionType classType, InboundPkt *in) :
    m_progress(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

SendMessageAction::SendMessageAction(InboundPkt *in) :
    m_progress(0),
    m_classType(typeSendMessageTypingAction)
{
    fetch(in);
}

SendMessageAction::~SendMessageAction() {
}

void SendMessageAction::setProgress(qint32 progress) {
    m_progress = progress;
}

qint32 SendMessageAction::progress() const {
    return m_progress;
}

bool SendMessageAction::operator ==(const SendMessageAction &b) {
    return m_progress == b.m_progress;
}

void SendMessageAction::setClassType(SendMessageAction::SendMessageActionType classType) {
    m_classType = classType;
}

SendMessageAction::SendMessageActionType SendMessageAction::classType() const {
    return m_classType;
}

bool SendMessageAction::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeSendMessageTypingAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageCancelAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageRecordVideoAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadVideoAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageRecordAudioAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadAudioAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadPhotoAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadDocumentAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageGeoLocationAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageChooseContactAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool SendMessageAction::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeSendMessageTypingAction: {
        return true;
    }
        break;
    
    case typeSendMessageCancelAction: {
        return true;
    }
        break;
    
    case typeSendMessageRecordVideoAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadVideoAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageRecordAudioAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadAudioAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageUploadPhotoAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageUploadDocumentAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageGeoLocationAction: {
        return true;
    }
        break;
    
    case typeSendMessageChooseContactAction: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

