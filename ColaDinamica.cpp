#include "ColaDinamica.h"
#include <iostream>

using namespace std;

ColaDinamica::ColaDinamica()
{
    Posicion aux = new NodoSimple();
    inicio = aux;
    fin = aux;
}

void ColaDinamica::push(string t)
{
    Posicion aux = new NodoSimple(t);

    if(aux == nullptr){
        std::cout << "Error, Memoria insuficiente"<<std::endl;
    }
    else{
        aux->setSiguiente(fin->getSiguiente());
        fin->setSiguiente(aux);
        fin = aux;
    }
}

string ColaDinamica::pop() {
    string aux = inicio->getSiguiente()->getTurno();
    eliminar();
    return aux;
}

bool ColaDinamica::estaVacia(){
    if (inicio == fin)
        return true;
    return false;
}

void ColaDinamica::eliminar()
{
    if(estaVacia())
            std::cout << "Error, No hay datos";
    else{
        Posicion aux = inicio->getSiguiente();
        inicio->setSiguiente(aux->getSiguiente());
        delete aux;
    }
}



Posicion ColaDinamica::primerNodo()
{
    return inicio->getSiguiente();
}

Posicion ColaDinamica::ultimoNodo()
{
    return fin;
}

int ColaDinamica::tamano() {
    Posicion aux = inicio->getSiguiente();
    int i = 0;

    while(aux != fin->getSiguiente()) {
        aux = aux->getSiguiente();
        i++;
    }

    return i > 0 ? i + 1 : 0;
}
