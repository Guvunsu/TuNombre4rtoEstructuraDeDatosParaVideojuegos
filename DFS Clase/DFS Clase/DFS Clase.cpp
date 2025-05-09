// DFS Clase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <list>
#include <vector>
using std::vector;
using namespace std;

typedef vector<vector<int>>Graph;

void dfsAlgorith() {
}

list<int>dfs_rec(const Graph& _myGraph) {
	int n = _myGraph.size();
	list<int> _templist;
	vector<bool>vis(n, false);
	for (int i = 0; i < n; i++) {
		dfs_rec(_myGraph, i, vis, _templist);
	}
}
void dfs_rec(const Graph& _myGraph, int index, vector<bool>& vis, list <int>& _templist) {
	if (!vis[index]) {
		vis[index] = true;
		_templist.push_back(index);
		for (int v : _myGraph[index]) {
			dfs_rec(_myGraph, v, vis, _templist);
		}

	}
}
int main()
{

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
