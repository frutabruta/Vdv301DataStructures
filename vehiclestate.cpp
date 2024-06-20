#include "vehiclestate.h"
#include <QDebug>

VehicleState::VehicleState()
{
    qDebug()<<Q_FUNC_INFO;
    reset();

}


int VehicleState::reset()
{
    qDebug()<<Q_FUNC_INFO;


    currentTripIndex=0;   
    currentTrip.reset();
    currentStopIndex0=0;
    currentLine.lineNumber="";
    currentVehicleRun.reset();
    doorState=Vdv301Enumerations::DoorOpenStateAllDoorsClosed;
    locationState=Vdv301Enumerations::LocationStateAtStop;
    exitSide=0;
    vehicleNumber=1234;
    isDoorOpen=false;
    isVehicleStopRequested=false;
    showFareZoneChange=false;
    stopPointCount=0;

   return 1;
}

int VehicleState::countCurrentTripStops()
{
    int output=0;
    output=this->currentVehicleRun.tripList.at(this->currentTripIndex).globalStopPointDestinationList.count();

    return output;
}

Trip VehicleState::getCurrentTrip()
{
    qDebug()<<Q_FUNC_INFO;
    Trip emptyTrip;

    if((this->currentVehicleRun.tripList.isEmpty())||(this->currentTripIndex>this->currentVehicleRun.tripList.length()))
    {
        return emptyTrip;
    }

    return this->currentVehicleRun.tripList.at(this->currentTripIndex);
}


