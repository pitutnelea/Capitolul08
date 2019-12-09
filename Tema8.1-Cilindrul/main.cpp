#include <iostream>
#include "Cerc.h"
#include "Cilindru.h"

using namespace std;

int main()
{
    Cilindru chilly {2, 5};
    cout<<"Volumul lui chilly e "<< chilly.Volum()<< endl;
    cout<<"Aria lui chilly e "<<chilly.Arie()<< endl;

    Cilindru *hipster = new Cilindru[2]{Cilindru{2,5},Cilindru{5,2}};
    cout<< "Volumul primului hipster e "<< hipster[0].Volum()<<endl;
    cout<< "Aria primului hipster e "<<hipster[0].Arie()<<endl;
    cout<< "Volumul celui de-al doilea hipster e "<< hipster[1].Volum()<<endl;
    cout<< "Aria celui de-al doilea hipster e "<< hipster[1].Arie() <<endl;

    delete []hipster;
    hipster = NULL;

    return 0;
}

/*
Creați clasa Cerc astfel încât să conțină:
    membrul _raza de tip double
    un constructor cu un parametru double care să inițializeze membrul raza
    o metoda Arie care să returneze aria cercului folosind formula „PI * R^2”
    un getter pentru _raza
Creați clasa Cilindru astfel încât să conțină:
    membrul _baza de tip Cerc
    membrul _inaltime de tip double
    un constructor cu doi parametri double, unul pentru raza bazei și celălalt pentru înălțime, care să inițializeze membrii de mai sus
        Notă: În cazul lui _baza e nevoie să apelați constructorul cu un parametru din clasa Cerc furnizând-i parametrul primit pentru raza bazei
    metodă Volum care să returneze volumul cilindrului folosind formula „aria bazei * înălțimea”
    metodă Arie care să returneze aria cilindrului folosind formula „2 * aria bazei + 2 * PI * raza * înălțimea”
În funcția main declarați obiectul chilly de tip Cilindru cu valorile 2 și 5 pentru raza bazei respectiv înălțime.
Afișați volumul și aria lui chilly.
Declarați pe heap un tablou cu două elemente de tip Cilindru furnizând constructorului valorile 2 și 5, respectiv 5 și 2. Numiți pointerul care arată spre acel tablou hipster.
Afișați volumul și aria fiecărui element din hipster.*/
