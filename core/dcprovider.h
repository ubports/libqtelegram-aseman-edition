/*
 * Copyright 2014 Canonical Ltd.
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
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

#ifndef DCPROVIDER_H
#define DCPROVIDER_H

#include <QObject>
#include <QLoggingCategory>
#include "dc.h"
#include "dcauth.h"
#include "telegram/telegramapi.h"
#include "telegram/telegramcore.h"

Q_DECLARE_LOGGING_CATEGORY(TG_CORE_DCPROVIDER)

class DcProvider : public TelegramCore
{
    Q_OBJECT
public:
    DcProvider(Settings *settings, CryptoUtils *crypto);
    ~DcProvider();

    void initialize();
    DC *getDc(qint32 dcNum) const;
    DC *getWorkingDc() const;
    QList<DC *> getDcs() const;
    TelegramApi *getApi() const;
    void transferAuth();

    void init();

Q_SIGNALS:
    // emitted when provider has shared key created, now or previously, for all DCs
    void dcProviderReady();
    // emitted when provider detects there is a shared key for working dc but user is not yet authenticated in it
    void authNeeded();
    // emitted when provider finish transfering the user authentication data to all DCs. At this point the api
    // is ready for using any of its methods in any DC
    void authTransferCompleted();

    void error(qint64 id, qint32 errorCode, const QString &errorText);
    void fatalError();

public Q_SLOTS:
    void logOut();

private:
    void processDcReady(DC *dc);
    void clean();
    void setupApi(DC *dc);
    void finalDcEstablished();
    QMutex mDcsLock;
    QMap<qint32, DC *> mDcs;
    qint32 nearestDc;
    QMutex mDcAuthsLock;
    QMap<qint32, DCAuth *> mDcAuths;
    Settings *mSettings;
    CryptoUtils *mCrypto;

    //Connection storage
    QMetaObject::Connection m_error;

    //api instance for "internal" operations (config, getNearestDc, etc...). This object could be received
    // from outside, as parameter, when completed external public layer
    TelegramApi *mApi;

    // counter of the dc's pending to be authenticated. When this counter is zero, all available DCs are
    // authenticated and a signal dcProviderReady() is emitted
    qint32 mPendingDcs;

    // this list is filled with a session to every dc receiving auth transfer in transferAuth() operation.
    // Working session exports auth bytes and then is taken the first session in this list for the import.
    // When the list is empty, all the
    // an element is deleted until leave it empty. When it happens, all dcs have the auth transferred.
    QList<Session *> mTransferSessions;
    qint32 mPendingTransferSessions;

    // main session. The one linked to working dc. Must be stored mean transferring auth to other dcs because
    // is the reference for exporting data to any dc transfer auth receipt
    Session *mWorkingDcSession;

    // In order to map getConfigRequests and sessions
    QMap<qint64, Session*> mGetConfigRequests;
    bool mConfigReceived;


private Q_SLOTS:
    void onDcReady(DC *dc);
    void onDcAuthDisconnected();
    void onApiReady();
    void onApiError();
    void onConfigReceived(qint64 msgId, const Config &config);
    void onNearestDcReceived(qint64 msgId, const NearestDc &result);
    void onTransferSessionReady(DC*);
    void onAuthExportedAuthorization(const AuthExportedAuthorization &result);
    void onAuthImportedAuthorization(const AuthAuthorization &);

};

#endif // DCPROVIDER_H
