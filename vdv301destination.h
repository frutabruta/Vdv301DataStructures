#ifndef VDV301DESTINATION_H
#define VDV301DESTINATION_H

#include <QObject>
#include "vdv301internationaltext.h"

//defined in https://github.com/VDVde/VDV301/blob/master/IBIS-IP_common_V2.3.xsd
class Vdv301Destination
{
public:
    Vdv301Destination();
    QString destinationRef="noRef"; //type="IBIS-IP.NMTOKEN" , Reference to the destination-information in the schedule-data
    QVector<Vdv301InternationalText> destinationNameList; // type="InternationalTextType" minOccurs="0" maxOccurs="unbounded", Text of the destination
    QVector<Vdv301InternationalText> destinationShortNameList; // type="InternationalTextType" minOccurs="0" maxOccurs="unbounded", Shorttext of the destination if there is limited space

};

#endif // VDV301DESTINATION_H
