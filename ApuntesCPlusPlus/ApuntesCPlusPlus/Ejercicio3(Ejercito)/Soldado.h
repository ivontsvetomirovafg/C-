#pragma once
#include "Unidad.h"

//APUNTES 
class Soldado : public Unidad
{
public:
    static int numeroDeTropas; //la comparten todos los obj
    enum SoldadoType { SoldadoRaso, Fusilero, Sniper };
    Soldado(SoldadoType tipo, int _cantidad)
    {
        switch (tipo)
        {
        case SoldadoRaso:
            life = 10;
            //blindaje = 0;
            //arma = new Weapon(Weapon::Metralleta); --> Haria una clase weapon con tipos de armas
            velocidad = 1;
            //posicion = 0;
            break; 
        case Fusilero:
            life = 20;
            //blindaje = 1;
            //arma = new Weapon(Weapon::RifleAsalto);
            velocidad = 2;
            //posicion = 0;
            break;
        case Sniper:
            life = 10;
            //blindaje = 0;
            //arma = new Weapon(Weapon::Sniper);
            velocidad = 1;
            //posicion = 0;
            break;
        }

        numeroDeTropas += 1;
    }
};
