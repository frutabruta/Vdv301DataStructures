#include "vdv301alldata.h"

Vdv301AllData::Vdv301AllData() {}


bool Vdv301AllData::isVehicleOnFinalStop()
{

    qDebug() <<  Q_FUNC_INFO;

    if(tripInformationList.isEmpty())
    {
        return false;
    }

    if(tripInformationList.first().stopPointList.isEmpty())
    {
        return false;
    }

    if(currentStopIndex<1)
    {
        return false;
    }

    if((currentStopIndex==(tripInformationList.first().stopPointList.count()))&&(tripInformationList.first().locationState==Vdv301Enumerations::LocationStateAtStop))
    {
        return true;
    }
    return false;
}
