#include "farezone.h"
#include <QDebug>
FareZone::FareZone()
{


}


QVector<FareZone> FareZone::filterZonesFromSystem(QVector<FareZone> input, QString fareZoneName)
{
    QVector<FareZone> output;

    foreach(FareZone fareZone,input )
    {
        if(fareZone.system==fareZoneName)
        {
            output.push_back(fareZone);
        }
    }
    qDebug()<<"pocet PID pasem "<<output.count();
    return output;
}


bool FareZone::showZoneChangeCheck(QVector<FareZone> fareZoneList1, QVector<FareZone> fareZoneList2)
{
    qDebug()<<Q_FUNC_INFO;
    //porovnává pásma s následující zastávkou a vrátí hodnotu, zda se změna pásma má zobrazit
    //compares fare zones of two different stops and decides if zone change screen should be displayed
    bool output=false;

    QVector<FareZone> pidZones1=filterZonesFromSystem(fareZoneList1,"PID");
    QVector<FareZone> pidZones2=filterZonesFromSystem(fareZoneList2,"PID");

    if(pidZones1.isEmpty()||pidZones2.isEmpty())
    {
        qDebug()<<"one of the stops lack zones";
        return false;
    }


    if (pidZones1.count()>pidZones2.count())
    {
        qDebug()<<"second stop has less zones";
        return true;
    }
    else
    {
        if(pidZones1.first().name==pidZones2.first().name)
        {
            qDebug()<<"two zone sets have same beginning";
            return false;
        }
        else
        {
            qDebug()<<"first two zones differ";
            return true;
        }
    }


    return output;
}




QString FareZone::fareZoneListToString(QVector<FareZone> fareZones, QString delimiter)
{
    QString output="";

    if (fareZones.count()==0)
    {
        return "";
    }
    for(int i=0; i<fareZones.count()-1;i++)
    {
        output+=fareZones.at(i).name;
        output+=delimiter;
    }
    output+=fareZones.last().name;
    return output;
}
