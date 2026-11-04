#include "SimuladorEjercito.h"
#include <iostream>
#include <map>

#include "Vehiculos.h"
#include "Aereos.h"
#include "Artilleria.h"
#include "Soldado.h"

SimuladorEjercito simulador;

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
}    


    /* // El Tanque A ataca al Tanque B
     simulador.ejercitoA[0]->Atacar(simulador.ejercitoB[0]);
     std::cout << "Vida tanque B: " << simulador.ejercitoB[0]->life << std::endl;
 
     // El Coche ataca al Tanque B
     simulador.ejercitoA[1]->Atacar(simulador.ejercitoB[0]);
     std::cout << "Vida tanque B: " << simulador.ejercitoB[0]->life << std::endl; */