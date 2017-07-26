// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "dcoption.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

DcOption::DcOption(DcOptionType classType, InboundPkt *in) :
    m_id(0),
    m_port(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

DcOption::DcOption(InboundPkt *in) :
    m_id(0),
    m_port(0),
    m_classType(typeDcOption)
{
    fetch(in);
}

DcOption::~DcOption() {
}

void DcOption::setHostname(const QString &hostname) {
    m_hostname = hostname;
}

QString DcOption::hostname() const {
    return m_hostname;
}

void DcOption::setId(qint32 id) {
    m_id = id;
}

qint32 DcOption::id() const {
    return m_id;
}

void DcOption::setIpAddress(const QString &ipAddress) {
    m_ipAddress = ipAddress;
}

QString DcOption::ipAddress() const {
    return m_ipAddress;
}

void DcOption::setPort(qint32 port) {
    m_port = port;
}

qint32 DcOption::port() const {
    return m_port;
}

bool DcOption::operator ==(const DcOption &b) {
    return m_hostname == b.m_hostname &&
           m_id == b.m_id &&
           m_ipAddress == b.m_ipAddress &&
           m_port == b.m_port;
}

void DcOption::setClassType(DcOption::DcOptionType classType) {
    m_classType = classType;
}

DcOption::DcOptionType DcOption::classType() const {
    return m_classType;
}

bool DcOption::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDcOption: {
        m_id = in->fetchInt();
        m_hostname = in->fetchQString();
        m_ipAddress = in->fetchQString();
        m_port = in->fetchInt();
        m_classType = static_cast<DcOptionType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool DcOption::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDcOption: {
        out->appendInt(m_id);
        out->appendQString(m_hostname);
        out->appendQString(m_ipAddress);
        out->appendInt(m_port);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

