#include "stoppoint.h"


StopPoint::StopPoint()
{

}



/*!

*/
QTime StopPoint::secondsToQtime(QString vstup)
{
    int seconds=vstup.toInt();
    seconds=seconds%86400; //fix for connection through midnight
    int hours=seconds/3600;
    int minutes=(seconds%3600)/60;
    return QTime(hours,minutes);
}

QTime StopPoint::departureToQTime()
{
    return secondsToQtime(DepartureTime);
}
