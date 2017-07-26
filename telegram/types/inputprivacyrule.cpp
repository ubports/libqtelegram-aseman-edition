// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "inputprivacyrule.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

InputPrivacyRule::InputPrivacyRule(InputPrivacyRuleType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPrivacyRule::InputPrivacyRule(InboundPkt *in) :
    m_classType(typeInputPrivacyValueAllowContacts)
{
    fetch(in);
}

InputPrivacyRule::~InputPrivacyRule() {
}

void InputPrivacyRule::setUsers(const QList<InputUser> &users) {
    m_users = users;
}

QList<InputUser> InputPrivacyRule::users() const {
    return m_users;
}

bool InputPrivacyRule::operator ==(const InputPrivacyRule &b) {
    return m_users == b.m_users;
}

void InputPrivacyRule::setClassType(InputPrivacyRule::InputPrivacyRuleType classType) {
    m_classType = classType;
}

InputPrivacyRule::InputPrivacyRuleType InputPrivacyRule::classType() const {
    return m_classType;
}

bool InputPrivacyRule::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPrivacyValueAllowContacts: {
        m_classType = static_cast<InputPrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowAll: {
        m_classType = static_cast<InputPrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowUsers: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            InputUser type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<InputPrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowContacts: {
        m_classType = static_cast<InputPrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowAll: {
        m_classType = static_cast<InputPrivacyRuleType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowUsers: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            InputUser type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<InputPrivacyRuleType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool InputPrivacyRule::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPrivacyValueAllowContacts: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowAll: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowUsers: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowContacts: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowAll: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowUsers: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

