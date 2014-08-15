#include "PersonajeTablero.h"
#include <iostream>

using namespace std;

PersonajeTablero::PersonajeTablero(int posx, int posy, int hp,
            int ataque, int jugador)
{
    this->ataque = ataque;
    this->posx = posy;
    this->posy = posy;
    this->hp = hp;
    this->jugador = jugador;
    this->sig = NULL;
}

void PersonajeTablero::poderEspecial(ListaPersonajes*lista, int jugador)[

]

PersonajeTablero::~PersonajeTablero()
{
    //dtor
}
