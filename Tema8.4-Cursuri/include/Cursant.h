#ifndef CURSANT_H
#define CURSANT_H
#include "Persoana.h"

class Cursant : public Persoana
{
    public:
        Cursant(string, string, string);
        string GetNumeComplet();
        string Activitate();
        void SetNotaTeme(double notaTeme){_notaTeme = notaTeme;}
        void SetNotaTeste(double notaTeste){_notaTeste = notaTeste;}
        void SetNotaProiect(double notaProiect){_notaProiect = notaProiect;}
        string Absolva();
        virtual ~Cursant();
    protected:
    private:
        double _notaTeme;
        double _notaTeste;
        double _notaProiect;
        bool HasGrades();
        bool IsAverageOk();
};

#endif // CURSANT_H
