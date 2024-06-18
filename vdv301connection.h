#ifndef VDV301CONNECTION_H
#define VDV301CONNECTION_H
#include <QObject>
#include <QDateTime>
#include <QDebug>

//#include "line.h"
#include "vdv301line.h"
#include "vdv301displaycontent.h"
//#include "transfergolemio.h"





//VDV301 prestupy
class Vdv301Connection
{
public:
    Vdv301Connection();

    QString connectionRef="";// StopPoint-referenced connection-reference, type="IBIS-IP.NMTOKEN"
    // connection type enumeration, Describes the kind of connection, type="ConnectionTypeEnumeration"
    QVector<Vdv301DisplayContent> vdv301displayContentList; //Structure for desccribing the information which is shown on a head- or sidesign,  type="DisplayContentStructure" minOccurs="0"
    QString platform=""; // Platform, on which the connection should take place, type="IBIS-IP.string" minOccurs="0"
    //connectionState, Describes the status of the connection,  type="ConnectionStateEnumeration" minOccurs="0"
    //ConnectionMode, type="NetexMode" minOccurs="0", Mode- and Submode information of the pick-up vehicle in accordance with Netex
    QDateTime expectedDepartureTime; //Information, at which time the leaving vehicle will depart based on realtime information, type="IBIS-IP.dateTime" minOccurs="0"
    QDateTime scheduledDepartureTime; //Information, at which time the leaving vehicle is planned to depart, type="IBIS-IP.dateTime" minOccurs="0"

    QString mainMode="";
    QString subMode="";
    /*

    QString connectionProperty="";
    QString connectionType="";
    QString destination="";
    Vdv301Line line;
    QString destinationName="";
    */


    int getMinutesToDeparture(QDateTime aktCas);
    QString expectedDepartureTimeQString();
    QString scheduledDepartureTimeQString();

    static  bool compareConnections(const Vdv301Connection &d1, const Vdv301Connection &d2);
    static  QVector<Vdv301Connection> orderConnectionsByExpectedDeparture(QVector<Vdv301Connection> vstup);
};

#endif // VDV301CONNECTION_H
