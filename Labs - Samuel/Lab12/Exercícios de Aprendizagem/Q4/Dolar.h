#pragma once

#include "Real.h"

class Dolar
{
private:
    double valor;

public:
    Dolar();    
    Dolar(const double v);

    operator Real();
};