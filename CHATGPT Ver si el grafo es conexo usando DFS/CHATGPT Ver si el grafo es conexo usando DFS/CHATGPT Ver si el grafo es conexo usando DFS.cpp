// CHATGPT Ver si el grafo es conexo usando DFS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using std::vector;
using namespace std;

typedef vector<vector<int>> Graph;

int DFS(int nodo, vector<bool>& visitado, vector<vector<int>>& grafo) {
	visitado[nodo] = true;
	int contador = 1;
	cout << "visitando nodo" << nodo << endl;
	for (int vecino : grafo[nodo]) {
		if (!visitado[vecino]) {
			contador += DFS(vecino, visitado, grafo);
		}
	}
	return contador;
}
int main()
{
	int nodos = 10;
	vector<vector<int>> grafo(nodos);

	grafo[4].push_back(5);
	grafo[5].push_back(4);

	grafo[5].push_back(6);
	grafo[6].push_back(5);

	grafo[6].push_back(7);
	grafo[7].push_back(6);

	grafo[7].push_back(8);
	grafo[8].push_back(7);

	grafo[8].push_back(9);
	grafo[9].push_back(8);

	vector<bool> visitado(nodos, false);
	cout << " DFS DESDE EL NODO 0 \n";

	int numeroNodos = DFS(0, visitado, grafo);
	cout << " Total de nodos conectado al nodo 0 es : \n" << numeroNodos << endl;

	if (numeroNodos == nodos) {
		cout << " el grafo es conexo" << endl;
	}
	else {
		cout << "El grafo No es conexo, faltaron por visitar\n" << endl;
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
