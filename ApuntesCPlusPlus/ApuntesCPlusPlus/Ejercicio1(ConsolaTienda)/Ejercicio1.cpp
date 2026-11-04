#include "Ejercicio1.h"
#include <iostream>

Ejercicio1 ejercicio;
Ejercicio1 ejemplo;
/*
int main()
{
    std:: cout <<"Buenas esta es mi tienda. Porfavor, elige que comprar. \n" ;
    std:: cout <<"Tienes " << ejercicio.dinero << " cantidad de dinero. \n" ;

   
    ejercicio.nombreProductos.push_back("Leche = ");
    ejercicio.nombreProductos.push_back("Queso = ");
    ejercicio.nombreProductos.push_back("Yogurt = ");
    
    ejercicio.precioProductos.push_back(6);
    ejercicio.precioProductos.push_back(2);
    ejercicio.precioProductos.push_back(2);
    
    ejercicio.MostrarProductos();   
    
    std :: string Nombre;
    std::cin >> Nombre;    
    if (Nombre == "Leche"|| Nombre == "leche")
    {
        if (ejercicio.dinero >= ejercicio.precioProductos[0])
        {
            ejercicio.dinero = ejercicio.dinero - ejercicio.precioProductos[0];
            std:: cout <<"Has comprado leche. \n" ;
        }
        else
        {
            std:: cout <<"No tienes suficiente dinero. \n" ;
        }
    }
    if (Nombre == "Queso"|| Nombre == "queso")
    {
        if (ejercicio.dinero >= ejercicio.precioProductos[1])
        {
            ejercicio.dinero = ejercicio.dinero - ejercicio.precioProductos[1];
            std:: cout <<"Has comprado queso. \n" ;
        }
        else
        {
            ejercicio.dinero = ejercicio.dinero - ejercicio.precioProductos[2];
            std:: cout <<"No tienes suficiente dinero. \n" ;
        }
    }
    if (Nombre == "Yogurt"|| Nombre == "yogurt")
    {
        if (ejercicio.dinero >= ejercicio.precioProductos[2])
        {
            std:: cout <<"Has comprado yogurt. \n" ;
        }
        else
        {
            std:: cout <<"No tienes suficiente dinero. \n" ;
        }
    }
    
    //Hacer una tienda, donde haya un vendedor que te pregunte si quieres comprar o vender.
    //Que tenga un listado de productos (min 3).
    //Que el usuario tenga un listado de productos (min 3) y una cantidad de dinero.
    //Los productos deben de tener nombre, valor de compra y valor de venta.
    //Todo con una interfaz de consola.
}
void Ejercicio1::MostrarProductos()
{
    for (int i = 0; i < ejercicio.nombreProductos.size(); i++)
    {
        std:: cout << ejercicio.nombreProductos[i] << ejercicio.precioProductos[i] << std::endl;
    }
}


///OTRO EJ////
int main()
{
    std:: cout <<"Valor Pepe = "<<ejemplo.pepe<<std::endl;
    std:: cout <<"Valor Puntero Pepe = "<<ejemplo.punteroPepe<<std::endl;
    std::cout<<"Puntero Pepe * Valor = "<<ejemplo.punteroPepe<<std::endl;
    ejemplo.Sumar(ejemplo.pepe, 5, 22);
    std::cout <<"Valor Pepe = "<<ejemplo.pepe<<std::endl;
    
}

void Ejercicio1::Sumar(int &resultado, int num1, int num2)
{
    std:: cout <<"Valor Resultado = "<<resultado<<std::endl;
    resultado = num1+num2;
    ejemplo.pepe = num1 + num2;
}*/