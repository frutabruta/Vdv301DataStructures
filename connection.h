#ifndef CONNECTION_H
#define CONNECTION_H
#include <QObject>
#include <QDateTime>
#include <QDebug>

#include "line.h"
//#include "transfergolemio.h"



//VDV301 prestupy
class Connection
{
public:
    Connection();


    QString mainMode="";
    QString subMode="";
    QString connectionProperty="";
    QString connectionType="";
    QString destination="";
    Line line;
    QString destinationName="";
    QDateTime expectedDepartureTime;
    QDateTime scheduledDepartureTime;
    QString platform="";
    int getMinutesToDeparture(QDateTime aktCas);
    QString expectedDepartureTimeQString();
    QString scheduledDepartureTimeQString();

    static  bool compareConnections(const Connection &d1, const Connection &d2);
    static  QVector<Connection> orderConnectionsByExpectedDeparture(QVector<Connection> vstup);
};

#endif // CONNECTION_H
