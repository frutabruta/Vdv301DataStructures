#ifndef CONNECTIONMPV_H
#define CONNECTIONMPV_H

#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include "connection.h"
#include <QDateTime>

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
    Connection toConnection();
    static QDateTime shiftTimestampByDelay(QDateTime vstupniTimestamp, int zpozdeni);
    static   bool compareConnectionMPV(const ConnectionMPV &d1, const ConnectionMPV &d2);
    QString dumpConnection();
    static  QVector<ConnectionMPV> orderConnectionsByExpectedDeparture(QVector<ConnectionMPV> vstup);
    static QDateTime qStringDoQDateTime(QString vstup);
    static QString qDateTimeToString(QDateTime vstup);
private:

};

#endif // CONNECTIONMPV_H
