#include "Soldado.h"
#include <iostream>
#include <vector>
using namespace std;

//APUNTES 
int Soldado::numeroDeTropas = 0;

int main()
{
    using tropa = std::unique_ptr<Soldado>;
    //poner las tropas aquí con todo
    
    //UnidadArtilleria->AñadirTropa();
    
    std::vector<tropa*> ejercito;
    //ejercito.push_back(UnidadArtilleria);
    //...
}