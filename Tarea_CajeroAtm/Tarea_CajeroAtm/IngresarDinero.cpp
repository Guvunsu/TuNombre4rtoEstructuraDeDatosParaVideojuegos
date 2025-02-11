#include "IngresarDinero.h"
using namespace std;

void IngresarDinero(int* saldo) {
	int billete;
	cout << "PUEDES INGRESAR CUANTO DINERO QUE QUIERAS, SOLO VALIDO BILLETES DE $20, 50, 100, 200, 500, Y 1000 \n";
	cout << "puedes ingresar 0 (cero)para terminar \n";

	while (true) {
		cout << "Puedes ingresar los billetes \n ";
		cin >> billete;
		if (billete == 0) {
			break;
		}
		if (billete == 20 || billete == 50 || billete == 100 || billete == 200 || billete == 500 || billete == 1000) {
			*saldo += billete;
			cout << "tu total de dinero es " << *saldo << "¿ingresaras mas ? o quieres que te pique carnal :V \n";
		}
		else {
			cout << "el billete que ingresaste es pirata como la vez carnal >:V, intentelo de nuevo campeon(a) \n";
		}
	}
}