#include "Persoana.h"
#include <iostream>
using namespace std;

Persoana::Persoana(string prenume, string nume, string materie): _prenume{prenume}, _nume{nume}, _materie{materie}
{
}

Persoana::~Persoana()
{
    //dtor
}

string Persoana::Activitate()
{
    return "cursul";
}

string Persoana::GetNumeComplet()
{
    string sir1 = _prenume + " " + _nume;
    return sir1;
}
