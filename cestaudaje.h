#ifndef BLABLA_H
#define BLABLA_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "linka.h"
#include "obeh.h"
class CestaUdaje
{

public:
    explicit CestaUdaje(QWidget *parent = nullptr);
    QString doorState="AllDoorsClosed";
    QString locationState="AtStop";
    QString routeDeviation="onroute";
    QString vehicleSubMode="BusSubmode";
    QString vehicleMode="regionalBus";
    QString razziaState="norazzia";
    bool VehicleStopRequested=false;
    bool prestupy=false;
    int indexAktZastavky;
    int indexTripu=0;;
    int pocetZastavek;
    Linka aktlinka;
    Obeh aktObeh;
    //int aktlinka;
    Spoj aktspoj;
    int cisloVozu;
    int otevreneDvere;
    int vystupniStrana;
    int vymaz();
signals:

public slots:
};

#endif // BLABLA_H
