#pragma once
#include <iostream>
#include <ostream>

#include "EnemyApuntes.h"

class FuncionesPuntero
{
public:
    EnemyApuntes enemy;
    void ExecuteFunction(void (*function)()); 
};
