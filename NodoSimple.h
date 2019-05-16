#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H

#include <string>

class NodoSimple
{
    typedef NodoSimple * Posicion;
    private:
        std::string turno;
        Posicion siguiente;

    public:
        NodoSimple();
        NodoSimple(std::string aux);
        virtual ~NodoSimple();

        std::string getTurno();
        Posicion getSiguiente();

        void setTurno(std::string aux);
        void setSiguiente(Posicion);

};
#endif // NODOSIMPLE_H
