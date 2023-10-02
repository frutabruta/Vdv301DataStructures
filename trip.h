#ifndef TRIP_H
#define TRIP_H

#include <QObject>
#include <QWidget>
#include "line.h"
#include "stoppointdestination.h"

// stores one StopPoint list from first to last stop bound to specific times
// CZ: spoj

class Trip
{
public:
    Trip();
    Line line;
    int id=0;
    int idRopid=0; //four number id (1xxx work day, 4xxx weekend)
    QVector<StopPointDestination>  globalStopPointDestinationList ;
    bool continuesWithNextTrip=false;
    void reset();

    bool operator ==(const Trip &node) const;
};

#endif // TRIP_H
