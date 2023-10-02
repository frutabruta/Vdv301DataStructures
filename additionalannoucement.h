#ifndef ADDITIONALANNOUCEMENT_H
#define ADDITIONALANNOUCEMENT_H

#include <QObject>
class AdditionalAnnoucement
{
public:
    AdditionalAnnoucement();
    QString type="";
    QString title="";
    QString text="";
    QString displayName="";
    QVector<QString> mp3;
};

#endif // ADDITIONALANNOUCEMENT_H
