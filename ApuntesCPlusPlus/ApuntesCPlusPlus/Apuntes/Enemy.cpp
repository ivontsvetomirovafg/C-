#include "Enemy.h"

int pepa; //variables globales, que se destruyen de la memoria ram cuando se destruye el objeto. 

/*int main()
{
    Enemy* prueba = new Enemy();
    
    delete prueba;
    prueba = nullptr;
}*/

void Enemy::Attack()
{
    std::cout << "Ataque base\n";
    
    /*int antonio = 5; //variables locales, que se destruyen de la ram cuando termina el metodo. 
    
    int * antonio2 = new int(4);
    // * = Punteros en la direccion de una variable o en su memoria ram
    //variables dinamicas, que gestionamos nosotros cuando se destruyen
    Enemy* enemy = new Enemy();
    int* numeros = new int[5];
    
    delete enemy; //elimina la variable de la memoria ram.
    enemy = nullptr; //para que no apunte a ninguna dirección
    
    delete[] numeros;
    numeros = nullptr;
    
    //MEMORY LEAK --> Es que se nos llena la memoria ram
    
    Enemy* juan = new Enemy();
    
    //si despues no eliminamos la variable juan, seguirá en la memoria ram
    //Acordarse siempre de eliminar las variables con delete
    
    //Puntero colgante (dangling pointer) --> 
    Enemy* ferran = new Enemy();
    delete ferran;
    //si no le indicamos al puntero que es nllptr, sigue reservando ese espacio de memoria
    
    //DOBLE DELETE (doble liberacion)
    //delete ferran; //ERROR ROJO, de los que detienen la ejecución
    ferran = nullptr;
    delete ferran; //Si el puntero ya no apunta a ningun lado, no sabe que eliminar
    
    //PERDER REFERENCIA PUNTERO
    Enemy* jose = new Enemy(); //si no lo eliminamos, allí se quedará hasta que termine el programa
    
    // AUTOGESTIÓN DE VARIABLES
    //Crear puntero unico
    std: std::unique_ptr<Enemy> enemigo = std::make_unique<Enemy>(); 
    //se comportará como una variable local
    
    //auto es igual que var en c#
    auto enemigo2 = std::move(enemigo);
    //Con move puedes mover un puntero de una variable a otra sin perderlo
    
    //Punteros compartidos
    std::shared_ptr<Enemy> enemy1 = std::make_shared<Enemy>();
    auto enemy2 = enemy1;
    //mientras exista 1 de los que comparten la info en la ram, seguirá existiendo 
    
    //puntos observadores 
    std:: weak_ptr<Enemy> enemy3 = enemy1; 
    
    //Tipo:          --> Cuando se destruye la variable? 
    
    //unique_ptr:    Cuando termina el metodo en el que se crea 
    
    //shared_ptr:    Cuando todas las variables que lo comparten son destruidas
    
    //weak_ptr:      No controla la destrucción */
}



    
