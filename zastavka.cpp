#include "zastavka.h"


Zastavka::Zastavka()
{

}



/*!

*/
QTime Zastavka::vytvorCasHodinyMinuty(QString vstup)
{
    // qDebug()<<"SqlPraceRopid::vytvorCas";
    int cislo=vstup.toInt();
    cislo=cislo%86400; //oprava pro spoje jedoucí přes půlnoc
    int hodiny=cislo/3600;
    int minuty=(cislo%3600)/60;
    QTime cas = QTime(hodiny,minuty);
    return cas;
}

QTime Zastavka::odjezdQTime()
{
    return vytvorCasHodinyMinuty(DepartureTime);
}
