// ChatGPT examen repaso Map,Pilas,etc.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <map>
#include <vector>
using std::vector;

int main()
{
	std::map<int, std::string> alumnos;
	alumnos[1001] = "Juan";
	alumnos[1002] = "María";
	alumnos[1003] = "Pedro";
	alumnos[1004] = "Ana";
	alumnos[1005] = "Luis";

	for (auto it = alumnos.begin(); it != alumnos.end(); ++it) {
		std::cout << "[" << it->first << "]" << it->second << std::endl;
	}
	int clave;
	std::cin >> clave;
	auto it = alumnos.find(clave);
	if (it != alumnos.end()) {
		std::cout << "Alumno encontrado" << it->second << std::endl;
	}
	else {
		std::cout << "alumno no encontrado" << std::endl;
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
