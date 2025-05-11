// DFS componentes conexas grafo NO dirigido.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

void DFS(int nodo, vector<bool>& visitado, const vector<vector<int>>& grafo) {
	visitado[nodo] = true;
	cout << "visitando el nodo" << nodo << endl;

	for (int vecino : grafo[nodo]) {
		if (!visitado[nodo]) {
			DFS(vecino, visitado, grafo);
		}
	}
}
int main()
{
	int nodo = 10;
	vector<vector<int>> grafo(nodo);

	grafo[0].push_back(1);
	grafo[1].push_back(0);

	grafo[2].push_back(3);
	grafo[3].push_back(2);

	grafo[5].push_back(6);
	grafo[6].push_back(5);

	vector<bool> visitando(nodo, false);
	int componentes = 0;

	for (int i = 0; i < nodo; i++) {
		if (!visitando[i]) {
			cout << "Nueva componentes encontrada comenzando en nodo" << i << endl;
			DFS(i, visitando, grafo);
			componentes++;
		}
	}
	cout << "Numero total de componentes conexion" << componentes << endl;
	return  0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
