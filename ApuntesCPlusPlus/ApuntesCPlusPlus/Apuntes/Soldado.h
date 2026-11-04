#pragma once
#include "Unidad.h"

//APUNTES 
class Soldado : public Unidad
{
public:
    static int numeroDeTropas; //la comparten todos los obj
    enum SoldadoType { Vehiculos, Artilleria, Aereos };
    Soldado(SoldadoType tipo, int _cantidad)
    {
        switch (tipo)
        {
        case 0:
            cantidad = _cantidad;
            life = 10;
            damage = 0;
            velocidad = 0;
        case 1:
            cantidad = _cantidad;
            life = 10;
            damage = 0;
            velocidad = 0;
        case 2:
            cantidad = _cantidad;
            life = 10;
            damage = 0;
            velocidad = 0;
        default:
            velocidad = 0;
            damage = 0;
            life = 0;
            break;
        }
        numeroDeTropas+=1;
    }
};
