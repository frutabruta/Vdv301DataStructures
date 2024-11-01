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


Vdv301Connection Connection::toVdv301Connection(DisplayContentClass displayClass)
{
    qDebug()<<Q_FUNC_INFO;
    Vdv301Connection output;

    Vdv301DisplayContent displayContent;


    QString language="cs";

    displayContent.displayContentType=displayClass;
    displayContent.displayContentRef=displayContent.displayContentClassEnumerationToQString(displayContent.displayContentType);

    displayContent.lineInformation.lineNameList<<Vdv301InternationalText(this->line.lineName,language);
    displayContent.destination.destinationNameList<<Vdv301InternationalText(this->destinationName,language);

    output.vdv301displayContentList<<displayContent;

    output.scheduledDepartureTime=this->scheduledDepartureTime;
    output.expectedDepartureTime=this->expectedDepartureTime;
    output.platform=this->platform;

    output.mainMode=this->mainMode;
    output.subMode=this->subMode;


    //   QDateTime arrivalTimestampPredicted;
    //   QDateTime arrivalTimestampScheduled;

    //  bool delayIsAvailable=false;
    //  int delayMinutes=0;
    //  int delaySeconds=0;


    //   int routeType=0;
    //   bool routeIsNight=false;
    //   bool routeIsRegional=false;
    //   bool routeIsSubstituteTransport=false;

    //   QString stopPlatformCode="";

    //   bool tripIsCanceled=false;

    //   bool tripIsAtStop=false;
    return output;

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


