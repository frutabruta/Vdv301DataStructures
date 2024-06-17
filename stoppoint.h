#ifndef STOPPOINT_H
#define STOPPOINT_H

#include "farezone.h"
#include <QMainWindow>
#include <QObject>
#include "connection.h"


class StopPoint
{
public:    
    StopPoint();

    int StopIndex=0;
    int idCis=0; //global stop ID from CIS JŘ (Celostátní informační systém o jízdních řádech)
    int idU=0; // stop group ID from ASW software
    int idZ=0; // specific stop ID
    int idOis=0; // id of MP3 file and bitmap stored in code driven displays, legacy system

    QString ids="";
    QString StopName="";
    int DestinationCis=0;
    QString ArrivalTime="";
    QString DepartureTime="";
    QString NameFront="";
    QString NameFront2="";
    QString NameSide="";
    QString NameLcd="";
    QString NameRear="";
    QString NameInner="";
    bool transferTrain=0;
    bool transferMetroA=0;
    bool transferMetroB=0;
    bool transferMetroC=0;
    bool transferMetroD=0;
    bool transferAirplane=0;
    bool transferFerry=0;
    bool onRequest=0;
    bool zsol=0; //prujezdna konecna, change of destination
    QString additionalTextMessage="";


    int isViapoint=0;

    QString platformName="";

    double lng=0.0; //GPS souradnice
    double lat=0.0; //GPS souradnice
    int radius=0; //polomer vyhlaseni zastavky

    QVector<FareZone> fareZoneList;
    QVector<QString> iconList;
    QVector<Connection> connectionList;

    QVector<QString> notesList; //list of notes displayed to driver


    QTime departureToQTime();

    static QTime secondsToQtime(QString vstup);
};


#endif // STOPPOINT_H
