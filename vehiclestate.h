#ifndef VEHICLESTATE_H
#define VEHICLESTATE_H


#include <QObject>
#include <QDate>
#include "line.h"
#include "vehiclerun.h"
#include "additionalannoucement.h"
#include "vdv301enumerations.h"

class VehicleState
{

public:

    explicit VehicleState();

    // instances
    AdditionalAnnoucement currentSpecialAnnoucement;
    Line currentLine;
    VehicleRun currentVehicleRun;
    Trip currentTrip;

    //variables
    Vdv301Enumerations::DoorOpenStateEnumeration doorState=Vdv301Enumerations::DoorOpenStateAllDoorsClosed;
    //  QString locationState="AtStop";
    Vdv301Enumerations::LocationStateEnumeration locationState=Vdv301Enumerations::LocationStateAtStop;
    Vdv301Enumerations::RouteDeviationEnumeration routeDeviation=Vdv301Enumerations::RouteDeviationOnroute;
    QString vehicleSubMode="regionalBus";
    QString vehicleMode="BusSubmode";
    QString razziaState="norazzia";
    bool isVehicleStopRequested=false;
    bool showConnections=false;
    int currentStopIndex0;
    int currentTripIndex;
    int stopPointCount;
    int vehicleNumber=1234;
    int isDoorOpen=0;
    int exitSide=0;
    bool showFareZoneChange=false;
    QDate referenceDate;

    bool isSpecialAnnoucementUsed=false;


    //functions
    int reset();
    int countCurrentTripStops();
    Trip getCurrentTrip();

    //others


signals:

public slots:
};

#endif // VEHICLESTATE_H
