#include "Cursant.h"

Cursant::Cursant(string prenume, string nume, string materie): Persoana{prenume, nume, materie}
{
    _notaTeme = 0;
    _notaTeste = 0;
    _notaProiect = 0;
}

Cursant::~Cursant()
{
    //dtor
}

string Cursant::GetNumeComplet()
{
    string sir1 = "Cursant: ";
    string sir2 = Persoana::GetNumeComplet();
    string sir3 = sir1 + sir2;
    return sir3;
}

string Cursant::Activitate()
{
    string sir4 = " studiaza ";
    string sir5 = Persoana::Activitate();
    string sir6 = sir4 + sir5;
    return sir6;
}

string Cursant::Absolva()
{
    string sir1 = " nu are note suficiente";
    string sir2 = " nu absolva";
    string sir3 = " absolva";
    if (HasGrades() == false) {return sir1;}
    else if ((HasGrades() == true) && (IsAverageOk() == false)) {return sir2;}
        else {return sir3;}
}

bool Cursant::HasGrades()
{
    return (((_notaTeme!=0)&&(_notaTeste!=0)&&(_notaProiect!=0)) ? true : false);
}

bool Cursant::IsAverageOk()
{
    double MediaNotelor = (_notaTeme + _notaTeste + _notaProiect)/3;
    return ((MediaNotelor >=7 ) ? true : false);
}
