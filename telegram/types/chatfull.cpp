// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "chatfull.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

ChatFull::ChatFull(ChatFullType classType, InboundPkt *in) :
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatFull::ChatFull(InboundPkt *in) :
    m_id(0),
    m_classType(typeChatFull)
{
    fetch(in);
}

ChatFull::~ChatFull() {
}

void ChatFull::setChatPhoto(const Photo &chatPhoto) {
    m_chatPhoto = chatPhoto;
}

Photo ChatFull::chatPhoto() const {
    return m_chatPhoto;
}

void ChatFull::setExportedInvite(const ExportedChatInvite &exportedInvite) {
    m_exportedInvite = exportedInvite;
}

ExportedChatInvite ChatFull::exportedInvite() const {
    return m_exportedInvite;
}

void ChatFull::setId(qint32 id) {
    m_id = id;
}

qint32 ChatFull::id() const {
    return m_id;
}

void ChatFull::setNotifySettings(const PeerNotifySettings &notifySettings) {
    m_notifySettings = notifySettings;
}

PeerNotifySettings ChatFull::notifySettings() const {
    return m_notifySettings;
}

void ChatFull::setParticipants(const ChatParticipants &participants) {
    m_participants = participants;
}

ChatParticipants ChatFull::participants() const {
    return m_participants;
}

bool ChatFull::operator ==(const ChatFull &b) {
    return m_chatPhoto == b.m_chatPhoto &&
           m_exportedInvite == b.m_exportedInvite &&
           m_id == b.m_id &&
           m_notifySettings == b.m_notifySettings &&
           m_participants == b.m_participants;
}

void ChatFull::setClassType(ChatFull::ChatFullType classType) {
    m_classType = classType;
}

ChatFull::ChatFullType ChatFull::classType() const {
    return m_classType;
}

bool ChatFull::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatFull: {
        m_id = in->fetchInt();
        m_participants.fetch(in);
        m_chatPhoto.fetch(in);
        m_notifySettings.fetch(in);
        m_exportedInvite.fetch(in);
        m_classType = static_cast<ChatFullType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool ChatFull::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatFull: {
        out->appendInt(m_id);
        m_participants.push(out);
        m_chatPhoto.push(out);
        m_notifySettings.push(out);
        m_exportedInvite.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

