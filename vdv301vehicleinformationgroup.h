#ifndef VDV301VEHICLEINFORMATIONGROUP_H
#define VDV301VEHICLEINFORMATIONGROUP_H
#include <QString>
#include "vdv301enumerations.h"

class Vdv301VehicleInformationGroup
{
public:
    Vdv301VehicleInformationGroup();

    Vdv301Enumerations::RouteDeviationEnumeration routeDeviation=Vdv301Enumerations::RouteDeviationOnroute; //RouteDeviation Contains the information about route deviation type="RouteDeviationEnumeration"
    Vdv301Enumerations::DoorOpenStateEnumeration doorState=Vdv301Enumerations::DoorOpenStateAllDoorsClosed; // DoorState type="DoorOpenStateEnumeration", Information on DoorState, minOccurs="0"
    bool inPanic=false;// type="IBIS-IP.boolean" minOccurs="0"
    bool vehicleStopRequested=false;// type="IBIS-IP.boolean" minOccurs="0", Is the Stop-Button inside the vehicle pressed?
    Vdv301Enumerations::ExitSideEnumeration exitSide=Vdv301Enumerations::ExitSideLeft; // name="ExitSide" type="ExitSideEnumeration" minOccurs="0", Defines the exit side
    // name="MovingDirectionForward" type="IBIS-IP.boolean" minOccurs="0", Gives information, if the vehicle is moving forward, default value is "true"

    // name="MyOwnVehicleMode" type="NetexMode" minOccurs="0", Mode- and Submode information vehicle I am in - in accordance with Netex
    QString vehicleSubMode="regionalBus";
    QString vehicleMode="BusSubmode";

    // name="SpeakerActive" type="IBIS-IP.boolean" minOccurs="0", Gives information, if the loud speaker is activated for a passenger announcement
    // name="StopInformationActive" type="IBIS-IP.boolean" minOccurs="0", Gives information, if the stopInformation inside the vehicle is in active or in passiv state (intentionally, e.g. due to "route left)
    Vdv301Enumerations::TripStateEnumeration tripState=Vdv301Enumerations::TripStateOnTrip;// name="TripState" type="TripStateEnumeration" minOccurs="0"

};

#endif // VDV301VEHICLEINFORMATIONGROUP_H
