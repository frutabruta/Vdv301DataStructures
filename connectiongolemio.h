#ifndef CONNECTIONGOLEMIO_H
#define CONNECTIONGOLEMIO_H
#include <QDateTime>
#include <QDebug>

#include "connection.h"

//this class stores connections obtained from public Golemio API: https://api.golemio.cz/v2/pid/docs/openapi/


class ConnectionGolemio
{
public:
    ConnectionGolemio();

    QDateTime arrivalTimestampPredicted;
    QDateTime arrivalTimestampScheduled;
    QDateTime departureTimestampPredicted;
    QDateTime departureTimestampScheduled;
    bool delayIsAvailable=false;
    int delayMinutes=0;
    int delaySeconds=0;

    QString routeShortName="";
    int routeType=0;
    bool routeIsNight=false;
    bool routeIsRegional=false;
    bool routeIsSubstituteTransport=false;

    QString stopPlatformCode="";

    QString tripHeadsign="";
    bool tripIsCanceled=false;
    bool tripIsWheelchairAccessible=false;
    bool tripIsAtStop=false;



    Connection toTransfer();
};

#endif // CONNECTIONGOLEMIO_H
