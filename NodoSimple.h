#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H

#include "Clientes.h"
class NodoSimple
{
    typedef NodoSimple * Posicion;
    private:
        Clientes cliente;
        Posicion siguiente;

    public:
        NodoSimple();
        NodoSimple(Clientes aux);
        virtual ~NodoSimple();

        Clientes getCliente();
        Posicion getSiguiente();

        void setCliente(Clientes aux);
        void setSiguiente(Posicion);

};
#endif // NODOSIMPLE_H
