#ifndef SPOJ_H
#define SPOJ_H

#include <QObject>
#include <QWidget>
#include "linka.h"
#include "zastavkacil.h"
class Spoj
{
public:
    Spoj();
    Linka linka;
    int cislo=0;
    int cisloRopid=0;
    QVector<ZastavkaCil>  globalniSeznamZastavek ;
    bool navazujici=false;
    void vymaz();

    bool operator ==(const Spoj &node) const;
};

#endif // SPOJ_H
