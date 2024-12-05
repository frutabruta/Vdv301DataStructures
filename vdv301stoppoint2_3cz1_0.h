#ifndef VDV301STOPPOINT2_3CZ1_0_H
#define VDV301STOPPOINT2_3CZ1_0_H

#include "vdv301stoppoint.h"
class Vdv301StopPoint2_3CZ1_0 : public Vdv301StopPoint
{
public:
    Vdv301StopPoint2_3CZ1_0();
    QString globalStopRef="noRef";// Reference to the stoppoint from global timetable system
    QVector<Vdv301InternationalText> fareZoneList;
};

#endif // VDV301STOPPOINT2_3CZ1_0_H
