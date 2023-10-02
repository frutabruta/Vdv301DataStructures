#include "connection.h"

Connection::Connection()
{
    mainMode="";
    subMode="";
    connectionType="";
    destinationName="";
}



int Connection::getMinutesToDeparture(QDateTime aktCas)
{
    int output= -expectedDepartureTime.secsTo(aktCas)/60 ;


    return output;
}

QString Connection::expectedDepartureTimeQString()
{
    return expectedDepartureTime.toString(Qt::ISODate);
}

QString Connection::scheduledDepartureTimeQString()
{
    return scheduledDepartureTime.toString(Qt::ISODate);
}



QVector<Connection> Connection::orderConnectionsByExpectedDeparture(QVector<Connection> vstup)
{
    qDebug()<<Q_FUNC_INFO;

    std::sort(vstup.begin(),vstup.end(),Connection::compareConnections );

    return vstup;
}

bool Connection::compareConnections(const Connection &d1, const Connection &d2)
{
    //  return d1.smer < d2.smer; // sort by namefile

    return d1.expectedDepartureTime <d2.expectedDepartureTime;

}


