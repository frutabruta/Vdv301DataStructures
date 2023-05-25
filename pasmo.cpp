#include "pasmo.h"
#include <QDebug>
Pasmo::Pasmo()
{


}


QVector<Pasmo> Pasmo::vratPidPasma(QVector<Pasmo> vstup,QString hledanePasmo)
{
    QVector<Pasmo> vystup;

    foreach(Pasmo pasmo,vstup )
    {
        if(pasmo.system==hledanePasmo)
        {
            vystup.push_back(pasmo);
        }
    }
    qDebug()<<"pocet PID pasem "<<vystup.count();
    return vystup;
}


bool Pasmo::podminkaHlasitZmenuPasma(QVector<Pasmo> seznamPasem1, QVector<Pasmo> seznamPasem2)
{
    qDebug()<<"xmlGenerator::podminkaHlasitZmenuPasma";
    //porovnává pásma s následující zastávkou a vrátí hodnotu, zda se změna pásma má zobrazit
    bool vysledek=false;

    QVector<Pasmo> pidPasma1=vratPidPasma(seznamPasem1,"PID");
    QVector<Pasmo> pidPasma2=vratPidPasma(seznamPasem2,"PID");

    if(pidPasma1.isEmpty()||pidPasma2.isEmpty())
    {
        qDebug()<<"jedna zastavka nema pasma";
        return false;
    }


    if (pidPasma1.count()>pidPasma2.count())
    {
        qDebug()<<"pasma ubyvaji";
        return true;
    }
    else
    {
        if(pidPasma1.first().nazev==pidPasma2.first().nazev)
        {
            qDebug()<<"pasma stejne zacinaji";
            return false;
        }
        else
        {
            qDebug()<<"prvni pasma se lisi";
            return true;
        }
    }


    return vysledek;
}




QString Pasmo::pasmaDoStringu(QVector<Pasmo> pasma, QString delimiter)
{
    QString vysledek="";

    if (pasma.count()==0)
    {
        return "";
    }
    for(int i=0; i<pasma.count()-1;i++)
    {
        vysledek+=pasma.at(i).nazev;
        vysledek+=delimiter;
    }
    vysledek+=pasma.last().nazev;
    return vysledek;
}
