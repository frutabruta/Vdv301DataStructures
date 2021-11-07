#ifndef SPOJ_H
#define SPOJ_H

#include <QObject>
#include <QWidget>
#include "linka.h"
class Spoj
{
public:
    Spoj();
    Linka linka;
    int cislo=0;
    int cisloRopid=0;
    bool navazujici=false;
};

#endif // SPOJ_H
