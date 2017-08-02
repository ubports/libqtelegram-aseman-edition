// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "peernotifysettings.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

PeerNotifySettings::PeerNotifySettings(PeerNotifySettingsType classType, InboundPkt *in) :
    m_eventsMask(0),
    m_muteUntil(0),
    m_showPreviews(false),
    m_classType(classType)
{
    if(in) fetch(in);
}

PeerNotifySettings::PeerNotifySettings(InboundPkt *in) :
    m_eventsMask(0),
    m_muteUntil(0),
    m_showPreviews(false),
    m_classType(typePeerNotifySettingsEmpty)
{
    fetch(in);
}

PeerNotifySettings::~PeerNotifySettings() {
}

void PeerNotifySettings::setEventsMask(qint32 eventsMask) {
    m_eventsMask = eventsMask;
}

qint32 PeerNotifySettings::eventsMask() const {
    return m_eventsMask;
}

void PeerNotifySettings::setMuteUntil(qint32 muteUntil) {
    m_muteUntil = muteUntil;
}

qint32 PeerNotifySettings::muteUntil() const {
    return m_muteUntil;
}

void PeerNotifySettings::setShowPreviews(bool showPreviews) {
    m_showPreviews = showPreviews;
}

bool PeerNotifySettings::showPreviews() const {
    return m_showPreviews;
}

void PeerNotifySettings::setSound(const QString &sound) {
    m_sound = sound;
}

QString PeerNotifySettings::sound() const {
    return m_sound;
}

bool PeerNotifySettings::operator ==(const PeerNotifySettings &b) {
    return m_eventsMask == b.m_eventsMask &&
           m_muteUntil == b.m_muteUntil &&
           m_showPreviews == b.m_showPreviews &&
           m_sound == b.m_sound;
}

void PeerNotifySettings::setClassType(PeerNotifySettings::PeerNotifySettingsType classType) {
    m_classType = classType;
}

PeerNotifySettings::PeerNotifySettingsType PeerNotifySettings::classType() const {
    return m_classType;
}

bool PeerNotifySettings::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePeerNotifySettingsEmpty: {
        m_classType = static_cast<PeerNotifySettingsType>(x);
        return true;
    }
        break;
    
    case typePeerNotifySettings: {
        m_muteUntil = in->fetchInt();
        m_sound = in->fetchQString();
        m_showPreviews = in->fetchBool();
        m_eventsMask = in->fetchInt();
        m_classType = static_cast<PeerNotifySettingsType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool PeerNotifySettings::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePeerNotifySettingsEmpty: {
        return true;
    }
        break;
    
    case typePeerNotifySettings: {
        out->appendInt(m_muteUntil);
        out->appendQString(m_sound);
        out->appendBool(m_showPreviews);
        out->appendInt(m_eventsMask);
        return true;
    }
        break;
    
    default:
        return false;
    }
}
