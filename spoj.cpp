#include "spoj.h"

Spoj::Spoj()
{

}

void Spoj::vymaz()
{

    linka.vymaz();
    cislo=0;
    cisloRopid=0;
    globalniSeznamZastavek.clear();
    navazujici=false;
}


bool Spoj::operator==(const Spoj &node) const
{
return cisloRopid == node.cisloRopid&&
linka.c== node.linka.c;
}

