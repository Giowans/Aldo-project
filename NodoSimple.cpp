#include "NodoSimple.h"

NodoSimple::NodoSimple()
{
    siguiente = nullptr;
}

NodoSimple::NodoSimple(Clientes c)
{
    cliente = c;
    siguiente = nullptr;

}

NodoSimple::~NodoSimple()
{
    //dtor
}

Clientes NodoSimple::getCliente(){
    return cliente;
}

NodoSimple* NodoSimple::getSiguiente(){
    return siguiente;
}

void NodoSimple::setCliente(Clientes aux){
    cliente = aux;
}

void NodoSimple::setSiguiente(Posicion sig){
    siguiente = sig;
}
