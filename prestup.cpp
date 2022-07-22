#include "prestup.h"
#include <QObject>
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
