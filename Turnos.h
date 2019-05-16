#ifndef TURNOS_H
#define TURNOS_H

#include <string>

#include "ColaDinamica.h"

class Turnos {
    private:
        ColaDinamica colaPrioridad1;
        ColaDinamica colaPrioridad2;
        ColaDinamica colaPrioridad3;
        ColaDinamica colaPrioridad4;

    public:
        std::string solicitarTurno(int);
        std::string avanzarTurno();
};

#endif // TURNOS_H
