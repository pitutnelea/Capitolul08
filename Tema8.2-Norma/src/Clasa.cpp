#include "Clasa.h"
#include "NormaProf.h"
#include <iostream>
using namespace std;

Clasa::Clasa()
{
    //ctor
}

Clasa::Clasa(unsigned short an, char litera, unsigned short orePeSapt)
{
    _an = an;
    _litera = litera;
    _orePeSapt = orePeSapt;
}

Clasa::~Clasa()
{
    //dtor
}

void Clasa::AfiseazaOre()
{
    cout<<"Clasa a "<< _an << _litera <<" : "<< _orePeSapt << " ore/sapt"<<endl;
}
