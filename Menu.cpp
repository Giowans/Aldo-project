#include "Menu.h"

using namespace std;

void Menu::iniciarMenu() {
  string turnoActual = "00";
  string ultimoTurno = "00";
  int opcion;

  do {
    cout << "* Turno actual:" << turnoActual << "\t\t\tUltimo turno solicitado: " << ultimoTurno << endl << endl
         << "1) Avanzar turno caja" << endl
         << "2) Avanzar turno ejecutivo" << endl
         << "3) Solicitar turno" << endl
         << "4) Salir" << endl << endl
         << "Ingrese una opcion: ";
    
    cin >> opcion;

    cout << endl << endl;

    switch (opcion) {
      case 1:
        turnoActual = turnosCaja.avanzarTurno();
        break;
      
      case 2:
        turnoActual = turnosEjecutivo.avanzarTurno();
        break;

      case 3:
        cout << "-> Su turno es: " << nuevoTurno() << endl << endl;
        cin.get();
        break;
    }
  } while (opcion != 4);
}

string Menu::nuevoTurno() {
  switch (menuCuentahabiente()) {
    case 's':
      switch (menuArea()) {
        case 1:
          return turnosCaja.solicitarTurno(menuOperacion(1));
          break;

        case 2:
          return turnosEjecutivo.solicitarTurno(1);
          break;
      }
      break;
    
    case 'n':
      switch (menuArea()) {
        case 1:
          return turnosCaja.solicitarTurno(4);
          break;

        case 2:
          return turnosEjecutivo.solicitarTurno(menuOperacion(2));
          break;
      }
      break;
  }
}

char Menu::menuCuentahabiente() {
  char opcion;

  do {
    cout << "¿Es cuentahabiente? (s/n): ";
    cin >> opcion;
  } while (opcion != 's' && opcion != 'n');

  return opcion;
}

int Menu::menuArea() {
  int opcion;

  do {
    cout << "* Areas: " << endl
         << "1) Caja" << endl
         << "2) Ejecutivo" << endl << endl
         << "Ingrese area para la que desea turno:";

    cin >> opcion;
  } while (opcion != 1 && opcion != 2);

  return opcion;
}

int Menu::menuOperacion(int area) {
  int opcion;

  if (area == 1) {
    do {
      cout << "* Operacion:" << endl
           << "1) Inversionista" << endl
           << "2) Nomina" << endl
           << "3) Credito o hipoteca" << endl << endl
           << "Ingrese la operacion a realizar: ";

      cin >> opcion;
    } while (opcion != 1 && opcion != 2 && opcion != 3);

    return opcion;
  } else {
    do {
      cout << "* Operacion:" << endl
           << "1) Apertura de cuentas" << endl
           << "2) Creditos" << endl
           << "3) Otro" << endl << endl
           << "Ingrese la operacion a realizar: ";

      cin >> opcion;
    } while (opcion != 1 && opcion != 2 && opcion != 3);

    return opcion + 1;
  }
}
