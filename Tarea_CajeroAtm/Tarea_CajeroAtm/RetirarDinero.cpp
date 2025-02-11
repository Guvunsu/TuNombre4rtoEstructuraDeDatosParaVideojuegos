#include "RetirarDinero.h"

using namespace std;

void RetirarDinero(int* saldo) {
	cout << "Tienes $" << *saldo << "\n en tu cuenta de ahorro \n ";
	cout << "¿Cuanto le quieres quitar al banco muchachon?\n";

	int cantidad;
	cin >> cantidad;

		if (cantidad > *saldo) {
			cout << "como que te falta algo, ¿ no, carnal?\n";
		}

	*saldo -= cantidad;
	// desde aqui recibi ayuda 
	int billetes[] = { 20,50,100,200,500,1000 };
	int* ptrBilletes = billetes;
	cout << "tomele, y vayase, no te quiero volver a ver por aqui O-x ¡hmmmp! \n" << "$:" << *billetes << "\n";

	for (int i = 0; i < 6; i++) { // es 6 porque es la cantidad de mis billetes disponibles de mi array
		int numBilletes = cantidad / *(ptrBilletes + i);
		// mi*ptrbilletes es para almacenar la dirección del array de billetes y verifica y suma la cantidad que tiene el usuario
	//esto verificara cuanto tengo de dinero almacenado en el banco y verificara de mi array cauntos billetes me debe despachar si fuera
	//hipoteticamente sacara todo la cantidad de saldo o lo que vaya a sacar y dame la menor cantidad de billetes
		if (numBilletes > 0) {
			// se me muestra cuantos billetes me van a dar 
			cout << numBilletes << " billetes de $" << *(ptrBilletes + i) << "\n";
			cantidad %= *(ptrBilletes + i);
		}
	}
	cout << "El nuevo saldo es $" << *saldo << "\n";
	// hasta aqui deje de recibir ayuda
}