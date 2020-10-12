#include "Roata.h"

Roata::Roata()
{
    //ctor
}

Roata::Roata(Anvelopa anvelopa, Janta janta): _anvelopa{anvelopa}, _janta{janta}
{
}

Roata::~Roata()
{
    //dtor
}

bool Roata::IsFlat()
{
    if (_anvelopa.GetPresiune() < 1) {return true;}
    //else if (_anvelopa.GetPresiune() >1) {return false;}
}
//în metoda Roata::IsFlat() nu mai trebuia să testezi ceva pe ramura de else. 
//Dat fiind că tu ai testat ai lăsat pe dinafară cazul în care presiunea anvelopei e chiar 1.

void Roata::SchimbaRoata(Anvelopa anvelopa, Janta janta)
{
    _anvelopa = anvelopa;
    _janta = janta;
}

void Roata::UmflaRoata(double presiune)
{
    _anvelopa.UmflaAnvelopa(presiune);
}

TipAnvelopa Roata::GetTipAnvelopa()
{
    return _anvelopa.GetTipAnvelopa();
}
