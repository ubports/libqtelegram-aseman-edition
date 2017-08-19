/*
 * Copyright 2017 UBports Foundation
 * Authors:
 *      Florian Leeber
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "dc.h"

DC::DC(qint32 dcNum) :
    m_id(dcNum),
    m_state(init),
    m_authKeyId(0),
    m_expires(0),
    m_serverSalt(0),
    mTimeDifference(0),
    m_Endpoint(1),
    m_mediaOnly(false)
    {
        endpoints = QList<Endpoint>();
    }

void DC::addEndpoint(QString ipAddress, qint32 port)
{
    endpoints.append(Endpoint(ipAddress, port));
}

bool DC::hasEndpoint(QString ipAddress, qint32 port)
{
    QList::iterator end = endpoints.end();
    for (QList::iterator endpoint = endpoints.begin(); endpoints != end; ++endpoints)
    {
        if (((*endpoint)->host == ipAddress) && ((*endpoint)->port == port))
            return true;
    }
    return false;
}
Endpoint DC::nextEndpoint()
{
    Endpoint empty_result = Endpoint();
    if (endpoints.length() == 0)
        return empty_result;
    if (endpoints.length() >= m_Endpoint)
    {
        m_Endpoint++;
    }
    else
    {
       m_Endpoint=1;

    }
    return endpoints[m_Endpoint -1];
}
