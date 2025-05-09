// bfs.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef vector<vector<int>> Graph;

void bfs(int _start, const Graph& _mygraph) {
	vector<bool>visited(_mygraph.size(), false);
	queue <int>q;
	q.push(_start);

	while (!q.empty()) {
		int currentLevel = q.front();
		q.pop();
		cout << "nodo visitado" << currentLevel << endl;
		for (int neighbor : _mygraph[currentLevel]) {
			if (!visited[neighbor]) {
				visited[neighbor] = true;
				q.push(neighbor);
			}
		}

	}
}

int main()
{
	Graph _MyGraph = {
		{1,2},
		{0,3,4},
		{0},
		{1},
		{1}
	};
	bfs(0, _MyGraph);
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
