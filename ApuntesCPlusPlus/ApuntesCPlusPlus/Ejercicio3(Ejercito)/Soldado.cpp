#include "Soldado.h"
#include <iostream>
#include <vector>
using namespace std;

//APUNTES 
int Soldado::numeroDeTropas = 0;

/*int main()
{
    //string nombre;
    //nombre="Quiero poner "<<'"'<<"comillas"<<'"';

    //auto tropa = new Soldado(Soldado::SoldadoRaso);
    using tropa = std::unique_ptr<Soldado>;
    tropa UnidadArtilleria = std::make_unique<Soldado>(Soldado::Artilleria, 20);
    tropa UnidadSniper = std::make_unique<Soldado>(Soldado::Sniper, 20);
    tropa UnidadElite = std::make_unique<Soldado>(Soldado::Elite, 50);
    tropa UnidadDeTierra = std::make_unique<Soldado>(Soldado::SoldadoRaso, 150);
    tropa UnidadDeInfiltracion = std::make_unique<Soldado>(Soldado::Elite, 4);
}

using tropa = std::unique_ptr<Soldado>; crea un apodo: escribir tropa equivale a std::unique_ptr<Soldado>.
std::unique_ptr es un puntero “inteligente”: se borra solo cuando ya no hace falta, así que no necesitas delete.
std::make_unique<Soldado>(...) es la forma moderna de hacer new Soldado(...). Lo que va entre paréntesis son los datos del constructor: el tipo y la cantidad.
#include <memory> es el que trae unique_ptr y make_unique.

*/