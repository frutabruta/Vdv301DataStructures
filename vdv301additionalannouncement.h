#ifndef VDV301ADDITIONALANNOUNCEMENT_H
#define VDV301ADDITIONALANNOUNCEMENT_H

#include <QString>
#include <QVector>
#include "vdv301internationaltext.h"
enum AdditionalAnnouncementType
{
    ImmediateInformation,
    PeriodicalInformation,
    SpecificPoint,
    Undefined


};

class Vdv301AdditionalAnnouncement
{
public:
    Vdv301AdditionalAnnouncement();

    QString announcementRef="noRef"; // type="IBIS-IP.NMTOKEN" Reference to the Announcement in the schedule data
    QVector<Vdv301InternationalText> announcementTextList; //" type="InternationalTextType" minOccurs="0" maxOccurs="unbounded"> Text of the Announcement
    QVector<Vdv301InternationalText> announcementTTSTextList; // type="InternationalTextType" minOccurs="0" maxOccurs="unbounded">

    AdditionalAnnouncementType announcementType=ImmediateInformation;

    bool immediateInformation=true; // type="IBIS-IP.boolean" true, if the additional annoucement should be pronounced immiditaley
    int periodicalInformation=0; // type="IBIS-IP.duration" period in which the addional announcement should be played
    // SpecificPoint  type="SpecificPointStructure" describes a specific point, where the addional announcement should be played



};

#endif // VDV301ADDITIONALANNOUNCEMENT_H
