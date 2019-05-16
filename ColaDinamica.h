#ifndef ColaDinamica_H
#define ColaDinamica_H

#include "iostream"
#include "NodoSimple.h"

typedef NodoSimple * Posicion;

class ColaDinamica
{
    NodoSimple *inicio, *fin;

    public:
        ColaDinamica();
        virtual ~ColaDinamica();
        void insertar(Clientes c);
        void mostrar();
        bool estaVacia();
        void eliminar();
        Posicion primerNodo();
        Posicion ultimoNodo();
};

#endif // ColaDinamica_H
