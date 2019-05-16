#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

#include "Turnos.h"

class Menu {
  private:
    Turnos turnosCaja;
    Turnos turnosEjecutivo;

    std::string nuevoTurno();

    char menuCuentahabiente();
    int menuArea();
    int menuOperacion(int);

  public:
    void iniciarMenu();
};

#endif // MENU_H
