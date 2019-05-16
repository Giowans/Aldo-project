#include <iostream>
#include "Clientes.h"

int Clientes::getTurno()
{
    return turno;
}

void Clientes::setPrioridad(int aux)
{
    prioridad = aux;
}

int Clientes::getPrioridad()
{
    return prioridad;
}

void Clientes::setTurno(int aux)
{
    turno = aux;
}

string Clientes::getOperacion()
{
    return operacion;
}

void Clientes::setOperacion(string aux)
{
    operacion = aux;
}