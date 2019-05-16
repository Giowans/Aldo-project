#include "NodoSimple.h"

using namespace std;

NodoSimple::NodoSimple()
{
    siguiente = nullptr;
}

NodoSimple::NodoSimple(string t)
{
    turno = t;
    siguiente = nullptr;

}

NodoSimple::~NodoSimple()
{
    //dtor
}

string NodoSimple::getTurno(){
    return turno;
}

NodoSimple* NodoSimple::getSiguiente(){
    return siguiente;
}

void NodoSimple::setTurno(string t){
    turno = t;
}

void NodoSimple::setSiguiente(Posicion sig){
    siguiente = sig;
}
