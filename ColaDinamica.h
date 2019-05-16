#ifndef COLADINAMICA_H
#define COLADINAMICA_H

#include <string>

#include "iostream"
#include "NodoSimple.h"

typedef NodoSimple * Posicion;

class ColaDinamica
{
    private:
        NodoSimple *inicio, *fin;

    public:
        ColaDinamica();
        ~ColaDinamica();
        void push(std::string t);
        std::string pop();
        bool estaVacia();
        void eliminar();
        Posicion primerNodo();
        Posicion ultimoNodo();
        int tamano();
};

#endif // COLADINAMICA_H
