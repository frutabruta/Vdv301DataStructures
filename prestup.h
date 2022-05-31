#ifndef PRESTUP_H
#define PRESTUP_H
#include <QObject>


//VDV301 prestupy
class Prestup
{
public:
    Prestup();


    QString mainMode="";
    QString subMode="";
    QString property="";
    QString connectionType="";
    QString lineName="";
    QString destinationName="";
    QString departureTime="";
    QString platform="";
};

#endif // PRESTUP_H
