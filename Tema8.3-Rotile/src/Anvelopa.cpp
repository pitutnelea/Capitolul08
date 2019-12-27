#include "Anvelopa.h"

Anvelopa::Anvelopa(): _brand{"Michelin"}, _presiune{2.2}, _tipAnvelopa{vara}
{
    //ctor
}

Anvelopa::Anvelopa(string brand, double presiune, TipAnvelopa tip): _brand{brand}, _presiune{presiune}, _tipAnvelopa{tip}
{
}

Anvelopa::~Anvelopa()
{
    //dtor
}

void Anvelopa::UmflaAnvelopa(double presiune)
{
    (presiune > 3) ? SetPresiune(3) : SetPresiune(presiune);
}
