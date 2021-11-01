#ifndef TRIP_H
#define TRIP_H

#include "VDV301struktury/zastavkacil.h"
#include "VDV301struktury/spoj.h"
class Trip
{
public:
    Trip();
     QVector<ZastavkaCil>  globalniSeznamZastavek ;
     Spoj spoj;
     Spoj navazSpoj;

};

#endif // TRIP_H
