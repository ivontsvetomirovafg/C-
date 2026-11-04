#pragma once
#include "Unidad.h"

class Artilleria : public Unidad
{
public:
    Artilleria(float _life, float _damage, float _velocidad, std::string _nombre)
    {
        nombre = _nombre;
        life = _life;
        velocidad = _velocidad;
        damage = _damage;
    }
    
    void Atacar(Unidad* objetivo)
    {
        objetivo->life = objetivo->life - damage;
    }
    
};
//cañon, lanzacohete