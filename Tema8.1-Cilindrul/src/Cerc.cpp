#include "Cerc.h"
#include <cmath>
#include "Cilindru.h"
#include <iostream>
#define M_PI 3.14

Cerc::Cerc()
{
    //ctor
}

Cerc::Cerc(double raza)
{
    _raza = raza;
}

Cerc::~Cerc()
{
    //dtor
}

double Cerc::Arie()
{
    return (M_PI*pow(_raza,2));
}
