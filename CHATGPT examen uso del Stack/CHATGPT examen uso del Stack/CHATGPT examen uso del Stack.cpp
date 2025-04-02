// CHATGPT examen uso del Stack.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stack>
#include <vector>
using std::stack;

int main()
{
	std::stack<int> pila;

	pila.push(50);
	pila.push(100);
	pila.push(150);

	std::cout << "Elemento en la cima\n" << pila.top() << std::endl;
	if (!pila.empty()) {
		pila.pop();
		std::cout << "estos son los numeros que saque: \n" << pila.top() << std::endl;
	}
	if (pila.top()) {
		std::cout << "este es el numero top del momento: \n" << pila.top() << std::endl;
		pila.pop();
		std::cout << "estos son los numeros que saque: \n" << pila.top() << std::endl;
	}
	else {
		std::cout << "la pila ya esta vacia \n" << std::endl;
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
