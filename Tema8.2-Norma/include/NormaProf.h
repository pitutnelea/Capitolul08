#ifndef NORMAPROF_H
#define NORMAPROF_H
#include "Clasa.h"

enum Materie{fizica, matematica, chimie, romana, sport};
class NormaProf
{
    private:
        Materie _materie;
        Clasa _clasa1;
        Clasa _clasa2;
        Clasa _clasa3;

    public:
        NormaProf();
        NormaProf(Clasa, Clasa, Clasa, Materie);
        void AfiseazaOre();
        unsigned short CalculeazaTotalOre();
        virtual ~NormaProf();

    protected:
};

#endif // NORMAPROF_H
