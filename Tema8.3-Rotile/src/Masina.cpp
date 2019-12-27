#include "Masina.h"
#include <iostream>
using namespace std;

Masina::Masina()
{
    //ctor
}

Masina::Masina(Roata par1,Roata par2, Roata par3, Roata par4):_roti[0]{par1}, _roti[1]{par2}, _roti[2]{par3}, _roti[3]{par4}
//Masina::Masina(Roata roti[par1], Roata roti[par2], Roata roti[par3], Roata roti[par4]):
//_roti[0]{par1}, _roti[1]{par2}, _roti[2]{par3}, _roti[3]{par4}
//(_roti[0]){par1}, (_roti[1]){par2}, (_roti[2]){par3}, (_roti[3]){par4}
//SetRoata{par1}, SetRoata{par2}, SetRoata{par3}, SetRoata{par4}
{
    for (int i = 0; i < _roti[4]; i++)
    {
        _roti[i] = parametru;
    }
}

Masina::~Masina()
{
    //dtor
}

short Masina::VerificaRoti()
{
    for (int i = 0; i < _roti[4]; i++)
    {
        _roti[i].IsFlat();
        if (_roti[i].IsFlat() == true) {return i};
    }
    if ((_roti[0].IsFlat()) || (_roti[1].IsFlat()) || (_roti[2].IsFlat()) || (_roti[3].IsFlat())==false) {return -1};
}

void Masina::AfiseazaStareRoti(string numeMasina)
{
    cout << numeMasina;
    short var = numeMasina.VerificaRoti();
    (var < 0 ) ? cout <<" are toate rotile in regula " : cout<<" are pana la roata "<< (var+1);
}

void Masina::UmflaRoti(double presiune)
{
    for (int i = 0; i < _roti[4]; i++ )
    {
        _roti[i].UmflaRoata() = presiune;
    }
}

void Masina::UmflaRoata(int indece, double presiune)
{
    _roti[indece].UmflaRoata(presiune);
}

void Masina::SchimbaRoti(Roata par1, Roata par2, Roata par3, Roata par4)
{
    _roti[0] = par1;
    _roti[1] = par2;
    _roti[2] = par3;
    _roti[3] = par4;

}

void Masina::SchimbaRoata(int indece, Roata parametru)
{
    _roti[indece] = parametru;
}

void Masina::AfiseazaTipCauciucuri(string numeMasina)
{
    cout<<numeMasina<<" are cauciucuri";
    for (int i=0; i < 4; i++)
    {
        _roti[i].GetTipAnvelopa();
    }
    if (_roti[i].GetTipAnvelopa()==vara)
    {cout <<" de vara";
        else if (_roti[i].GetAnvelopa()==iarna)
        {cout<<" de iarna";
            else if (_roti[i].GetAnvelopa()==universal)
                {cout<<" all season";
                    else {cout<<"mixte";}
                }
        }
    }
    cout <<" " << endl;
}