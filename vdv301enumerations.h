#ifndef VDV301ENUMERATIONS_H
#define VDV301ENUMERATIONS_H

#include <QString>

class Vdv301Enumerations
{
public:
    Vdv301Enumerations();

    enum DoorOpenStateEnumeration
    {
        DoorOpenStateDoorsOpen,
        DoorOpenStateAllDoorsClosed,
        DoorOpenStateSingleDoorOpen,
        DoorOpenStateSingleDoorClosed
    };

    enum ExitSideEnumeration
    {
        ExitSideBoth,
        ExitSideLeft,
        ExitSideRight,
        ExitSideUnknown
    };

    enum LocationStateEnumeration
    {
        LocationStateAfterStop,
        LocationStateAtStop,
        LocationStateBeforeStop,
        LocationStateBetweenStop,
        LocationStateError
    };

    enum RouteDeviationEnumeration
    {
        RouteDeviationOnroute,
        RouteDeviationOffroute,
        RouteDeviationUnknown
    };

    enum TripStateEnumeration
    {
        TripStateEmptyRun,
        TripStateOnTrip,
        TripStateOffTrip,
        TripStateTripBreak,
        TripStateOffDuty,
        TripStateUnknown
    };




    static Vdv301Enumerations::LocationStateEnumeration LocationStateEnumerationFromText(QString text);
};

#endif // VDV301ENUMERATIONS_H
