#ifndef LISTAPERSONAJES_H
#define LISTAPERSONAJES_H
#include "PersonajeTablero.h"

class PersonajeTablero;
class ListaPersonajes
{
    public:
        PersonajeTablero* inicio;
        void agregar(PersonajeTablero* nuevo);
        void danoDeArea(int dano, int jugador);
        void debilitadorDeArea(int debilitador, int jugador);
        void curadorDeArea(int curacion, int jugador);
        void imprimir();
        ListaPersonajes();
        virtual ~ListaPersonajes();
    protected:
    private:
};

#endif // LISTAPERSONAJES_H
