#include "NormaProf.h"
#include "Clasa.h"
#include <iostream>
using namespace std;

NormaProf::NormaProf()
{
    //ctor
}

NormaProf::NormaProf(Clasa clasa1,Clasa clasa2,Clasa clasa3,Materie fizica)
{
    _clasa1 = clasa1;
    _clasa2 = clasa2;
    _clasa3 = clasa3;
    _materie = fizica;
}

NormaProf::~NormaProf()
{
    //dtor
}

void NormaProf::AfiseazaOre()
{
    cout << "Orarul este: "<< endl;
    _clasa1.AfiseazaOre();
    _clasa2.AfiseazaOre();
    _clasa3.AfiseazaOre();
}

unsigned short NormaProf::CalculeazaTotalOre()
{
    return _clasa1.GetOrePeSapt()+_clasa2.GetOrePeSapt()+_clasa3.GetOrePeSapt();
}
