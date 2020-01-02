#include "Mentor.h"
//#include <iostream>
//using namespace std;

Mentor::Mentor(string prenume, string nume, string materie): Persoana{prenume, nume, materie}
{
}

Mentor::~Mentor()
{
    //dtor
}

string Mentor::GetNumeComplet()
{
    string sir1 = "Mentor: ";
    string sir2 = Persoana::GetNumeComplet();
    string sir3 = sir1 + sir2;
    return sir3;

}

string Mentor::Activitate()
{
    string sir4 = " preda ";
    string sir5 = Persoana::Activitate();
    string sir6 = sir4 + sir5;
    return sir6;
}

void Mentor::SchimbaMaterie(string materie)
{
    SetMaterie(materie);
}

void Mentor::SchimbaMentor(string prenume, string nume)
{
 SetPrenume(prenume);
 SetNume(nume);
}
