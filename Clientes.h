#ifndef Clientes_H
#define Clientes_H

#include <iostream>
using namespace std;
class Clientes
{
    private:
        int turno, prioridad;
        string operacion;
    public:
        int getTurno();
        void setTurno(int aux);

        int getPrioridad();
        void setPrioridad(int aux);

        string getOperacion();
        void setOperacion(string aux);
};

#endif // ColaDinamica_H
