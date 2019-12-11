#include "Cilindru.h"
#include "Cerc.h"
#include <cmath>
#define M_PI 3.14

Cilindru::Cilindru(double razaBaza, double inaltime):_baza{razaBaza}, _inaltime{inaltime}
{
}

Cilindru::~Cilindru()
{
    //dtor
}

double Cilindru::Volum()
{
    return (_baza.Arie()*_inaltime);
}

double Cilindru::Arie()
{
    return ((2*_baza.Arie())+(2*M_PI*_baza.GetRaza()*_inaltime));
}
