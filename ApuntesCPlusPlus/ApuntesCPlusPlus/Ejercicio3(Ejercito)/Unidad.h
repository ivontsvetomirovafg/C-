#pragma once
#include <string>

class Unidad
{
public:
    float life;
    int velocidad;
    float damage;
    std::string nombre;
    int cantidad;
    
    //posicion, int cantidad, arma/weapon, blindaje, 

    virtual void Atacar(Unidad* objetivo) = 0;
};
// enum SoldadoType { Vehiculos, Artilleria, Aereos }
//Soldado(SoldadoType tipo)
 //switch (tipo)
