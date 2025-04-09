// Examen EstructuraDatos Capy 2025 2ndo parcial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using std::cout;
using std::cin;
#include <stack>
using std::stack;
#include <string>
using std::string;
using std::endl;
#include <map>
using std::map;

// hago un ciclo for para que recorre todo un arreglo de no mayor a 4
// guardo la variable i en una variable llamada mid
// luego creo otro ciclo for para que tome lo que recorrio la i +1 y la iguale con la j, para que ya pueda hacer la verificacion tomando 2 numeros y los acomode dentro de su arreglo 
// hago una variable tipo int llamada temp para igualarla con el array del i para que luego tome su info y lo iguale con el otro array ( el base y el modificado para moverlos) y este luego este igualado con el temp
// 
// 
//void SelectionSort(int arr[], int n) {
//	for (int i = 0; i < n; ++i) {
//		int mid = i;
//		for (int j = i + 1; j < n; j++)
//			if (arr[j] < arr[mid]) {
//				mid = j;
//			}
//		int temp = arr[i];
//		arr[i] = arr[mid];
//		arr[mid] = temp;
//	}
//}


int main()
{/*
	int numeros[] = { 4, 7, 3, 9 };
	int n = 4;

	// este sirve para recorrer la lista
	std::cout << "\narreglo original";
	for (int i = 0; i < n; ++i) {
		std::cout << numeros[i] << " ";
	}
	//llamo a mi funcion de arriba afuera del main
	SelectionSort(numeros, n);

	// este sirve para que me lo arregle numericamente
	std::cout << "\narreglo actual";
	for (int j = 0; j < n; ++j) {
		std::cout << numeros[j] << " ";
	}
	return 0;*/





	/*stack <int> personas;
	string n1;

	for (int i = 0; i < 3; i++) {
		cout << "nombres de la personas \n";
		cin >> n1;
		for (int i = 0; i < 3; ++i) {

			cout << "la lista es: \n" << n1 << "\n";
		}
	}


	while (!personas.empty()) {
		cout << "primero en la fila es :\n" << personas.top() << n1 << n2 << n3 << endl;
		;
		personas.pop();
	}
	cout << "la fila ahora esta vacia\n";
	return 0;*/




	map <string, int> almacenamiento;
	stack <string> nombres;
	string nombre;
	int n = 3;

	almacenamiento["Carlos"] = 22;
	almacenamiento["Ana"] = 19;
	almacenamiento["Luis"] = 25;

	/*for (int i = 0; i < n; ++i) {
		cout << "nombres ingresados\n";
	}
	for (int i = 1; i < n + 1; i++) {
		cout << almacenamiento;
	}*/
	for (auto it = almacenamiento.begin(); it != almacenamiento.end();) {

		cout << "[" << it->first << "]" << it->second << endl;
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
