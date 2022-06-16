#ifndef PRESTUP_H
#define PRESTUP_H
#include <QObject>
#include "linka.h"


//VDV301 prestupy
class Prestup
{
public:
    Prestup();


    QString mainMode="";
    QString subMode="";
    QString connectionProperty="";
    QString connectionType="";
    QString destination="";
    Linka line;
    QString destinationName="";
    QString expectedDepartureTime="";
    QString scheduledDepartureTime="";
    QString platform="";
};

#endif // PRESTUP_H
