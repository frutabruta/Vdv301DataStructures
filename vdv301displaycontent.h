#ifndef VDV301DISPLAYCONTENT_H
#define VDV301DISPLAYCONTENT_H

#include <QObject>
#include "vdv301line.h"
#include "vdv301destination.h"
#include "vdv301viapoint.h"


enum DisplayContentClass
{
    DisplayContentUndefined,
    DisplayContentFront,
    DisplayContentSide,
    DisplayContentRear,
    DisplayContentInterior,
    DisplayContentLcd
};


//defined in https://github.com/VDVde/VDV301/blob/master/IBIS-IP_common_V2.3.xsd
class Vdv301DisplayContent
{
public:
    Vdv301DisplayContent();

    DisplayContentClass displayContentType;
    QString displayContentRef=""; //type="IBIS-IP.NMTOKEN" minOccurs="0" , Reference to the display content information in the schedule data
    Vdv301Line lineInformation; // Information on the line, which should be displayed
    Vdv301Destination destination; //Information on the destination, which should be displayed
    QVector<Vdv301ViaPoint> viaPointList; // minOccurs="0" maxOccurs="unbounded",Information on the via points which should be displayed
    QVector<Vdv301InternationalText> additionalInformation; // minOccurs="0" maxOccurs="unbounded", Additional Information Text, which could be displayed, e.g. "Extra Ride", "Express", ...
    //additionalInformation 1-9 not implemented
    QString runNumber="";    // The run number (Kurs-Nummer) the trip is operated
    int priority=0; //type="IBIS-IP.nonNegativeInteger" minOccurs="0" , Value, which allows to decide which Information is shown, if there is not enough time to show all
    int periodDuration=0; // type="IBIS-IP.duration" minOccurs="0" , If more than one Sign-Information is given, you need to know
    int duration=2; // type="IBIS-IP.duration" minOccurs="0" , used for duration of displayContent, Time-Value, which defines the part of the Periodtime in which this Sign-Information should be shown


    static DisplayContentClass qStringToDisplayContentClass(QString input);
    static QString displayContentClassEnumerationToQString(DisplayContentClass displayContentClass);
};

#endif // VDV301DISPLAYCONTENT_H
