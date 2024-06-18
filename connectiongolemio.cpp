#include "connectiongolemio.h"
#include "vdv301internationaltext.h"
ConnectionGolemio::ConnectionGolemio()
{

}

Connection ConnectionGolemio::toConnection()
{
    qDebug()<<Q_FUNC_INFO;
    Connection output;

    output.connectionProperty="";
    output.connectionType="";

    output.line.lineName=routeShortName;
    output.destinationName=tripHeadsign;
    output.scheduledDepartureTime=departureTimestampScheduled;
    output.expectedDepartureTime=departureTimestampPredicted;
    output.platform=stopPlatformCode;



    if(tripIsWheelchairAccessible)
    {
        output.connectionProperty="Accessible";
    }


    switch(routeType)
    {
    case 0: //Tram, Streetcar, Light rail. Any light rail or street level system within a metropolitan area.
        output.mainMode="TramSubmode";

        if(routeIsRegional)
        {
            output.subMode="regionalTram";
        }
        else
        {
            output.subMode="localTram";
        }


        break;
    case 1: //Subway, Metro. Any underground rail system within a metropolitan area.
        output.mainMode="MetroSubmode";
        output.subMode="metro";

        break;
    case 2: //Rail. Used for intercity or long-distance travel.
        output.mainMode="RailSubmode";


        output.subMode="regionalRail";

        break;
    case 3: //Bus. Used for short- and long-distance bus routes.
        output.mainMode="BusSubmode";
        if(routeIsRegional)
        {
            output.subMode="regionalBus";
        }
        else
        {
            output.subMode="localBus";
        }


        break;
    case 4: //Ferry. Used for short- and long-distance boat service.
        output.mainMode="WaterSubmode";
        output.subMode="localPassengerFerry";

        break;
    case 5: //Cable tram. Used for street-level rail cars where the cable runs beneath the vehicle, e.g., cable car in San Francisco.

        output.mainMode="";
        output.subMode="";

        break;
    case 6: //Aerial lift, suspended cable car (e.g., gondola lift, aerial tramway). Cable transport where cabins, cars, gondolas or open chairs are suspended by means of one or more cables.
        output.mainMode="TelecabinSubmode";
        output.subMode="";

        break;


    case 7: //Funicular. Any rail system designed for steep inclines.

        output.mainMode="FunicularSubmode";
        output.subMode="";

        break;

    case 11: //Trolleybus. Electric buses that draw power from overhead wires using poles.

        output.mainMode="";
        output.subMode="";

        output.mainMode="BusSubmode";
        if(routeIsRegional)
        {
            output.subMode="regionalBus";
        }
        else
        {
            output.subMode="localBus";
        }

        break;


    case 12: //Monorail. Railway in which the track consists of a single rail or a beam.

        output.mainMode="";
        output.subMode="";

        break;


    default:
        output.mainMode="unknown";
        output.subMode="unknown";
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
    return output;

}

Vdv301Connection ConnectionGolemio::toVdv301Connection()
{
    qDebug()<<Q_FUNC_INFO;
    Vdv301Connection output;

    Vdv301DisplayContent displayContent;


    QString language="cs";



    displayContent.lineInformation.lineNameList<<Vdv301InternationalText(routeShortName,language);
    displayContent.destination.destinationNameList<<Vdv301InternationalText(tripHeadsign,language);

    output.vdv301displayContentList<<displayContent;

    output.scheduledDepartureTime=departureTimestampScheduled;
    output.expectedDepartureTime=departureTimestampPredicted;
    output.platform=stopPlatformCode;



    if(tripIsWheelchairAccessible)
    {
       // output.connectionProperty="Accessible";
    }


    switch(routeType)
    {
    case 0: //Tram, Streetcar, Light rail. Any light rail or street level system within a metropolitan area.
        output.mainMode="TramSubmode";

        if(routeIsRegional)
        {
            output.subMode="regionalTram";
        }
        else
        {
            output.subMode="localTram";
        }


        break;
    case 1: //Subway, Metro. Any underground rail system within a metropolitan area.
        output.mainMode="MetroSubmode";
        output.subMode="metro";

        break;
    case 2: //Rail. Used for intercity or long-distance travel.
        output.mainMode="RailSubmode";


        output.subMode="regionalRail";

        break;
    case 3: //Bus. Used for short- and long-distance bus routes.
        output.mainMode="BusSubmode";
        if(routeIsRegional)
        {
            output.subMode="regionalBus";
        }
        else
        {
            output.subMode="localBus";
        }


        break;
    case 4: //Ferry. Used for short- and long-distance boat service.
        output.mainMode="WaterSubmode";
        output.subMode="localPassengerFerry";

        break;
    case 5: //Cable tram. Used for street-level rail cars where the cable runs beneath the vehicle, e.g., cable car in San Francisco.

        output.mainMode="";
        output.subMode="";

        break;
    case 6: //Aerial lift, suspended cable car (e.g., gondola lift, aerial tramway). Cable transport where cabins, cars, gondolas or open chairs are suspended by means of one or more cables.
        output.mainMode="TelecabinSubmode";
        output.subMode="";

        break;


    case 7: //Funicular. Any rail system designed for steep inclines.

        output.mainMode="FunicularSubmode";
        output.subMode="";

        break;

    case 11: //Trolleybus. Electric buses that draw power from overhead wires using poles.

        output.mainMode="";
        output.subMode="";

        output.mainMode="BusSubmode";
        if(routeIsRegional)
        {
            output.subMode="regionalBus";
        }
        else
        {
            output.subMode="localBus";
        }

        break;


    case 12: //Monorail. Railway in which the track consists of a single rail or a beam.

        output.mainMode="";
        output.subMode="";

        break;


    default:
        output.mainMode="unknown";
        output.subMode="unknown";
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
    return output;

}


