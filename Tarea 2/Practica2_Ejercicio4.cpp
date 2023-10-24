// Fecha:13/11/22
// Nombre:Jose Campos Chaves
// Descripcion:4.Conversión de segundos a horas, minutos y segundos. Realice un programa en C++ que solicite al usuario una 
// cantidad de segundos, el programa debe mostrar en pantalla cuantas horas, cuantos minutos y cuantos segundos 
// existen en el dato ingresado. Deben obtener la parte entera de la división ( / ) y el residuo ( % )
// Ejemplo 5200 segundos equivalen a 1 hora, 26 minutos y 40 segundos
// Fecha de modificacion:
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	float segundos;
	float minutos;
	float horas;
	float residuo;
	int cantidad;
	cout << "Digite una cantidad de segundos \n";
	cin >> cantidad;
	cout << cantidad << " segundos equivalen a: ";
	residuo = cantidad % 3600;
	horas = cantidad / 3600;
	minutos = residuo / 60;
	residuo = cantidad % 60;
	segundos = residuo;
	cout << horas << " hora(s) " << minutos << " minuto(s) " << segundos << " segundos(s) \n";
  return 0;
}
