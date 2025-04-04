// ChatGPT examen stack numeros en ordenacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stack>

using std::stack;
using std::cin;
using std::cout;
using std::endl;

int main() {
	stack<int> numeros;
	int numero;

	numeros.push(10);
	numeros.push(100);
	numeros.push(1000);
	numeros.push(10000);
	numeros.push(100000);


	for (int i = 0; i < 5; ++i) {
		cout << "Ingrese un número: ";
		cin >> numero;
		numeros.push(numero);
	}


	while (!numeros.empty()) {
		cout << "Top de la pila: " << numeros.top() << endl;
		cout << "Tamaño actual de la pila: " << numeros.size() << endl;
		numeros.pop();
	}

	cout << "La pila ahora está vacía." << endl;
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
