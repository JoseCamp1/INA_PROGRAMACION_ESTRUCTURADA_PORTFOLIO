// Fecha de Creacion:
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:3.	Escriba un programa que solicite la medida del radio de un círculo
// y calcule el área y el perímetro, los resultados se deben mostrar con dos decimales
// (investigue como mostrar números con n cantidad de decimales).
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	float radio,area,perimetro;
	const float pi = 3.1416;
	cout << "\nIngrese la medida del radio del circulo.\nRadio: ";
	cin >> radio;
	perimetro = pi * (radio * 2);
	area = (perimetro * radio) / 2;
	cout << "\nPerimetro: " << fixed << setprecision(2) << perimetro <<"\t" << " Area: " << fixed << setprecision(2) << area << "\n";
	return 0;	
}