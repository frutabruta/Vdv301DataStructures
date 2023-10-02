#ifndef VEHICLERUN_H
#define VEHICLERUN_H
#include "line.h"
#include "trip.h"

//array of trips done by single vehicle in one day
//CZ: oběh
//PID: the number of vehicle run is composed of rootLineNumber and order (the bus serving the first trip on the XXX line in the morning has the order number of 1)


class VehicleRun
{
public:
    VehicleRun();
    Line rootLine;
    int order=0;
    QVector<Trip> tripList;

    void reset();
};







#endif // VEHICLERUN_H
