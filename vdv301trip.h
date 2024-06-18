#ifndef VDV301TRIP_H
#define VDV301TRIP_H

#include <QObject>
#include "vdv301stoppoint.h"
#include "vdv301internationaltext.h"
#include "vdv301enumerations.h"

//defined in https://github.com/VDVde/VDV301/blob/master/IBIS-IP_common_V2.3.xsd

class Vdv301Trip
{
public:
    Vdv301Trip();
    QString tripRef=""; //type="IBIS-IP.NMTOKEN
    QVector<Vdv301StopPoint> stopPointList; //  type="StopSequenceStructure" ; List of StopPoints; with additional information
    Vdv301Enumerations::LocationStateEnumeration locationState=Vdv301Enumerations::LocationStateAtStop; //  type="LocationStateEnumeration", minOccurs="0", Information of the location state
    /*
<xs:enumeration value="AfterStop"/>
            <xs:enumeration value="AtStop"/>
            <xs:enumeration value="BeforeStop"/>
            <xs:enumeration value="BetweenStop"/>
*/

    int timetableDelay=0; //type="IBIS-IP.int" minOccurs="0",  Delay in seconds. Early times are shown as negative values.
    Vdv301InternationalText additionalTextMessage; // type="InternationalTextType" minOccurs="0",
    //AdditionalTextMessage 1-9 not implemented
    //RouteDirection not implemented
    QString runNumber="";// type="IBIS-IP.int" minOccurs="0", The run number (Kurs-Nummer) the trip is operated
    //PatternNumber not implemented
    //PathDestinationNumber not implemented

};

#endif // VDV301TRIP_H
