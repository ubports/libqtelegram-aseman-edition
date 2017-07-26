// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "privacykey.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

PrivacyKey::PrivacyKey(PrivacyKeyType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

PrivacyKey::PrivacyKey(InboundPkt *in) :
    m_classType(typePrivacyKeyStatusTimestamp)
{
    fetch(in);
}

PrivacyKey::~PrivacyKey() {
}

bool PrivacyKey::operator ==(const PrivacyKey &b) {
    Q_UNUSED(b);
    return true;
}

void PrivacyKey::setClassType(PrivacyKey::PrivacyKeyType classType) {
    m_classType = classType;
}

PrivacyKey::PrivacyKeyType PrivacyKey::classType() const {
    return m_classType;
}

bool PrivacyKey::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePrivacyKeyStatusTimestamp: {
        m_classType = static_cast<PrivacyKeyType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool PrivacyKey::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePrivacyKeyStatusTimestamp: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

