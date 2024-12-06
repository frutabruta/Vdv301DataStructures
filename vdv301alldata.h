#ifndef VDV301ALLDATA_H
#define VDV301ALLDATA_H
#include "vdv301displaycontent.h"
#include "vdv301trip.h"
#include "vdv301displaycontent.h"
#include "vdv301vehicleinformationgroup.h"
class Vdv301AllData
{
public:
    Vdv301AllData();


    QDateTime timeStamp;// timeStamp, type="IBIS-IP.dateTime"

    QString vehicleRef="0"; // type="IBIS-IP.NMTOKEN"
    QString  defaultLanguage="cs";
    QVector<Vdv301Trip> tripInformationList;
    int currentStopIndex=1; //Index of the Stoppoint in the Stopsequence, which is the next Stop, type="IBIS-IP.int"
    Vdv301VehicleInformationGroup vehicleInformationGroup;

    QVector<Vdv301DisplayContent> globalDisplayContentList;
    bool isVehicleOnFinalStop();
};

#endif // VDV301ALLDATA_H
