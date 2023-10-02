#ifndef FAREZONE_H
#define FAREZONE_H
#include <QObject>


class FareZone
{
public:
    FareZone();
    QString name="";
    QString system=""; //name of the FareZone system (PID, IDOL etc.)
    static bool showZoneChangeCheck(QVector<FareZone> seznamPasem1, QVector<FareZone> seznamPasem2);
    static QVector<FareZone> filterZonesFromSystem(QVector<FareZone> input, QString hledanePasmo);
    static QString fareZoneListToString(QVector<FareZone> fareZones, QString delimiter);
};

#endif // FAREZONE_H
