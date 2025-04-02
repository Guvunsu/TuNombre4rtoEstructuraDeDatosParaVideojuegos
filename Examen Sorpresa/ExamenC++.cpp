// ExamenC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stdio.h> 

using std::string;
using std::cin;
using std::cout;

struct Alumnos {
	string nombre;
	int edad;
	float promedio;
};



int main()
{
	int x;
	Alumnos alum1, alum2, alum3;

	/*alum1.nombre = "Juan";
	alum1.edad = 15;
	alum1.promedio = 8.5f;*/


	//string estudiantes[3] = { "Juan","Ana","Pedro" };
	Alumnos estudiantes[3] = { alum1, alum2, alum3 };
	//Alumnos edades[3] = { " 20,19,21" };
	//Alumnos promedio[3] = { "8.5f,9.2f,7.8f" };
	float calificacion = 0;
	for (int i = 0; i < 3; i++) {
		std::cout << "Ingrese el nombre del estudiante \n" << ":";
		cin >> estudiantes[i].nombre;
		cout << "ingrese la edad del morro \n" << ":";
		cin >> estudiantes[i].edad;
		cout << "ingrese promedios \n" << ":";
		cin >> estudiantes[i].promedio;
		calificacion += estudiantes[i].promedio;
		//float* promedio = &calificacion;
	}

	int promedioDeTodosLosAlumnos = calificacion / 3;


	litecode
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
