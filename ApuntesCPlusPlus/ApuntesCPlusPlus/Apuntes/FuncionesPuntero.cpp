#include "FuncionesPuntero.h"

#include <functional>

#include "EnemyApuntes.h"

FuncionesPuntero apuntes;

class EjemploUI
{
    public:
    void UpdateUI()
    {
        std::cout << "Actualizo la UI" << std::endl;
    }
};

class EjemploAudioManager
{
    public: 
    void ReproducirSonido()
    {
        std::cout << "ReproducirSonido" << std::endl;
    }
};

class EjemploCharacter
{
    public:
    void SumarPuntosCharacter()
    {
        std::cout << "SumarPuntosCharacter" << std::endl;
    }
};

/*int main()
{
    //apuntes.ExecuteFunction(apuntes.Hello);
    
    //Lambdas --> Metodo anonimo que se puede crear cuando se necesite
    auto SayHello = []()
    {
        std::cout << "Hello World!" << std::endl;
    };
    
    // [] --> Son las variables externas. 
    // () --> Parametros de la funcion.
    // {} --> Codigo que ejecutará
    
    //apuntes.enemy.TakeDamage(10, SayHello);   
    
    EjemploUI ui;
    EjemploAudioManager audioManager;
    EjemploCharacter player;
    
    apuntes.enemy.AddListener([&ui]()
    {
        ui.UpdateUI();
    });
    
    apuntes.enemy.AddListener([&audioManager]()
    {
        audioManager.ReproducirSonido();
    });
    
    apuntes.enemy.AddListener([&player]()
    {
        player.SumarPuntosCharacter();
    });
}*/

void FuncionesPuntero::ExecuteFunction(void(* function)())
{
    function();
}


