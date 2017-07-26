// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "helpsupport.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

HelpSupport::HelpSupport(HelpSupportType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

HelpSupport::HelpSupport(InboundPkt *in) :
    m_classType(typeHelpSupport)
{
    fetch(in);
}

HelpSupport::~HelpSupport() {
}

void HelpSupport::setPhoneNumber(const QString &phoneNumber) {
    m_phoneNumber = phoneNumber;
}

QString HelpSupport::phoneNumber() const {
    return m_phoneNumber;
}

void HelpSupport::setUser(const User &user) {
    m_user = user;
}

User HelpSupport::user() const {
    return m_user;
}

bool HelpSupport::operator ==(const HelpSupport &b) {
    return m_phoneNumber == b.m_phoneNumber &&
           m_user == b.m_user;
}

void HelpSupport::setClassType(HelpSupport::HelpSupportType classType) {
    m_classType = classType;
}

HelpSupport::HelpSupportType HelpSupport::classType() const {
    return m_classType;
}

bool HelpSupport::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeHelpSupport: {
        m_phoneNumber = in->fetchQString();
        m_user.fetch(in);
        m_classType = static_cast<HelpSupportType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool HelpSupport::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeHelpSupport: {
        out->appendQString(m_phoneNumber);
        m_user.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

