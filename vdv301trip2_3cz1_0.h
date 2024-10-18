#ifndef VDV301TRIP2_3CZ1_0_H
#define VDV301TRIP2_3CZ1_0_H

#include "vdv301trip.h"
#include "vdv301stoppoint2_3cz1_0.h"
#include "vdv301farezonechange2_3cz1_0.h"
class Vdv301Trip2_3CZ1_0 : public Vdv301Trip
{
public:
    Vdv301Trip2_3CZ1_0();
    QVector<Vdv301StopPoint2_3CZ1_0> stopPointList;
    Vdv301FareZoneChange2_3CZ1_0 fareZoneChange;

};

#endif // VDV301TRIP2_3CZ1_0_H
