// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "authcheckedphone.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

AuthCheckedPhone::AuthCheckedPhone(AuthCheckedPhoneType classType, InboundPkt *in) :
    m_phoneRegistered(false),
    m_classType(classType)
{
    if(in) fetch(in);
}

AuthCheckedPhone::AuthCheckedPhone(InboundPkt *in) :
    m_phoneRegistered(false),
    m_classType(typeAuthCheckedPhone)
{
    fetch(in);
}

AuthCheckedPhone::~AuthCheckedPhone() {
}

void AuthCheckedPhone::setPhoneRegistered(bool phoneRegistered) {
    m_phoneRegistered = phoneRegistered;
}

bool AuthCheckedPhone::phoneRegistered() const {
    return m_phoneRegistered;
}

bool AuthCheckedPhone::operator ==(const AuthCheckedPhone &b) {
    return m_phoneRegistered == b.m_phoneRegistered;
}

void AuthCheckedPhone::setClassType(AuthCheckedPhone::AuthCheckedPhoneType classType) {
    m_classType = classType;
}

AuthCheckedPhone::AuthCheckedPhoneType AuthCheckedPhone::classType() const {
    return m_classType;
}

bool AuthCheckedPhone::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAuthCheckedPhone: {
        m_phoneRegistered = in->fetchBool();
        m_classType = static_cast<AuthCheckedPhoneType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool AuthCheckedPhone::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthCheckedPhone: {
        out->appendBool(m_phoneRegistered);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

