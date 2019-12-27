#include <iostream>
#include "Masina.h"

using namespace std;

int main()
{
    //declarați obiectul cauc1 de tip Anvelopa folosind constructorul default
    Anvelopa cauc1;

    //declarați obiectul janta1 de tip Janta folosind constructorul default
    Janta janta1;

    //declarați obiectul rVara1 de tip Roata
    Roata rVara1;

    //declarați obiectele rVara2, rVara3 și rVara4, de tip Roata și inițializați-le cu rVara1
    Roata rVara2{rVara1}, rVara3{rVara1}, rVara4{rVara1};

    //declarați obiectul bmw de tip Masina
    Masina bmw;

    //apelați pe bmw metoda AfiseazaStareRoti cu parametrul "BMW-ul"
    bmw.AfiseazaStareRoti("BMW-ul");

    //apelați pe bmw metoda AfiseazaTipCauciucuri cu parametrul "BMW-ul"
    bmw.AfiseazaTipCauciucuri("BMW-ul");

    //declarați obiectul cauc2 de tip Anvelopa folosind constructorul cu 3 parametri. Folosiți ca valori pentru parametri "Hancook", 2.2, iarna
    Anvelopa cauc2{"Hancook", 2.2, iarna};

    //declarați obiectul janta2 de tip Janta folosind constructorul cu 3 parametri. Folosiți ca valori pentru parametri 5, tabla, 14
    Janta janta2{5, tabla, 14};

    //declarați obiectul rIarna1 de tip Roata folosind noile obiecte cauc2 și janta2
    Roata rIarna1{cauc2, janta2};

    //declarați obiectele rIarna2, rIarna3 și rIarna4, de tip Roata și inițializați-le cu rIarna1
    Roata rIarna2{rIarna1}, rIarna3{rIarna1}, rIarna4{rIarna1};

    //apelați pe bmw metoda SchimbaRoti furnizând cele patru obiecte rIarna_x
    bmw.SchimbaRoti(rIarna1, rIarna2, rIarna3, rIarna4);

    //apelați pe bmw metoda AfiseazaTipCauciucuri cu parametrul "BMW-ul"
    bmw.AfiseazaTipCauciucuri("BMW-ul");

    //declarați obiectul toyota de tip Masina folosind ca parametri cele patru obiecte rIarna_x
    Masina toyota{rIarna1, rIarna2, rIarna3, rIarna4};

    //apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
    toyota.AfiseazaStareRoti("Toyota");

    //apelați pe toyota metoda AfiseazaTipCauciucuri cu parametrul "Toyota"
    toyota.AfiseazaTipCauciucuri("Toyota");

    //apelați metoda UmflaRoata furnizând indicele primei roți și presiunea 0.5
    toyota.UmflaRoata(1, 0.5);

    //apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
    toyota.AfiseazaStareRoti("Toyota");

    //apelați metoda SchimbaRoata furnizând indicele primei roți și obiectul rVara1
    toyota.SchimbaRoata(1, rVara1);

    //apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
    toyota.AfiseazaStareRoti("Toyota");

    //apelați pe toyota metoda AfiseazaTipCauciucuri cu parametrul "Toyota"
    toyota.AfiseazaTipCauciucuri("Toyota");

    return 0;
}
