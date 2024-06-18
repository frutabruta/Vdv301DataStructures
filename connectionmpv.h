#ifndef CONNECTIONMPV_H
#define CONNECTIONMPV_H

#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include "vdv301connection.h"
#include "line.h"
#include <QDateTime>
#include "connection.h"


//this class stores connections obtained from non-public MPVnet API
//names of variables are kept in Czech to match XML attribute names from MPVnet

class ConnectionMPV
{
public:
    ConnectionMPV();

    void setLin(int pLin);
    QString stan="";
    QString lin=""; //line number
    QString alias="";
    int spoj=0; //trip number
    QString smer=""; //destination name

    QDateTime odj; //timetable departure
    QDateTime odjReal; //real departure


    int zpoz=0; //delay
    bool np=false; //low-floor attribute
    bool nad=false; //replacement service
    QString t="";
    int dd=0; //mean of transport
    int smer_c=0; //id of destination
    bool sled=false; // is the vehicle location working
    static void ddDoVehicleMode(int dd, QString &mainMode, QString &subMode, Line &linka);
    static QDateTime shiftTimestampByDelay(QDateTime vstupniTimestamp, int zpozdeni);
    static   bool compareConnectionMPV(const ConnectionMPV &d1, const ConnectionMPV &d2);
    QString dumpConnection();
    static  QVector<ConnectionMPV> orderConnectionsByExpectedDeparture(QVector<ConnectionMPV> vstup);
    static QDateTime qStringDoQDateTime(QString vstup);
    static QString qDateTimeToString(QDateTime vstup);
    Connection toConnection();
    Vdv301Connection toVdv301Connection();
    void ddDoVdv301VehicleMode(int dd, QString &mainMode, QString &subMode);
private:

};

#endif // CONNECTIONMPV_H
