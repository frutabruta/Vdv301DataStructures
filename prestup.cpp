#include "prestup.h"
#include <QObject>
#include <QDebug>
#include "prestupgolemio.h"
Prestup::Prestup()
{
mainMode="";
subMode="";
connectionType="";
destinationName="";
//expectedDepartureTime="";
//scheduledDepartureTime="";
}



int Prestup::minutDoOdjezdu(QDateTime aktCas)
{
    int vysledek= -expectedDepartureTime.secsTo(aktCas)/60 ;

   // QDateTime::fromString(vstupniDokument.firstChildElement("CustomerInformationService.GetAllDataResponse").firstChildElement("AllData").firstChildElement("TimeStamp").firstChildElement("Value").firstChild().nodeValue() ,Qt::ISODate);


return vysledek;
}

QString Prestup::expectedDepartureTimeQString()
{
return expectedDepartureTime.toString(Qt::ISODate);
}

QString Prestup::scheduledDepartureTimeQString()
{
return scheduledDepartureTime.toString(Qt::ISODate);
}



QVector<Prestup> Prestup::seradPrestupyExpectedDeparture(QVector<Prestup> vstup)
{
    qDebug()<<Q_FUNC_INFO;


    foreach(Prestup aktPrestup,vstup)
    {
     //   qDebug()<<aktPrestup.vypisPrestup();
    }

    qDebug()<<"serazeno:";

   std::sort(vstup.begin(),vstup.end(),Prestup::srovnejPrestupy );

   foreach(Prestup aktPrestup,vstup)
   {
   //    qDebug()<<aktPrestup.vypisPrestup();
   }


   return vstup;
}

bool Prestup::srovnejPrestupy(const Prestup &d1, const Prestup &d2)
{
  //  return d1.smer < d2.smer; // sort by namefile

    return d1.expectedDepartureTime <d2.expectedDepartureTime;

}


