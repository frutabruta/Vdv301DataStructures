#ifndef BLABLA_H
#define BLABLA_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QDate>
#include "line.h"
#include "vehiclerun.h"
#include "additionalannoucement.h"

class VehicleState
{

public:

    explicit VehicleState(QWidget *parent = nullptr);

    // instances
    AdditionalAnnoucement currentSpecialAnnoucement;
    Line currentLine;
    VehicleRun currentVehicleRun;
    Trip currentTrip;

    //variables
    QString doorState="AllDoorsClosed";
    QString locationState="AtStop";
    QString routeDeviation="onroute";
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

#endif // BLABLA_H
