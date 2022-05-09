#include "cestaudaje.h"
#include<iostream>
#include <QDebug>
using namespace std;
CestaUdaje::CestaUdaje(QWidget *parent)
{
qDebug()<<"CestaUdaje::CestaUdaje";
    vymaz();

}


int CestaUdaje::vymaz()
{
    qDebug()<<"CestaUdaje::vymaz()";
    doorState="AllDoorsClosed";
    locationState="AtStop";
    VehicleStopRequested=false;
    indexAktZastavky=0;
    pocetZastavek=0;
    aktlinka.LineNumber="";
    //aktspoj=0;
   return 1;
}

int CestaUdaje::pocetZastavekAktualnihoSpoje()
{
    int vysledek=0;
    vysledek=this->aktObeh.seznamSpoju.at(this->indexSpojeNaObehu).globalniSeznamZastavek.count();

    return vysledek;
}

Spoj CestaUdaje::aktualniSpojNaObehu()
{
  return this->aktObeh.seznamSpoju.at(this->indexSpojeNaObehu);
}


