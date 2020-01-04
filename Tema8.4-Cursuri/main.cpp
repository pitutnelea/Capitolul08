#include <iostream>
#include "Mentor.h"
#include "Cursant.h"
using namespace std;

int main()
{
    //declarați mentorul theBest, cu numele complet ”Dumb Dude" și materia "Spalarea aerului"
    Mentor theBest {"Dumb", "Dude", "Spalarea aerului"};

    //afișați numele complet al mentorului theBest
    cout<<theBest.GetNumeComplet()<<endl;

    //afișați textul: ”Dumb preda cursul Spalarea aerului" folosind doar metode ale obiectului theBest (fără text adăugat în main !)
    cout<<theBest.GetPrenume();
    cout<<theBest.Activitate();
    cout<<theBest.GetMaterie()<<endl;

    //declarați cursantul chuck cu numele complet "Chuck Norris" și materia "Spalarea aerului"
    Cursant chuck{"Chuck", "Norris", "Spalarea aerului"};

    //afișați numele complet al cursantului chuck
    cout<<chuck.GetNumeComplet()<<endl;

    //afișați textul: ”Chuck studiaza cursul Spalarea aerului" folosind doar metode ale obiectului chuck (fără text adăugat în main !)
    cout<<chuck.GetPrenume();
    cout<<chuck.Activitate();
    cout<<chuck.GetMaterie()<<endl;

    //apelați metoda Absolva pe obiectul chuck
    cout<<chuck.GetPrenume();
    cout<<chuck.Absolva()<<endl;

    //dați-le membrilor ce rețin note din obiectul chuck valorile 6, 7 și 6
    chuck.SetNotaTeme(6);
    chuck.SetNotaTeste(7);
    chuck.SetNotaProiect(6);

    //apelați din nou metoda Absolva pe obiectul chuck
    cout<<chuck.GetPrenume();
    cout<<chuck.Absolva()<<endl;

    //schimbați numele mentorului încât să fie "Dumber Dude"
    theBest.SchimbaMentor("Dumber","Dude");

    //schimbați materia încât să devină "Numaratul oilor"
    theBest.SchimbaMaterie("Numaratul oilor");

    //afișați numele complet al mentorului theBest
    cout<<theBest.GetNumeComplet()<<endl;

    //afișați textul: ”Dumber preda cursul Numaratul oilor" folosind doar metode ale obiectului theBest (fără text adăugat în main !)
    cout<<theBest.GetPrenume();
    cout<<theBest.Activitate();
    cout<<theBest.GetMaterie()<<endl;

    //declarați cursantul obiWan cu numele complet "Obi Wan Kenobi" și materia "Numaratul oilor"
    Cursant obiWan{"Obi Wan", "Kenobi", "Numaratul oilor"};

    //afișați numele complet al cursantului obiWan
    cout<<obiWan.GetNumeComplet()<<endl;

    //afișați textul: ”Obi Wan studiaza cursul Numaratul oilor" folosind doar metode ale obiectului obiWan  (fără text adăugat în main !)
    cout<<obiWan.GetPrenume();
    cout<<obiWan.Activitate();
    cout<<obiWan.GetMaterie()<<endl;

    //apelați metoda Absolva pe obiectul obiWan
    cout<<obiWan.GetPrenume();
    cout<<obiWan.Absolva()<<endl;

    //dați-le membrilor ce rețin note din obiectul obiWan valorile 10, 10 și 10
    obiWan.SetNotaTeme(10);
    obiWan.SetNotaTeste(10);
    obiWan.SetNotaProiect(10);

    //apelați din nou metoda Absolva pe obiectul obiWan
    cout<<obiWan.GetPrenume();
    cout<<obiWan.Absolva();

    return 0;
}

/*Veți modela un curs atât din punct de vedere al mentorilor cât și al cursanților. În acest scop veți defini următoarele entități:

Clasa Persoana:
    membri, toți de tip string
        1. _prenume
        2. _nume
        3. _materie
    constructor:
        1.unul care primește trei parametri, câte unul pentru fiecare membru și inițializează membrii cu valorile acelor parametri
    metode publice:
        1. Activitate, care nu primește nimic și returnează textul "cursul "
        2. câte un getter pentru membrii _materie și _prenume
    metode protected:
        1. GetNumeComplet, care nu primește nimic și returnează numele complet sub forma prenume nume
        2. câte un setter pentru fiecare membru

Clasa Mentor care moștenește clasa Persoana:
    constructor:
        1. unul care primește trei parametri, câte unul pentru fiecare membru și îi pasează constructorului clasei Persoana
    metode publice:
        1. suprascrieți metoda GetNumeComplet, astfel încât să returneze textul rezultat din concatenarea șirurilor "Mentor: " și numele complet ale persoanei.
        2. suprascrieți metoda Activitate, astfel încât să returneze textul rezultat din concatenarea șirurilor " preda " și ceea ce returnează metoda Activitate din clasa Persoana.
        3. SchimbaMaterie, care nu returnează nimic și primește un parametru de tip string. Metoda modifică valoarea membrului _materie
        4. SchimbaMentor,  care nu returnează nimic și primește doi parametri de tip string. Metoda modifică valoarea membrilor _prenume și _nume

Clasa Cursant care moștenește clasa Persoana:
    membri, toți de tip double
        1. _notaTeme
        2. _notaTeste
        3. _notaProiect
    constructor:
        1. unul care primește trei parametri de tip string, câte unul pentru fiecare membru de tip string și îi pasează constructorului clasei Persoana. De asemenea pune pe 0 toți membrii de tip double.
    metode publice:
        1. suprascrieți metoda GetNumeComplet, astfel încât să returneze textul rezultat din concatenarea șirurilor "Cursant: " și numele complet ale persoanei.
        2. suprascrieți metoda Activitate, astfel încât să returneze textul rezultat din concatenarea șirurilor " studiaza " și ceea ce returnează metoda Activitate din clasa Persoana.
        3. setteri pentru fiecare membru care reține note
        4. Absolva, care nu primește parametri și returnează o valoare de tip string. Metoda verifică, folosind o metodă dedicată, dacă cursantul are o valoare nenulă pentru toți membrii care rețin note. De asemena verifică,  folosind o altă metodă dedicată, că media notelor e mai mare sau egală cu 7. Șirul returnat este
           dacă nu are toți membrii ce rețin note cu valori nenule, ” nu are note suficiente"
           dacă are suficiente note dar media e sub 7, ” nu absolva"
           dacă are suficiente note și media e mai mare sau egală cu 7, ” absolva"
    metode private
        1. HasGrades, care nu primește parametri și returnează o valoare de tip bool. Metoda returnează true dacă fiecare membru care reține note are o valoare diferită de 0 și false în caz contrar.
        2. IsAverageOk, care nu primește parametri și returnează o valoare de tip bool. Metoda returnează true dacă media notelor e mai mare sau egală cu 7 și false în caz contrar.

În funcția main:
1. declarați mentorul theBest, cu numele complet ”Dumb Dude" și materia "Spalarea aerului"
2. afișați numele complet al mentorului theBest
3. afișați textul: ”Dumb preda cursul Spalarea aerului" folosind doar metode ale obiectului theBest (fără text adăugat în main !)
4. declarați cursantul chuck cu numele complet "Chuck Norris" și materia "Spalarea aerului"
5. afișați numele complet al cursantului chuck
6. afișați textul: ”Chuck studiaza cursul Spalarea aerului" folosind doar metode ale obiectului chuck (fără text adăugat în main !)
7. apelați metoda Absolva pe obiectul chuck
8. dați-le membrilor ce rețin note din obiectul chuck valorile 6, 7 și 6
9. apelați din nou metoda Absolva pe obiectul chuck
10. schimbați numele mentorului încât să fie "Dumber Dude"
11. schimbați materia încât să devină "Numaratul oilor"
12. afișați numele complet al mentorului theBest
13. afișați textul: ”Dumber preda cursul Numaratul oilor" folosind doar metode ale obiectului theBest (fără text adăugat în main !)
14. declarați cursantul obiWan cu numele complet "Obi Wan Kenobi" și materia "Numaratul oilor"
15. afișați numele complet al cursantului obiWan
16. afișați textul: ”Obi Wan studiaza cursul Numaratul oilor" folosind doar metode ale obiectului obiWan  (fără text adăugat în main !)
17. apelați metoda Absolva pe obiectul obiWan
18. dați-le membrilor ce rețin note din obiectul obiWan valorile 10, 10 și 10
19. apelați din nou metoda Absolva pe obiectul obiWan*/
