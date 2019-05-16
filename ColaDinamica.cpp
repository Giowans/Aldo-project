#include "ColaDinamica.h"
#include <iostream>

using namespace std;
ColaDinamica::ColaDinamica()
{
    Posicion aux = new NodoSimple();
    inicio = aux;
    fin = aux;
}

ColaDinamica::~ColaDinamica()
{
    //dtor
}

void ColaDinamica::insertar(Clientes c)
{
    Posicion aux = new NodoSimple(c);

    if(aux == nullptr){
        std::cout << "Error, Memoria insuficiente"<<std::endl;
    }
    else{
        aux->setSiguiente(fin->getSiguiente());
        fin->setSiguiente(aux);
        fin = aux;
    }
}

void ColaDinamica::mostrar()
{
    int contador=1;
    Posicion aux = inicio->getSiguiente();
    while(aux != fin->getSiguiente())
    {
        cout<<"CLIENTE:"<<endl
            <<"--Turno de llegada: "<<aux->getCliente().getTurno()<<endl
            <<"--Operacion: "<<aux->getCliente().getOperacion()<<endl
            <<"--Turno segun prioridad: "<<contador<<endl
            <<"-..---..---..---..---..---..---..---..---..---..---";
        contador++;
        aux = aux->getSiguiente();
    }
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

