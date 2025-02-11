// TuNombre4rtoEstrucuturaDeDatosClases.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// INTENTARE METER TODO UN CURSO DE SEMESTRE EN ESTE SCRIPT, A VER QUE TAL....

#include <iostream>


#include <cstdlib>  
// rand(), aquel que genera una semilla de numeros aleatoriosdel 0 al 32k y pico y siempre que cuando se ejecuta la 1era vez sera tal numero fijo siempre
#include <ctime>    
// srand(time(0)) este cambia la semilla y sean siempre en cada ejecucion un numero diferente
using std::cout;
using std::cin;

void IngresarDinero();
void RetirarDinero();

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
			cin >> "el billete que ingresaste es pirata como la vez carnal >:V, intentelo de nuevo campeon(a) \n";
		}
	}
}

void RetirarDinero(int* saldo) {
	cout << "Tienes $" << *saldo << "\n en tu cuenta de ahorro \n ";
	cout << "¿Cuanto le quieres quitar al banco muchachon?\n";

	int cantidad;
	cin >> *cantidad >>

		if (cantidad > *saldo) {
			cout << "como que te falta algo, ¿ no, carnal?\n";
		}

	*saldo -= cantidad;
	// desde aqui recibi ayuda 
	int billetes[] = { 20,50,100,200,500,1000 }
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

int main()
{
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
			ingresarDinero(ptrSaldo);
			break;
		case 2:
			retirarDinero(ptrSaldo);
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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
