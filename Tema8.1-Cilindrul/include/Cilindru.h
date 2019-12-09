#ifndef CILINDRU_H
#define CILINDRU_H
#include "Cerc.h"

class Cilindru
{
    private:
        Cerc _baza;
        double _inaltime;

    public:
        Cilindru();
        Cilindru(double);
        Cilindru(double, double);
        double Volum ();
        double Arie();
        virtual ~Cilindru();

    protected:
};

#endif // CILINDRU_H
