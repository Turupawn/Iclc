#include "ListaPersonajes.h"
#include <iostream>
#include <fstream>

using namespace std;

ListaPersonajes::ListaPersonajes()
{
    inicio=NULL;
}

void ListaPersonajes::agregar(PersonajeTablero* nuevo){
    if(inicio == NULL){
        inicio = nuevo;
    }else{
        PersonajeTablero *temp = inicio;
        while(temp->sig!= NULL){
            temp = temp -> sig;
        }
        temp -> sig = nuevo;
    }
}

void ListaPersonajes::danoDeArea(int dano, int jugador){
    if(inicio->jugador == jugador)
        inicio->hp -= dano;
    for(PersonajeTablero* temp = inicio; temp->sig != NULL; temp=temp->sig){
        if(temp->sig->jugador == jugador){
            temp ->sig -> hp -= dano;
        }
    }
}

void ListaPersonajes::debilitadorDeArea(int debilitador, int jugador){
    if(inicio->jugador == jugador)
        inicio->ataque -= debilitador;
    for(PersonajeTablero* temp = inicio; temp->sig != NULL; temp=temp->sig){
        if(temp->sig->jugador == jugador){
            temp ->sig -> ataque -= debilitador;
        }
    }
}

void ListaPersonajes::curadorDeArea(int curacion, int jugador){
    if(inicio->jugador == jugador)
        inicio->hp += curacion;
    for(PersonajeTablero* temp = inicio; temp->sig != NULL; temp=temp->sig){
        if(temp->sig->jugador == jugador){
            temp ->sig -> hp += curacion;
        }
    }
}

void ListaPersonajes::imprimir(){
    for(PersonajeTablero* temp = inicio; temp!= NULL; temp=temp->sig){
        cout<<"Jugador "<<temp->jugador<<endl;
        cout<<"hp: "<<temp->hp<<endl;
        cout<<"ataque: "<<temp->ataque<<endl<<endl;
    }
}

ListaPersonajes::~ListaPersonajes()
{
    //dtor
}
