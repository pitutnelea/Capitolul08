#include <iostream>
#include "Mentor.h"
#include "Cursant.h"

using namespace std;

int main()
{
    //declarați mentorul theBest, cu numele complet ”Dumb Dude" și materia "Spalarea aerului"
    Mentor theBest{"Dumb", "Dude", "Spalarea aerului"};

    //afișați numele complet al mentorului theBest
    theBest.GetNumeComplet();

    //afișați textul: ”Dumb preda cursul Spalarea aerului" folosind doar metode ale obiectului theBest (fără text adăugat în main !)
    theBest.GetPrenume();
    theBest.Activitate();
    theBest.GetMaterie();

    //declarați cursantul chuck cu numele complet "Chuck Norris" și materia "Spalarea aerului"
    Cursant chuck{"Chuck", "Norris", "Spalarea aerului"};

    //afișați numele complet al cursantului chuck
    chuck.GetNumeComplet();

    //afișați textul: ”Chuck studiaza cursul Spalarea aerului" folosind doar metode ale obiectului chuck (fără text adăugat în main !)
    chuck.GetPrenume();
    chuck.Activitate(); // din Cursant
    chuck.Activiate(); // din Persoana
    chuck.GetMaterie();

    //apelați metoda Absolva pe obiectul chuck
    chuck.Absolva();

    //dați-le membrilor ce rețin note din obiectul chuck valorile 6, 7 și 6


    //apelați din nou metoda Absolva pe obiectul chuck

    //schimbați numele mentorului încât să fie "Dumber Dude"

    //schimbați materia încât să devină "Numaratul oilor"

    //afișați numele complet al mentorului theBest

    //afișați textul: ”Dumber preda cursul Numaratul oilor" folosind doar metode ale obiectului theBest (fără text adăugat în main !)

    //declarați cursantul obiWan cu numele complet "Obi Wan Kenobi" și materia "Numaratul oilor"

    //afișați numele complet al cursantului obiWan

    //afișați textul: ”Obi Wan studiaza cursul Numaratul oilor" folosind doar metode ale obiectului obiWan  (fără text adăugat în main !)

    //apelați metoda Absolva pe obiectul obiWan

    //dați-le membrilor ce rețin note din obiectul obiWan valorile 10, 10 și 10

    //apelați din nou metoda Absolva pe obiectul obiWan

    return 0;
}
