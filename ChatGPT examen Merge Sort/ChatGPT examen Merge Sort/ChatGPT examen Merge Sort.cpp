// ChatGPT examen Merge Sort.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
void merge(int arr[], int izq, int mid, int der) {
	int n1 = mid - izq + 1;
	int n2 = der - mid;

	int* L = new int[n1];
	int* R = new int[n2];

	for (int i = 0; i < n1; ++i) {
		L[i] = arr[izq + i];
	}
	for (int j = 0; j < n2; ++j) {
		R[j] = arr[der + 1 + j];
	}
	int i = 0, j = 0, k = izq;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		i++;
		k++;
	}
}

void mergeSort(int arreglo[], int izquierda, int derecha) {
	if (izquierda < derecha) {
		int medio = izquierda + (derecha - izquierda) / 2;
		mergeSort(arreglo, izquierda, medio);
		mergeSort(arreglo, medio + 1, derecha);

		merge(arreglo, izquierda, medio, derecha);
	}
}

int main()
{
	int numero[] = { 8, 3, 2, 9, 7, 1 };
	int n = 6;

	std::cout << "arreglo orignal\n";
	for (int i = 0; i < n; ++i) {
		std::cout << numero[i] << " ";
	}

	mergeSort(numero, 0, n - 1);

	std::cout << "\narreglo modificado";
	for (int i = 0; i < n; ++i) {
		std::cout << numero[i] << " ";
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
