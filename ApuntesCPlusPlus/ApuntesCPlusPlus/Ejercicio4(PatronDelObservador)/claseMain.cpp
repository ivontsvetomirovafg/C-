#include "Character.h"

#include "AudioManager.h"

#include "VFX.h"

Character player;

int main()
{
    AudioManager audioManager;
    VFX vfx;
    
    //AUDIO
    player.AddListenerDaño([&audioManager]()
    {
        audioManager.RecibirDaño();
    });
    player.AddListenerAtaque([&audioManager]()
    {
        audioManager.Atacar();
    });
    player.AddListenerMovimiento([&audioManager]()
    {
        audioManager.Moverse();
    });
    
    //VFX 
    player.AddListenerDaño([&vfx]()
    {
        vfx.RecibirDaño();
    });
    player.AddListenerAtaque([&vfx]()
    {
        vfx.Atacar();
    });
    player.AddListenerMovimiento([&vfx]()
    {
        vfx.Moverse();
    });    
    
    player.RecibirDaño();
    player.Atacar();
    player.Moverse();
}
