#include "Ejercicio2.h"
#include <iostream> // para cout y cin
#include "Combat.h"

Ejercicio2 ejercicio2;
Combat combat;

// Escribe nombre, vida y mana de un personaje
void mostrarEstado(Characters character)
{
    std::cout << character.name << " | Vida: " << character.life
    << " | Mana: " << character.mana << std::endl;
}

/*int main()
{
    combat.pociones = 2;
    combat.defendiendo = false;
    
    ejercicio2.player = {"Player", 100, 100, 50, 50, 15, 20, true};
    ejercicio2.enemies = {{"Enemy1", 100, 100, 30, 30, 10, 18, false},
    {"Enemy2", 100, 100, 25, 25, 15, 22, false}, 
    {"Enemy3", 100, 100, 40, 40, 13, 18, false}};
    
    
    std::vector<Characters> todos; //junto a todos en una lista
    todos.push_back(ejercicio2.player);
    todos.push_back(ejercicio2.enemies[0]);
    todos.push_back(ejercicio2.enemies[1]);
    todos.push_back(ejercicio2.enemies[2]);
    
    // MI TURNO 
    while (todos[0].life > 0 && (todos[1].life > 0 || todos[2].life > 0 || todos[3].life > 0))
    {
        std::cout << "--- Tu turno ---" << std::endl;
        std::cout << "Que quieres hacer?" << std::endl;
        std::cout << "1. Ataque normal" << std::endl;
        std::cout << "2. Bola de fuego (20 mana)" << std::endl;
        std::cout << "3. Curar (15 mana)" << std::endl;
        std::cout << "4. Usar objeto" << std::endl;
        std::cout << "5. Defender" << std::endl;
        
        int opcion;
        std::cin >> opcion;

        if (opcion == 1)
        {
            std::cout << "A que enemigo atacas?" << std::endl;
            for (int i = 1; i < 4; i++)
            {
                if (todos[i].life > 0) //pilla a todos los enemigos con vida
                {
                    std::cout << i << " - " << todos[i].name << " (vida " << todos[i].life << ")" << std::endl;
                }
            }
    
            int elegido = 0;
            while (elegido < 1 || elegido > 3 || todos[elegido].life <= 0)  // mientras el numero sea malo
            {
                std::cin >> elegido; // para escribir un número y que se guarde en el int
            }

            todos[elegido].life = todos[elegido].life - todos[0].damage;
            if (todos[elegido].life < 0) //para que la vida del enemigo no baje de 0.
            {
                todos[elegido].life = 0;
            }

            std::cout << "Has atacado a " << todos[elegido].name << std::endl;
            mostrarEstado(todos[elegido]);
        }
        
        else if (opcion == 2)
        {
            if (todos[0].mana >= 20)
            {
                std::cout << "A que enemigo lanzas la bola de fuego?" << std::endl;
                for (int i = 1; i < 4; i++)
                {
                    if (todos[i].life > 0)
                    {
                        std::cout << i << " - " << todos[i].name << " (vida " << todos[i].life << ")" << std::endl;
                    }
                }

                int elegido = 0;
                while (elegido < 1 || elegido > 3 || todos[elegido].life <= 0)
                {
                    std::cin >> elegido;
                }

                todos[0].mana = todos[0].mana - 20;
                todos[elegido].life = todos[elegido].life - 35;
                if (todos[elegido].life < 0)
                {
                    todos[elegido].life = 0;
                }

                std::cout << "Bola de fuego a " << todos[elegido].name << ": 35 de dano" << std::endl;
                mostrarEstado(todos[elegido]);
            }
            else
            {
                std::cout << "No tienes mana suficiente" << std::endl;
            }
        }
        else if (opcion == 3)
        {
            if (todos[0].mana >= 15)
            {
                todos[0].mana = todos[0].mana - 15;
                todos[0].life = todos[0].life + 30;
                if (todos[0].life > todos[0].maxLife)
                {
                    todos[0].life = todos[0].maxLife;
                }

                std::cout << "Te curas 30 de vida" << std::endl;
                mostrarEstado(todos[0]);
            }
            else
            {
                std::cout << "No tienes mana suficiente" << std::endl;
            }
        }
    
    // TURNO ENEMIGOS
        
        for (int i = 1; i < 4; i++)
        {
            if (todos[i].life > 0) //si el enemy está vivo que lo haga
            {
                std::cout << "--- Turno de " << todos[i].name << " ---" << std::endl;
                todos[0].life = todos[0].life - todos[i].damage; 
                // 0 es la pos de la lista del player, así que le quita vida
            
                if (todos[0].life < 0)
                {
                    todos[0].life = 0;
                }
                std::cout << todos[i].name << " te ataca" << std::endl;
                mostrarEstado(todos[0]);
            }
        }  
    }
    if (todos[0].life > 0)
    {
        std::cout << "GG HAS GANADO!" << std::endl;
    }
    else
    {
        std::cout << "HAS PERDIDO CAUSA :(" << std::endl;
    }
}*/
