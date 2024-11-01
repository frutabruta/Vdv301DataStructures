#ifndef VDV301LINE_H
#define VDV301LINE_H
#include "vdv301internationaltext.h"
#include <QObject>

class Vdv301Line
{
public:
    Vdv301Line();
    QString lineRef="noRef"; // type="IBIS-IP.NMTOKEN"
    QVector<Vdv301InternationalText> lineNameList; // type="InternationalTextType" minOccurs="0" maxOccurs="unbounded"
    QVector<Vdv301InternationalText> lineShortNameList; // type="InternationalTextType" minOccurs="0" maxOccurs="unbounded"
    QString lineNumber=""; // type="IBIS-IP.int" minOccurs="0"
    QString lineCode=""; // type="IBIS-IP.int" minOccurs="0", identifier of a symbol number , which is used by displays see LINIEN_CODE in VDV 452 chapter 9.7.2 REC_LID

};

#endif // VDV301LINE_H
