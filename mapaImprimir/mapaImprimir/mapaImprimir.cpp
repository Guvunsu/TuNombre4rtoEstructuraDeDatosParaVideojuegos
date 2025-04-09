// mapaImprimir.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <string>
using std::vector;



int main()
{
	//std::map<int, int > alumno;
	//alumno[007] = 6;
	//alumno[001] = 5;
	//alumno[003] = 4;

	////std::map<int, int>::iterator it;

	//for (std::map<int, int>::iterator i = alumno.begin(); i != alumno.end(); ++i) {
	//	std::cout << i->second << std::endl;
	//}
	//return 1;

	//std::stack<int>_mystack;


	//_mystack.push(10);
	//_mystack.push(100);
	//_mystack.push(1000);
	//_mystack.push(10000);
	//_mystack.push(100000);
	//_mystack.push(1000000);
	//_mystack.push(10000000);
	//_mystack.size();

	//while (!_mystack.empty()) {
	//	_mystack.top();
	//	std::cout << _mystack.top() << "\n";
	//	_mystack.pop();

	//}




	//int palabra;


	//std::cout << "escribe por favor tu palindromo." << "\n";
	//std::cin >> palabra;

	///*for (palabra = 0; palabra++;) {

	//	if (palabra % 2 == 0) {
	//		std::cout << "es par.\n" << palabra;
	//	}
	//	else {

	//		std::cout << " es impar.\n" << palabra;
	//	}
	//}*/


	//std::stack<int>palindromo;
	//palindromo.push(palabra);
	//palindromo.size();

	//while (!palindromo.empty()) {
	//	palindromo.top();


	//	if (palabra != palindromo.top()) {
	//		std::cout << " es igual. \n";
	//	}
	//	else
	//		std::cout << "no es igual. \n";

	//	palindromo.pop();
	//	return 0;

	//}

	std::vector<int> selectionVector(3);
	selectionVector[0] = 20;
	selectionVector[1] = 15;
	selectionVector[2] = 25;

	for (int i = 0; i < selectionVector.size(); i++) {
		std::cout << selectionVector[i] << std::endl;
	}
}


//int minPosition(const std::vector<int>& _vector, int firstValue, int sizeVector) {
//	int initialPos = firstValue;
//	for (int i = firstValue + 1; i <= sizeVector; i++) {
//		if (_vector[i] < _vector[initialPos]) {
//			initialPos = i;
//		}
//	}
//	return initialPos;
//}
//void selection_sort(std::vector<int>& _newVector) {
//	int lastValue = _newVector.size() - 1;
//	for (int i = 0; i < lastValue; i++) {
//		int k = minPosition(_newVector, i, lastValue);
//		std::swap(_newVector[k], _newVector[i]);
//	}
//}




void inserction_sort(std::vector<int>& _newVector) {
	for (int i = 1; i < _newVector.size(); i++) {
		int x = _newVector[i];
		int j = i;

		while (j > 0 && _newVector[j - 1] > x) {
			_newVector[j] = _newVector[j - i];
			--j;
		}
		_newVector[j] = x;
	}
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
