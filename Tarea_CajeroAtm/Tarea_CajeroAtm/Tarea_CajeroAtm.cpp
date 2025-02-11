#include <iostream>
#include "IngresarDinero.h"
#include "RetirarDinero.h"

using namespace std;

void IngresarDinero();
void RetirarDinero();

int main() {
    string nombre;
    int saldo = 0;
    int* ptrSaldo = &saldo;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    int opcion;
    do {
        cout << "\nBienvenido, " << nombre << "!\n";
        cout << "1. Ingresar dinero\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            IngresarDinero(ptrSaldo);
            break;
        case 2:
            RetirarDinero(ptrSaldo);
            break;
        case 3:
            cout << "Gracias por usar el cajero, " << nombre << "!\n";
            break;
        default:
            cout << "Opción no válida.\n";
        }
    } while (opcion != 3);

    return 0;
}
