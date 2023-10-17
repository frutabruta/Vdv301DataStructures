#include "connectionmpv.h"


ConnectionMPV::ConnectionMPV()
{

}

void ConnectionMPV::setLin(int pLin)
{
    this->lin=QString::number(pLin);
}


Connection ConnectionMPV::toConnection()
{

    Connection output;
    /*
    void setLin(int pLin);
    QString lin="";
    int spoj=0;
    QString odj="";
    int zpoz=0;
    bool np=false;
    bool nad=false;
    QString t="";
    int smer_c=0;
    bool sled=false;   */

/*
    QString connectionProperty="";
    QString connectionType="";
    QString destination="";
    Lineline;*/

    output.line.lineName=this->alias;
    output.destinationName=this->smer;
    output.platform=this->stan;
    output.expectedDepartureTime=shiftTimestampByDelay(this->odj,  this->zpoz );
    output.scheduledDepartureTime= this->odj;
    ddDoVehicleMode(this->dd,output.mainMode,output.subMode,output.line);

    return output;

}


QDateTime ConnectionMPV::shiftTimestampByDelay(QDateTime vstupniTimestamp, int zpozdeni)
{

    return vstupniTimestamp.addSecs(zpozdeni*60);

}

QDateTime  ConnectionMPV::qStringDoQDateTime(QString vstup)
{
    return QDateTime::fromString(vstup,Qt::ISODate);
}

QString ConnectionMPV::qDateTimeToString(QDateTime vstup)
{
     return vstup.toString(Qt::ISODate);
}






void ConnectionMPV::ddDoVehicleMode(int dd, QString &mainMode, QString &subMode, Line &linka)
{
    qDebug()<<"PrestupMPV::ddDoVehicleMode "<<dd;

    /*
    bool isDiversion=false;
    bool isNight=false;
    bool isReplacement=false;
*/




    switch(dd)
    {
    case 1: //Metro
        mainMode="MetroSubmode";
        subMode="metro";

        break;
    case 2: //Denní tramvaj (day tram)
        mainMode="TramSubmode";
        subMode="localTram";

        break;

    case 3: //Denní městská autobusová linka (day city bus)
        mainMode="BusSubmode";
        subMode="localBus";

        break;
    case 4: //Denní příměstská nebo regionální linka (day regional bus)
        mainMode="BusSubmode";
        subMode="regionalBus";

        break;
    case 5: //Noční městská autobusová linka (night city bus)
        mainMode="BusSubmode";
        subMode="localBus";
        linka.isNight=true;

        break;
    case 6: //Noční tramvaj (night tram)
        mainMode="TramSubmode";
        subMode="localTram";
        linka.isNight=true;

        break;
    case 7: //Linka náhradní dopravy, městský autobus (replacement bus)
        mainMode="BusSubmode";
        subMode="localBus";
        linka.isReplacement=true;

        break;

    case 8: //Lanovka (funicular)
        mainMode="FunicularSubmode";
        subMode="funicular";

        break;
    case 9: //Školní linka (school bus)
        mainMode="BusSubmode";
        subMode="schoolBus";
        linka.isSchool=true;

        break;

    case 10: //Invalidní (bus line for people with reduced mobility)
        mainMode="BusSubmode";
        subMode="specialNeedsBus";
        linka.isWheelchair=true;

        break;
    case 11: //Smluvni (contract line)
        mainMode="BusSubmode";
        subMode="localBus";
        linka.isSpecial=true;
        qDebug()<<"linka je specialni";


        break;
    case 12: //Přívoz (ferry)
        mainMode="WaterSubmode";
        subMode="localPassengerFerry";

        break;
    case 13: //Vlaky PID – linky S nebo R (PID trains)
        mainMode="RailSubmode";
        subMode="regionalRail";

        break;
    case 14: //Linka náhradní dopravy, NAD za vlak (bus replacement for bus)
        mainMode="BusSubmode";
        subMode="railReplacementBus";
        linka.isReplacement=true;

        break;
    case 15: //Linka náhradní dopravy, Tram (replacement tram)
        mainMode="TramSubmode";
        subMode="localTram";
        linka.isReplacement=true;

        break;

    case 16: //Noční příměstská nebo regionální linka (night regional bus)
        mainMode="BusSubmode";
        subMode="regionalBus";
        linka.isNight=true;

        break;

    case 17: //Linka mimo systém PID (3 znaky) (bus line not included in PID system)
        mainMode="BusSubmode";
        subMode="undefined";

        break;
    case 18: //Denní trolejbusová linka (day trolleybus)
        mainMode="TrolleybusSubmode";
        subMode="localTrolleybus";

        break;

        /*
    case XX: //Lanovka do Bohnic
        mainMode="TelecabinSubmode";
        subMode="telecabin";

        break;
        */


    default:
        mainMode="BusSubmode";
        subMode="undefined";
        break;

    }
}




bool ConnectionMPV::compareConnectionMPV(const ConnectionMPV &d1, const ConnectionMPV &d2)
{
  //  return d1.smer < d2.smer; // sort by namefile

    return d1.odjReal <d2.odjReal;

}

QString ConnectionMPV::dumpConnection()
{
    QString output;
    output=output+"prestup: "+this->alias+" "+this->smer+" "+this->odj.toString()+" "+QString::number(this->zpoz)+" "+this->stan;
    return output;
}


QVector<ConnectionMPV> ConnectionMPV::orderConnectionsByExpectedDeparture(QVector<ConnectionMPV> input)
{
    qDebug()<<Q_FUNC_INFO;


    foreach(ConnectionMPV aktPrestup,input)
    {
        qDebug()<<aktPrestup.dumpConnection();
    }

    qDebug()<<"ordered:";

   std::sort(input.begin(),input.end(),ConnectionMPV::compareConnectionMPV );

   foreach(ConnectionMPV currentConnectionMPV,input)
   {
       qDebug()<<currentConnectionMPV.dumpConnection();
   }


   return input;
}










