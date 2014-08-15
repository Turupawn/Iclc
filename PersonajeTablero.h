#ifndef PERSONAJETABLERO_H
#define PERSONAJETABLERO_H
#include "ListaPersonajes.h"

class ListaPersonajes;
class PersonajeTablero
{
    public:
        int posx;
        int posy;
        int hp;
        int ataque;
        int jugador;
        PersonajeTablero* sig;

        PersonajeTablero(int posx, int posy, int hp,
            int ataque, int jugador);
         virtual void poderEspecial(ListaPersonajes*lista, int jugador);

    protected:
    private:
};

#endif // PERSONAJETABLERO_H
