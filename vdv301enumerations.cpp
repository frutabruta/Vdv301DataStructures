#include "vdv301enumerations.h"






Vdv301Enumerations::Vdv301Enumerations() {}


Vdv301Enumerations::LocationStateEnumeration Vdv301Enumerations::LocationStateEnumerationFromQString(QString text)
{
    if(text=="AtStop")
    {
        return LocationStateAtStop;
    }
    else if(text=="AfterStop")
    {
        return LocationStateAfterStop;
    }
    else if(text=="BeforeStop")
    {
        return LocationStateBeforeStop;
    }
    else if(text=="BetweenStop")
    {
        return LocationStateBetweenStop;
    }
    return LocationStateError;

}


QString Vdv301Enumerations::LocationStateEnumerationToQString(Vdv301Enumerations::LocationStateEnumeration input)
{
    switch(input)
    {
    case LocationStateAtStop:
        return "AtStop";
        break;
    case LocationStateAfterStop:
        return "AfterStop";
        break;
    case LocationStateBeforeStop:
        return "BeforeStop";
        break;
    case LocationStateBetweenStop:
        return "BetweenStop";
        break;
    case LocationStateError:
        return "Error";
        break;
    default:
        return "";
        break;

    }
    return "";
}

QString Vdv301Enumerations::RouteDeviationEnumerationToQString(Vdv301Enumerations::RouteDeviationEnumeration input)
{
    switch(input)
    {
    case RouteDeviationOnroute:
        return "onroute";
        break;
    case RouteDeviationOffroute:
        return "offroute";
        break;
    case RouteDeviationUnknown:
        return "unknown";
        break;
    default:
        return "unknown";
        break;
    }
}
