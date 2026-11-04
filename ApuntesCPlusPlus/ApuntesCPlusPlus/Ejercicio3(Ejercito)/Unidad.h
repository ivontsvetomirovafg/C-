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
    
    virtual void Atacar(Unidad* objetivo) = 0;
};

