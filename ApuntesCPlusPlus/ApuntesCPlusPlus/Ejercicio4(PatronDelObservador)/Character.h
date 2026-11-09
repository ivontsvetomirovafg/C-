#pragma once
#include <iostream>
#include <functional>
#include <vector>

class Character
{
public:
    void RecibirDaño()
    {
        std::cout << "Player recibe daño" << std::endl;
        for (int i = 0; i < listenerDaño.size(); i++)
        {
            listenerDaño[i]();
        }
    }
    void Atacar()
    {
        std::cout << "Player ataca" << std::endl;
        for (int i = 0; i < listenerAtaque.size(); i++)
        {
            listenerAtaque[i]();
        }
    }
    void Moverse()
    {
        std::cout << "Player se mueve" << std::endl;
        for (int i = 0; i < listenerMovimiento.size(); i++)
        {
            listenerMovimiento[i]();
        }
    }
    
    std::vector<std::function<void()>> listenerDaño;
    std::vector<std::function<void()>> listenerAtaque;
    std::vector<std::function<void()>> listenerMovimiento;
    
    void AddListenerDaño(std::function<void()> listener)
    {
        listenerDaño.push_back(listener);
    }
    void AddListenerAtaque(std::function<void()> listener)
    {
        listenerAtaque.push_back(listener);
    }
    void AddListenerMovimiento(std::function<void()> listener)
    {
        listenerMovimiento.push_back(listener);
    }
};
