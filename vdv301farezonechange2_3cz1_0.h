#ifndef VDV301FAREZONECHANGE2_3CZ1_0_H
#define VDV301FAREZONECHANGE2_3CZ1_0_H

#include "vdv301internationaltext.h"

class Vdv301FareZoneChange2_3CZ1_0
{
public:
    Vdv301FareZoneChange2_3CZ1_0();
    bool active=false;
    QVector<Vdv301InternationalText> fromFareZone;
    QVector<Vdv301InternationalText> toFareZone;
};

#endif // VDV301FAREZONECHANGE2_3CZ1_0_H
