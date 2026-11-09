#pragma once
#include <functional>
#include <vector>

class EnemyApuntes
{
public:
    std::vector<std::function<void()>> listeners;
    void AddListener(std::function<void()> listener);
    
    void TakeDamage(int damage, std::function<void()> callback); //el callback devuelve un parametro

};
