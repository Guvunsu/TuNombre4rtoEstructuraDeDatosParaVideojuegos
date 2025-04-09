// CHAT GPT Exmaen Insertion sort.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

void InsertionSort(int arr[], int n) {

	for (int i = 1; i < 5; i++) {
		int clave = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > clave) {

			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = clave;

	}
}
int main()
{
	int numeros[] = { 100,22,3,19,10,14,75 };
	int n = 7;

	std::cout << "arreglo orginal";
	for (int i = 0; i < n; i++) {
		std::cout << numeros[i] << "-";
	}
	InsertionSort(numeros, n);

	std::cout << "\narreglo ordenado";
	for (int i = 0; i < n; i++) {
		std::cout << numeros[i] << "-";
	}
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
