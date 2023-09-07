#include "prestupgolemio.h"
#include <QDebug>
//#include "prestup.h"

PrestupGolemio::PrestupGolemio()
{

}

Prestup PrestupGolemio::toPrestup()
{
    qDebug()<<Q_FUNC_INFO;
    Prestup vystup;
    //  vystup.mainMode="";
    //  vystup.subMode="";
    vystup.connectionProperty="";
    vystup.connectionType="";
    //vystup.destination="";
    vystup.line.LineName=routeShortName;
    vystup.destinationName=tripHeadsign;
    vystup.scheduledDepartureTime=departureTimestampScheduled;
    vystup.expectedDepartureTime=departureTimestampPredicted;
    vystup.platform=stopPlatformCode;



    if(tripIsWheelchairAccessible)
    {
        vystup.connectionProperty="Accessible";
    }


    switch(routeType)
    {
    case 0: //Tram, Streetcar, Light rail. Any light rail or street level system within a metropolitan area.
        vystup.mainMode="TramSubmode";

        if(routeIsRegional)
        {
            vystup.subMode="regionalTram";
        }
        else
        {
            vystup.subMode="localTram";
        }


        break;
    case 1: //Subway, Metro. Any underground rail system within a metropolitan area.
        vystup.mainMode="MetroSubmode";
        vystup.subMode="metro";

        break;
    case 2: //Rail. Used for intercity or long-distance travel.
        vystup.mainMode="RailSubmode";


        vystup.subMode="regionalRail";

        break;
    case 3: //Bus. Used for short- and long-distance bus routes.
        vystup.mainMode="BusSubmode";
        if(routeIsRegional)
        {
            vystup.subMode="regionalBus";
        }
        else
        {
            vystup.subMode="localBus";
        }


        break;
    case 4: //Ferry. Used for short- and long-distance boat service.
        vystup.mainMode="WaterSubmode";
        vystup.subMode="localPassengerFerry";

        break;
    case 5: //Cable tram. Used for street-level rail cars where the cable runs beneath the vehicle, e.g., cable car in San Francisco.

        vystup.mainMode="";
        vystup.subMode="";

        break;
    case 6: //Aerial lift, suspended cable car (e.g., gondola lift, aerial tramway). Cable transport where cabins, cars, gondolas or open chairs are suspended by means of one or more cables.
        vystup.mainMode="TelecabinSubmode";
        vystup.subMode="";

        break;


    case 7: //Funicular. Any rail system designed for steep inclines.

        vystup.mainMode="FunicularSubmode";
        vystup.subMode="";

        break;

    case 11: //Trolleybus. Electric buses that draw power from overhead wires using poles.

        vystup.mainMode="";
        vystup.subMode="";

        vystup.mainMode="BusSubmode";
        if(routeIsRegional)
        {
            vystup.subMode="regionalBus";
        }
        else
        {
            vystup.subMode="localBus";
        }

        break;


    case 12: //Monorail. Railway in which the track consists of a single rail or a beam.

        vystup.mainMode="";
        vystup.subMode="";

        break;


    default:
        vystup.mainMode="unknown";
        vystup.subMode="unknown";
        break;


    }

    //   QDateTime arrivalTimestampPredicted;
    //   QDateTime arrivalTimestampScheduled;

    //  bool delayIsAvailable=false;
    //  int delayMinutes=0;
    //  int delaySeconds=0;


    //   int routeType=0;
    //   bool routeIsNight=false;
    //   bool routeIsRegional=false;
    //   bool routeIsSubstituteTransport=false;

    //   QString stopPlatformCode="";

    //   bool tripIsCanceled=false;

    //   bool tripIsAtStop=false;
    return vystup;

}


