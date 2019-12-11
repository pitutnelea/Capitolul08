#include <iostream>
using namespace std;
#include "Clasa.h"
#include "NormaProf.h"

int main()
{
    Clasa oClasa (11, 'C', 4);
    Clasa altaClasa (5, 'B', 5);
    Clasa ultimaClasa (9, 'A', 3);
    NormaProf ludu {oClasa, altaClasa, ultimaClasa, matematica};
    ludu.AfiseazaOre();
    cout<<"Total ore: "<< ludu.CalculeazaTotalOre()<<endl;
    NormaProf *mutu = new NormaProf{oClasa, altaClasa, ultimaClasa, matematica};
    mutu->AfiseazaOre();
    cout<<"Total ore: "<<mutu->CalculeazaTotalOre()<<endl;

    delete mutu;
    mutu = NULL;

    return 0;
}

/*
Definiți clasa ...Clasa :) astfel încât să conțină:
    membrul _an de tip unsigned short pentru anul clasei (1 - 12)
    membrul  _litera de tip char (litera clasei)
    membrul  _orePeSapt de tip unsigned short
    un constructor cu trei parametri (doi de tip unsigned short și unul de tip char) care să inițializeze cei trei membri
    o metoda AfiseazaOre care să afișeze un text ca acesta: „Clasa a 9A : 3 ore / sapt” unde în loc de  9, A și 3 să puneți membrii corespunzători din definiția clasei Clasa
    un getter pentru _orePeSapt
Definiți clasa NormaProf astfel încât să conțină:
    membrul _materie de tip Materie unde Materie este un enum pe care trebuie să îl definiți tot în NormaProf.h, înainte de clasa NormaProf. Enum-ul trebuie să conțină intrările fizica, matematica, chimie, romana și sport
    membrul  _clasa1 de tip Clasa
    membrul  _clasa2 de tip Clasa
    membrul  _clasa3 de tip Clasa
    un constructor cu patru parametri (trei de tip Clasa și unul de tip Materie) care să inițializeze cei patru membri
    o metodă AfiseazaOre care să afișeze orele tuturor celor trei clase
    o metodă CalculeazaTotalOre care returnează totalul orelor alocate fiecărei clase
În funcția main declarați
    obiectul oClasa, de tip Clasa, care să modeleze clasa a 11C cu 4 ore / săpt
    obiectul altaClasa, de tip Clasa, care să modeleze clasa a 5B cu 5 ore / săpt
    obiectul ultimaClasa, de tip Clasa, care să modeleze clasa a 9A cu 3 ore / săpt
    obiectul ludu de tip NormaProf. Dați-i ca parametri la constructor ce materie vreți și cele trei obiecte de tip Clasa de mai sus.
    apelați pe ludu metoda AfiseazaOre
    apoi afișați la consolă totalul orelor lui ludu.
    pointerul mutu, către NormaProf, pe care să îl alocați pe heap. Ca parametri pentru constructor folosiți tot cei de la obiectul ludu
    apelați pe mutu metoda AfiseazaOre
    afișați totalul orelor spre care indică mutu
*/
