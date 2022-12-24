#ifndef PRESTUPGOLEMIO_H
#define PRESTUPGOLEMIO_H
#include <QDateTime>

class PrestupGolemio
{
public:
    PrestupGolemio();

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



};

#endif // PRESTUPGOLEMIO_H
