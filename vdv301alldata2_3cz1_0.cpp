#include "vdv301alldata2_3cz1_0.h"

Vdv301AllData2_3CZ1_0::Vdv301AllData2_3CZ1_0() {}

bool Vdv301AllData2_3CZ1_0::isVehicleOnFinalStop()
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
