#ifndef ROATA_H
#define ROATA_H
#include "Janta.h"
#include "Anvelopa.h"

class Roata
{
    public:
        Roata();
        void SetAnvelopa(Anvelopa anvelopa){_anvelopa = anvelopa;}
        Anvelopa GetAnvelopa(){return _anvelopa;}
        void SetJanta(Janta janta){_janta = janta;}
        Janta GetJanta(){return _janta;}
        Roata(Anvelopa, Janta);
        bool IsFlat();
        void SchimbaRoata(Anvelopa, Janta);
        void UmflaRoata(double);
        TipAnvelopa GetTipAnvelopa();
        virtual ~Roata();
    protected:
    private:
        Anvelopa _anvelopa;
        Janta _janta;
};

#endif // ROATA_H
