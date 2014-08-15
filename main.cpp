#include <iostream>
#include "ListaPersonajes.h"
#include "PersonajeTablero.h"

using namespace std;

int main()
{
    ListaPersonajes l;
    l.agregar(new PersonajeTablero(10,10,20,5,1));
    l.agregar(new PersonajeTablero(10,15,20,10,1));
    l.agregar(new PersonajeTablero(10,20,20,10,2));
    l.imprimir();
    l.danoDeArea(5,1);
    l.imprimir();
    l.curadorDeArea(5,1);
    l.imprimir();
    l.debilitadorDeArea(2,2);
    l.imprimir();

    return 0;
}
