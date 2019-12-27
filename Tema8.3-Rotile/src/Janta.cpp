#include "Janta.h"

Janta::Janta(): _nrPrezoane{5}, _matJanta{aluminiu}, _diametru{14}
{
    //ctor
}

Janta::Janta(int nrPrezoane, MatJanta tabla, int diametru): _nrPrezoane{nrPrezoane}, _matJanta{tabla}, _diametru{diametru}
{
}

Janta::~Janta()
{
    //dtor
}

void Janta::SchimbaJanta(MatJanta tabla, int diametru)
{
    _matJanta = tabla;
    _diametru = diametru;
}
