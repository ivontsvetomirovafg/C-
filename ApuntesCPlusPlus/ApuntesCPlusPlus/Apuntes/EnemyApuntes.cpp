#include "EnemyApuntes.h"

#include "EnemyApuntes.h"

#include <iostream>

void EnemyApuntes::AddListener(std::function<void()> listener)
{
    listeners.push_back(listener);
}

void EnemyApuntes::TakeDamage(int damage, std::function<void()> callback)
{
    std::cout<<"El enemigo ha recibido" << damage << "de daño\n";
    
    for (int i = 0; i < listeners.size(); i++)
    {
        listeners[i]();
    }
}
