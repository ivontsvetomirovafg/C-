#pragma once
#include <string>
#include <vector>

class Ejercicio1
{
public: 
    /*std::vector<std::string> nombreProductos;
    std::vector<int> precioProductos;
    void MostrarProductos();
    int dinero = 5; */
    
    int pepe = 5;
    int* punteroPepe = &pepe;
    
    const int pepita = 5;
    
    //Que hace el operador * en punteros?:
    //Devuelve el valor de un puntero y tambien sirve para declararlos.
    
    //Que hace el operador & en punteros?:
    //Indica la dirección de la memoria ram dónde está la variable.
    
    void Sumar (int &resultado, int num1, int num2);
};
