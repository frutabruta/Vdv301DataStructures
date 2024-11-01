#include "trip.h"

Trip::Trip()
{

}

void Trip::reset()
{

    line.reset();
    id=0;
    idRopid=0;
    globalStopPointDestinationList.clear();
    continuesWithNextTrip=false;
}


bool Trip::operator==(const Trip &node) const
{
return idRopid==node.idRopid && line.c==node.line.c;
}


QString Trip::ref()
{
    if(idRopid==0)
    {
        return "noRef";
    }
    return QString::number(idRopid);
}
