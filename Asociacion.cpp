/**
PROGRAMA QUE ILUSTRA EL CONCEPTO DE "ASOCIACIÓN"
*/
#include <iostream>
using namespace std;
/// Clase Banco
class Banco {
private:
	string nombre;
public:
	Banco(string nombre);
	string getNombreBanco();

};
Banco::Banco(string nombre) {
	this->nombre = nombre;
}
string Banco::getNombreBanco() {
	return nombre;
}

/// Clase Empleado
class Empleado {
private:
	string nombre;
public:
	Empleado(string nombre);
	string getNombreEmpleado();

};
Empleado::Empleado(string nombre) {
	this->nombre = nombre;
}
string Empleado::getNombreEmpleado() {
	return nombre;
}
/// Asociación de la clase Banco y Empleado en el método main
int main() {
	Banco* bank = new Banco("BBVA");
	Empleado* emp = new Empleado("Megan");
	cout << emp->getNombreEmpleado() << " es empleado(a) de " << bank->getNombreBanco();
	return 0;
}
