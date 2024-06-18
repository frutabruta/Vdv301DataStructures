#include "vdv301enumerations.h"






Vdv301Enumerations::Vdv301Enumerations() {}


Vdv301Enumerations::LocationStateEnumeration Vdv301Enumerations::LocationStateEnumerationFromText(QString text)
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
