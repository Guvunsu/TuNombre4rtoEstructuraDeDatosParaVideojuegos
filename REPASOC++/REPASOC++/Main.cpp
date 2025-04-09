#include <iostream>
using std::cout;
using std::endl;
void apuntadores();
void modificarValorConApuntador();
int main() {
	apuntadores();

	int valor = 10;
	int* ptr_x = &valor;
	cout << "el valoir de la variable Valor es :" << *ptr_x << endl;
	modificarValorConApuntador(&ptr_x);
	cout << "el valor de la variable Valor es :" << *ptr_x << endl;
}
void apuntadores() {
	int x = 5;
	int* ptr = &x;

	cout << "Hola mundo, una vez mas " << *ptr << endl;
	cout << "la direccion de memoria de ptr:" << &ptr << endl;

	cout << "la direccion de memoria de ptr:" << ptr << endl;
	cout << "la direccion de memoria de X:" << &x << endl;


}
void modificarValorConApuntador(int** ptr) {

	static int nuevoValor = 5;
	*ptr = &nuevoValor;
}