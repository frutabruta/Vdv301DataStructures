#ifndef VDV301ALLDATA2_3CZ1_0_H
#define VDV301ALLDATA2_3CZ1_0_H

#include "vdv301alldata.h"
#include "vdv301trip2_3cz1_0.h"
class Vdv301AllData2_3CZ1_0 : public Vdv301AllData
{
public:
    Vdv301AllData2_3CZ1_0();
    QVector<Vdv301Trip2_3CZ1_0> tripInformationList;
};

#endif // VDV301ALLDATA2_3CZ1_0_H
