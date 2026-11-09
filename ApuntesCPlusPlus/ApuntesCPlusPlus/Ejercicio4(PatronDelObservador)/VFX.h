#pragma once
#include <iostream>

class VFX
{
public:
    void RecibirDaño()
    {
        std::cout << "VFX de golpe" << std::endl;
    }
    void Atacar()
    {
        std::cout << "VFX de ataque" << std::endl;
    }
    void Moverse()
    {
        std::cout << "VFX de movimiento" << std::endl;
    }
};
