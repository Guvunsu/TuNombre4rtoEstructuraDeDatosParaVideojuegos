// Palindromo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<vector>
#include<stack>
using std::vector;

int main()
{
	int palabra;
	std::cout << "escribe por favor tu palindromo" << "\n";
	std::cin >> palabra;
	for (palabra = 0; palabra++;) {
		if (palabra % 2 == 0) {
			std::cout << "espa \n" << palabra;
		}
		else {
			std::cout << "esimpar\n" << palabra;
		}
	}
	std::stack<int>palindromo;
	palindromo.push(palabra);
	palindromo.size();

	while (!palindromo.empty()) {
		palindromo.top();
		if (palabra != palindromo.top()) {
			std::cout << "es igual \n";
		}
		else {
			std::cout << "no es igual\n";
			palindromo.pop();
			return 0;
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
