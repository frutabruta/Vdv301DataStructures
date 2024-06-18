#ifndef VDV301STOPPOINT_H
#define VDV301STOPPOINT_H

#include <QObject>
#include "vdv301displaycontent.h"
#include "vdv301connection.h"
// definded in https://github.com/VDVde/VDV301/blob/master/IBIS-IP_common_V2.3.xsd
class Vdv301StopPoint
{
public:
    Vdv301StopPoint();
    int stopIndex=0; // type="IBIS-IP.int"
    QString stopRef="";// Reference to the stoppoint from the planning system
    QVector<Vdv301InternationalText> stopNameList; // type="InternationalTextType" maxOccurs="unbounded"
    QVector<Vdv301InternationalText> stopAlternativeNameList; // type="InternationalTextType" minOccurs="0" maxOccurs="unbounded"
    QString platform=""; //type="IBIS-IP.string" minOccurs="0"
    QVector<Vdv301DisplayContent> displayContentList; // type="DisplayContentStructure" maxOccurs="unbounded"
    // StopAnnouncement not implemented
    QString arrivalScheduled=""; // type="IBIS-IP.dateTime" minOccurs="0"
    QString arrivalExpected=""; // type="IBIS-IP.dateTime" minOccurs="0" A resolution of 30s is recommended, for the display it is recommended to show the arrival time in minutes.

    QString departureScheduled=""; // type="IBIS-IP.dateTime" minOccurs="0"
    QString departureExpected=""; // type="IBIS-IP.dateTime" minOccurs="0"
    // RecordedArrivalTime not implemented
    // DistanceToNextStop not implemented
    // Connection will be implemented
    QVector<Vdv301Connection> connectionList;
    QStringList fareZoneList; // type="IBIS-IP.NMTOKEN" minOccurs="0" maxOccurs="unbounded"

};

#endif // VDV301STOPPOINT_H
