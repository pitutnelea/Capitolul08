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
    toyota.UmflaRoata(0, 0.5);

    //apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
    toyota.AfiseazaStareRoti("Toyota");

    //apelați metoda SchimbaRoata furnizând indicele primei roți și obiectul rVara1
    toyota.SchimbaRoata(0, rVara1);

    //apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
    toyota.AfiseazaStareRoti("Toyota");

    //apelați pe toyota metoda AfiseazaTipCauciucuri cu parametrul "Toyota"
    toyota.AfiseazaTipCauciucuri("Toyota");

    return 0;
}

/*
Veți modela roțile unei mașini. În acest scop veți defini următoarele entități:

Enumerarea MatJanta cu valorile tabla și aluminiu
Clasa Janta:
    membri
        1. _nrPrezoane
        2. _matJanta de tip MatJanta
        3. _diametru
    constructori
        1. cel default. Pune _nrPrezoane pe 5, _matJanta pe aluminiu și _diametru pe 14
        2. unul care primește trei parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
    metoda publică
        1. SchimbaJanta, care nu returnează nimic și primește doi parametri, de tip MatJanta respectiv de tipul membrului _diametru. Metoda modifică valoarea membrilor _matJanta și _diametru folosind parametrii primiți.

Enumerarea TipAnvelopa cu valorile iarna, vara și universal
Clasa Anvelopa:
    membri:
        1. _brand de tip string
        2. _presiune
        3. _tipAnvelopa de tip TipAnvelopa
    constructori
        1. cel default. Pune _brand pe "Michelin", _presiune pe 2.2 și _tipAnvelopa pe vara
        2. unul care primește trei parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
    metode publice
        1. Getteri pentru membrii _presiune și _tipAnvelopa
        2. UmflaAnvelopa, care nu returnează nimic și primește un parametru de tipul membrului _presiune. Dacă parametrul primit e mai mare decât 3, metoda pune _presiune pe 3. În caz contrar, metoda copiază valoarea parametrului în _presiune

Clasa Roata:
    membri
        1. _anvelopa
        2. _janta
    constructor
        1. unul care primește doi parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
    metode publice
        1. IsFlat, care nu primește parametri. Returnează true dacă presiunea anvelopei este mai mică de 1 și false în caz contrar
        2. SchimbaRoata, care nu returnează nimic. Primește câte un parametru pentru fiecare membru și copiază valoarea fiecărui parametru în membrul corespunzător
        3. UmflaRoata, care nu returnează nimic. Primește parametrul presiune de tip double și apelează metoda UmflaAnvelopa a membrului _anvelopa furnizându-i parametrul presiune.
        4. GetTipAnvelopa, care nu primește parametri și returnează TipAnvelopa. Metoda apelează pe membrul _anvelopa getterul corespunzător.

Clasa Masina:
    membru
        1. _roti, un tablou cu 4 elemente de tip Roata
    constructor
        1. unul care primește patru  parametri de tip Roata și inițializează tabloul _roti cu ele
    metoda privată
        1. VerificaRoti, care nu primește parametri și returnează short. Metoda apelează pe fiecare element Roată din tabloul _roti metoda IsFlat. Dacă găsește o roată desumflată (adică IsFlat a returnat true) returnează indicele (poziția) din tablou al acelui element. Dacă toate roțile sunt umflate metoda returnează -1.
    metode publice
        1. AfiseazaStareRoti, care nu returnează nimic. Primește un parametru de tip string reprezentând numele mașinii. Afișează acest parametru  (fără să adauge o linie nouă !). Apoi apelează metoda VerificaRoti salvând rezultatul returnat de metodă într-o variabilă locală. Dacă acea variabilă este mai mică ca 0 afișează textul " are toate rotile in regula". În caz contrar afișează textul " are pana la roata " și afișează valoare variabilei locale incrementată cu 1 (pentru că indicii în tablouri pleacă de la 0 dar roțile unei mașini se numără plecând de la 1 :) )
        2. UmflaRoti, care nu returnează nimic. Primește parametrul presiune, de tip double. Metoda apelează pentru fiecare element din tabloul _roti metoda UmflaRoata, pasându-i parametrul presiune.
        3. UmflaRoata, care nu returnează nimic. Primește ca parametri indicele roții de umflat și presiunea. Metoda apelează pentru elementul cu indicele primit parametru din tabloul _roti metoda UmflaRoata, pasându-i parametrul presiune.
        4. SchimbaRoti, care nu returnează nimic. Primește patru parametri de tip Roata. Metoda copiază cei patru parametri în cele patru elemente ale tabloului _roti
        5. SchimbaRoata, care nu returnează nimic. Primește ca parametri indicele roții de schimbat și un obiect de tip Roata). Metoda copiază în elementul cu indicele primit parametru din tabloul _roti obiectul de tip Roata primit ca parametru.
        6. AfiseazaTipCauciucuri, care nu returnează nimic. Primește un parametru de tip string reprezentând numele mașinii. Afișează acest parametru și textul " are cauciucuri " (fără să adauge o linie nouă !). Apoi verifică tipul anvelopei fiecăreia din cele 4 roți. Dacă găsește de mai multe feluri  afișează textul " mixte". Dacă sunt toate 4 de același tip afișează textul corespunzător adică "de iarna", "de vara" sau "all season". La final metoda afișează o linie nouă la consolă

În funcția main:
1. declarați obiectul cauc1 de tip Anvelopa folosind constructorul default
2. declarați obiectul janta1 de tip Janta folosind constructorul default
3. declarați obiectul rVara1 de tip Roata
4. declarați obiectele rVara2, rVara3 și rVara4, de tip Roata și inițializați-le cu rVara1
5. declarați obiectul bmw de tip Masina
6. apelați pe bmw metoda AfiseazaStareRoti cu parametrul "BMW-ul"
7. apelați pe bmw metoda AfiseazaTipCauciucuri cu parametrul "BMW-ul"
8. declarați obiectul cauc2 de tip Anvelopa folosind constructorul cu 3 parametri. Folosiți ca valori pentru parametri "Hancook", 2.2, iarna
9. declarați obiectul janta2 de tip Janta folosind constructorul cu 3 parametri. Folosiți ca valori pentru parametri 5, tabla, 14
10. declarați obiectul rIarna1 de tip Roata folosind noile obiecte cauc2 și janta2
11. declarați obiectele rIarna2, rIarna3 și rIarna4, de tip Roata și inițializați-le cu rIarna1
12. apelați pe bmw metoda SchimbaRoti furnizând cele patru obiecte rIarna_x
13. apelați pe bmw metoda AfiseazaTipCauciucuri cu parametrul "BMW-ul"
14. declarați obiectul toyota de tip Masina folosind ca parametri cele patru obiecte rIarna_x
15. apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
16. apelați pe toyota metoda AfiseazaTipCauciucuri cu parametrul "Toyota"
17. apelați metoda UmflaRoata furnizând indicele primei roți și presiunea 0.5
18. apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
19. apelați metoda SchimbaRoata furnizând indicele primei roți și obiectul rVara1
20. apelați pe toyota metoda AfiseazaStareRoti cu parametrul "Toyota"
21. apelați pe toyota metoda AfiseazaTipCauciucuri cu parametrul "Toyota"
*/
