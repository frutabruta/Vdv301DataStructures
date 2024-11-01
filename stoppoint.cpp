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
/*!
 * \brief StopPoint::ref
 * returns composed value of stop for VDV301 StopPoint and DestinationRef etc. usage
 * \return
 */

QString StopPoint::ref()
{
    if((idU==0)&&(idZ==0))
    {
        return "noRef";
    }
    QString uString=QString::number(idU);
    QString zString=QString::number(idZ);

    return uString+"_"+zString;
}
