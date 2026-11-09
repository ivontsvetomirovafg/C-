#include "SimuladorEjercito.h"
#include <iostream>
#include <map>

#include "Vehiculos.h"
#include "Aereos.h"
#include "Artilleria.h"

SimuladorEjercito simulador;
/*
int main()
{
    // EJERCITO A
    simulador.ejercitoA.push_back(new Vehiculos(120,55,45, "Tanque"));
    simulador.ejercitoA.push_back(new Vehiculos(145,45,20, "CocheBlindado"));
    simulador.ejercitoA.push_back(new Artilleria(150,60,5, "Cañon"));
    simulador.ejercitoA.push_back(new Artilleria(135,45,15, "Lanzacohete"));
    simulador.ejercitoA.push_back(new Aereos(80,40,50, "Bombardero"));
    simulador.ejercitoA.push_back(new Aereos(50,25,90, "Dron"));
        
    // EJERCITO B
    
    simulador.ejercitoB.push_back(new Vehiculos(135,60,30, "Tanque"));
    simulador.ejercitoB.push_back(new Vehiculos(140,40,15, "CocheBlindado"));
    simulador.ejercitoB.push_back(new Artilleria(160,60,10, "Cañon"));
    simulador.ejercitoB.push_back(new Artilleria(135,30,15, "Lanzacohete"));
    simulador.ejercitoB.push_back(new Aereos(70,35,50, "Bombardero"));
    simulador.ejercitoB.push_back(new Aereos(40,30,100, "Dron"));
    
    while (simulador.ejercitoA.size() > 0 && simulador.ejercitoB.size() > 0)
    {
        simulador.ejercitoA[0]->Atacar(simulador.ejercitoB[0]);
        if (simulador.ejercitoB[0]->life <= 0)
        {
            simulador.ejercitoB.erase(simulador.ejercitoB.begin());
        }

        if (simulador.ejercitoB.size() > 0)
        {
            simulador.ejercitoB[0]->Atacar(simulador.ejercitoA[0]);
            if (simulador.ejercitoA[0]->life <= 0)
            {
                simulador.ejercitoA.erase(simulador.ejercitoA.begin());
            }
        }
    }

    if (simulador.ejercitoA.size() > 0)
    {
        std::cout << "Ha ganado A, con " << simulador.ejercitoA.size() << " supervivientes" << std::endl;
    }
    else
    {
        std::cout << "Ha ganado B, con " << simulador.ejercitoB.size() << " supervivientes" << std::endl;
    }
}    */
