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
    m_Endpoint(1),
    mTimeDifference(0),
    m_mediaOnly(false)
    {
        endpoints = QList<Endpoint>();
    }

void DC::addEndpoint(QString ipAddress, qint32 port)
{
    endpointsLock.lock();
    for (int i=0; i < endpoints.length(); ++i)
    {
        if (endpoints[i].host() == ipAddress && endpoints[i].port() == port)
        {
            endpointsLock.unlock();
            return;
        }
    }
    endpoints.append(Endpoint(ipAddress, port));
    endpointsLock.unlock();
    qWarning() << "DC: " << m_id << ", added Endpoint: " << ipAddress << ":" << port;
}

void DC::deleteEndpoint(QString ipAddress, qint32 port)
{
       endpointsLock.lock();
       for (int i=0; i < endpoints.length(); ++i)
       {
           if (endpoints[i].host() == ipAddress && endpoints[i].port() == port)
           {
               endpoints.removeAt(i);
               qWarning() << "DC: " << m_id << ", removed Endpoint: " << ipAddress << ":" << port;
               endpointsLock.unlock();
               return;
           }
       }
       endpointsLock.unlock();
}

void DC::deleteEndpoints()
{
    endpointsLock.lock();
    endpoints.clear();
    endpointsLock.unlock();
}

void DC::advanceEndpoint()
{
    endpointsLock.lock();
    if (endpoints.length() > m_Endpoint)
    {
        m_Endpoint++;
    }
    else
    {
       m_Endpoint=1;

    }
    endpointsLock.unlock();
}

Endpoint DC::currentEndpoint()
{
    Endpoint empty_result = Endpoint();
    if (endpoints.length() == 0)
        return empty_result;
    return endpoints[m_Endpoint -1];
}
