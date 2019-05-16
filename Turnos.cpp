#include "Turnos.h"

using namespace std;

Turnos::Turnos() { }

string Turnos::solicitarTurno(const int& prioridad) {
  string ficha;

  switch (prioridad) {
    case 1:
      ficha = "A" + to_string(colaPrioridad1.tamano() + 1);
      colaPrioridad1.push(ficha);
      return ficha;
      break;

    case 2:
      ficha = "B" + to_string(colaPrioridad2.tamano() + 1);
      colaPrioridad1.push(ficha);
      return ficha;
      break;

    case 3:
      ficha = "C" + to_string(colaPrioridad3.tamano() + 1);
      colaPrioridad1.push(ficha);
      return ficha;
      break;

    case 4:
      ficha = "D" + to_string(colaPrioridad4.tamano() + 1);
      colaPrioridad1.push(ficha);
      return ficha;
      break;

    default:
      return "Ficha invalida";
      break;
  }
}

string Turnos::avanzarTurno() {
  if (!colaPrioridad1.estaVacia())
    return colaPrioridad1.pop();
  else if (!colaPrioridad2.estaVacia())
    return colaPrioridad2.pop();
  else if (!colaPrioridad3.estaVacia())
    return colaPrioridad3.pop();
  else if (!colaPrioridad4.estaVacia())
    return colaPrioridad4.pop();
  else
    return "No hay nadie esperando turno";
}
