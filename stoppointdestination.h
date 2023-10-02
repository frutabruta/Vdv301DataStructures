#ifndef STOPPOINTDESTINATION_H
#define STOPPOINTDESTINATION_H
#include "stoppoint.h"
#include "line.h"
//#include "VDV301struktury/spoj.h"


class StopPointDestination
{
public:
    StopPointDestination();
    StopPoint stopPoint;
    StopPoint destination;
    Line line;
    QVector<StopPoint> viaPoints;
};

#endif // STOPPOINTDESTINATION_H
