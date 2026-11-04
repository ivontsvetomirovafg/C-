#pragma once
#include <string>
#include <vector>

class Apuntes
{
public: //totalmente accesibles
    int pepe;
    bool boleano;
    char caracter;
    std::string nombre; //textos string tienen su libreria y vienen de la clase std (standard)
    int numeros[4]; //los arrays se les pone los corchetes despues del nombre en lugar de la variable. 
    std::vector<int> numerosList; //List <int> nombreList
    
    
    void Ejemplo(); 
    int CalculoDano(); 
    
private: //solo accesibles desde su propia clase
    float pepa;
    
protected: //solo accesibles desde su propia clase y clases que hereden de esta
    float otro;
};
