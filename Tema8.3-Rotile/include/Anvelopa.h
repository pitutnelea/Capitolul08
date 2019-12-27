#ifndef ANVELOPA_H
#define ANVELOPA_H
#include <string>
using namespace std;

enum TipAnvelopa{iarna, vara, universal};

class Anvelopa
{
    public:
        Anvelopa();
        Anvelopa(string, double, TipAnvelopa);
        void SetPresiune(double presiune){_presiune = presiune;}
        double GetPresiune(){return _presiune;}
        void SetTipAnvelopa(TipAnvelopa tipAnvelopa){_tipAnvelopa = tipAnvelopa;}
        TipAnvelopa GetTipAnvelopa(){return _tipAnvelopa;}
        void UmflaAnvelopa(double);
        virtual ~Anvelopa();
    protected:
    private:
        string _brand;
        double _presiune;
        TipAnvelopa _tipAnvelopa;
};

#endif // ANVELOPA_H
