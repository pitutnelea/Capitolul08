#ifndef MASINA_H
#define MASINA_H
#include "Roata.h"

class Masina
{
    public:
        Masina();
        Masina(Roata, Roata, Roata, Roata);
        void AfiseazaStareRoti(string);
        void UmflaRoti(double);
        void UmflaRoata(int, double);
        void SchimbaRoti(Roata, Roata, Roata, Roata);
        void SchimbaRoata(int, Roata);
        void AfiseazaTipCauciucuri(string);
        void SetRoata(Roata roti[4]){_roti[4] = roti[4];}
        Roata GetRoata(){return _roti[4];}

        virtual ~Masina();
    protected:
    private:
        Roata _roti[4];
        short VerificaRoti();
};

#endif // MASINA_H
