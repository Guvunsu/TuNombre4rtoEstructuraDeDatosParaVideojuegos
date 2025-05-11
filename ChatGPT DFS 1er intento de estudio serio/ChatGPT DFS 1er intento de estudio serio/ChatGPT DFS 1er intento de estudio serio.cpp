// ChatGPT DFS 1er intento de estudio serio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using std::vector;
using namespace std;

int DFS(int nodo, vector<bool>& visitado, const vector<vector<int>>& grafo) {
	visitado[nodo] = true;
	int contador = 1;
	cout << "visitando el nodo :\n" << nodo << endl;

	for (int vecino : grafo[nodo]) {
		if (!visitado[vecino]) {
			contador += DFS(vecino, visitado, grafo);
		}
	}
	return contador;
}
int main()
{
	int nodos = 5;
	vector<vector<int>> grafo(nodos);

	grafo[0].push_back(1);
	grafo[1].push_back(0);

	grafo[1].push_back(2);
	grafo[2].push_back(0);


	grafo[1].push_back(3);
	grafo[3].push_back(1);

	grafo[1].push_back(4);
	grafo[4].push_back(1);

	vector<bool> visitado(nodos, false);
	cout << "DFS DESDE EL NODO 0: \n";
	int nodosConectados = DFS(0, visitado, grafo);

	cout << "Total de nodos conectados al nodo 0: " << nodosConectados << endl;
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
