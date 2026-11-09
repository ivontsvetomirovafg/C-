#pragma once
#include <iostream>

class AudioManager
{
public:
    void RecibirDaño()
    {
        std::cout << "Sonido de golpe" << std::endl;
    }
    void Atacar()
    {
        std::cout << "Sonido de atacar" << std::endl;
    }
    void Moverse()
    {
        std::cout << "Sonido de pasos" << std::endl;
    }
};
