// Grafos,VectorDeVectores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using std::vector;
using namespace std;

typedef vector<vector<int>>Carpi_Graph;

int main()
{
	int node; //NUMERO DE VERTICES
	int edges; //NUMERO DE ARISTAS DEL GRAFO

	cin >> node >> edges;
	Carpi_Graph _graph(node);

	for (int i = 0; i < edges; ++i) {
		int x, y;
		cin >> x >> y;

		_graph[x].push_back(x);
		_graph[y].push_back(y);
		//IMPRIME LOS NODOS Y CON LAS ARISTAS
		for (int i = 0; i < node; ++i) {
			cout << "las vertices adyacentes a" << i << "es: \n";
			for (int j = 0; j < _graph[i].size(); j++) {
				cout << _graph[i][j] << endl;
			}
		}
		return 1;
		// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
		// Depurar programa: F5 o menú Depurar > Iniciar depuración

		// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
		//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
		//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
		//   4. Use la ventana Lista de errores para ver los errores
		//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
		//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
