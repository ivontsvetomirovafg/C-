#pragma once
#include <iostream>

class Enemy
{
public:
    int pepe;
    
    virtual void Attack() =0; //indica que este metodo será implementado por distintas clases 
    
    /*Enemy() //Constructor
    {
        //Aquí puedo poner todo lo que quiero que 
        //haga el codigo cuando pongo un new Enemy(); 
        
        std::cout << "Me creo";
    }
    ~Enemy() //Destructor
    {
        //Aquí se ejecutará cuando deje de existir
        std::cout << "Me destruido";
    }*/
};
