#ifndef PERSOANA_H
#define PERSOANA_H
#include <string>
#include <iostream>

using namespace std;

class Persoana
{
    public:
        Persoana(string, string, string);
        string Activitate();
        string GetPrenume(){return _prenume;}
        string GetMaterie(){return _materie;}
        virtual ~Persoana();
    protected:
        string GetNumeComplet();
        void SetPrenume(string prenume){_prenume = prenume;}
        void SetNume(string nume){_nume = nume;}
        void SetMaterie(string materie){_materie = materie;}
    private:
        string _prenume;
        string _nume;
        string _materie;
};

#endif // PERSOANA_H
