#include "vdv301connection.h"

Vdv301Connection::Vdv301Connection()
{
    mainMode="";
    subMode="";
  //  connectionType="";
  //  destinationName="";
}



int Vdv301Connection::getMinutesToDeparture(QDateTime aktCas)
{
    int output= -expectedDepartureTime.secsTo(aktCas)/60 ;


    return output;
}

QString Vdv301Connection::expectedDepartureTimeQString()
{
    return expectedDepartureTime.toString(Qt::ISODate);
}

QString Vdv301Connection::scheduledDepartureTimeQString()
{
    return scheduledDepartureTime.toString(Qt::ISODate);
}



QVector<Vdv301Connection> Vdv301Connection::orderConnectionsByExpectedDeparture(QVector<Vdv301Connection> vstup)
{
    qDebug()<<Q_FUNC_INFO;
    
    std::sort(vstup.begin(),vstup.end(),Vdv301Connection::compareConnections );

    return vstup;
}

bool Vdv301Connection::compareConnections(const Vdv301Connection &d1, const Vdv301Connection &d2)
{
    //  return d1.smer < d2.smer; // sort by namefile

    return d1.expectedDepartureTime <d2.expectedDepartureTime;

}


