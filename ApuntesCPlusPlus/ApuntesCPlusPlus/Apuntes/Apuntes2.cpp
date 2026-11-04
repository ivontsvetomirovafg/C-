#include "Apuntes2.h"
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    //MAP (lo mismo que un dictionary en c#)
    //Key y un valor
    map<string,int> ejemplo; //no se pueden repetir las keys
    ejemplo.insert(pair<std::string,int>("Ejercito",1));
    
    cout<<"Pokemons: "<<ejemplo["Pokemons"] <<endl;
    
    map<std::string,string> espanol;
    map <string,string> english;    
    
    espanol.insert(pair<std::string,string>("Dialogo1", "Hola mundo"));
    english.insert(pair<std::string,string>("Dialogo1", "Hello world"));
    
    //SET --> Una lista donde no se puede repetir el valor
    
    set<string> habilidades; //Estan ordenados pero no podemos repetir parametros
    habilidades.insert("BolaDeFuego");
    habilidades.insert("Curacion");
    habilidades.insert("BolaDeFuego");
    
    cout << habilidades.size();
    
}