// Fecha de Creacion:13/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:5.Realice un programa en C++ en donde solicite al usuario ingresar una cantidad de MB, y se muestre en pantalla su 
// equivalencia en bits, byte, kilobyte y Gigabytes.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	float Mb;
	float bits;
	float bytes;
	float Kb;
	float Gb;
	cout << "Digite la cantidad de Megabytes: \n";
	cin >> Mb;
	Gb = Mb / 1024;
	Kb = Mb * 1024;
	bytes = Kb * 1024;
	bits = bytes * 8;
	cout << Mb << " Megabytes equivalen a " << Gb << " Gigabytes a " << Kb << " Kilobytes a "
		<< bytes << " Bytes a " << bits << " Bits \n";

	return 0;
}