#ifndef VDV301VIAPOINT_H
#define VDV301VIAPOINT_H

#include <QObject>
#include "vdv301internationaltext.h"
class Vdv301ViaPoint
{
public:
    Vdv301ViaPoint();
    QString viaPointRef;
    QVector<Vdv301InternationalText> placeNameList;

};

#endif // VDV301VIAPOINT_H
