#ifndef ZASTAVKACIL_H
#define ZASTAVKACIL_H
#include "VDV301struktury/zastavka.h"
#include "VDV301struktury/linka.h"


class ZastavkaCil
{
public:
    ZastavkaCil();
    Zastavka zastavka;
    Zastavka cil;
    Linka linka;
};

#endif // ZASTAVKACIL_H
