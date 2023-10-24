// Fecha de Creacion:13/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:7.Se tiene un terreno rectangular cuyas dimensiones de largo y ancho están en relación 2 a 1. 
// Solicite el ancho del terreno al usuario.
// Para cercar con malla este terreno se colocan postes a lo largo del perímetro a una distancia de 2 m uno del otro.
// ¿Cuántos postes son necesarios para cercar el terreno? 
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	float ancho;	
	float perimetro;
	int distanciaPostes = 2;
	cout << "Indique el ancho del terreno en metros: \n";
	cin >> ancho;
	float largo = 2 * ancho;
	perimetro = ancho * 2 + largo * 2;
	cout << "La cantidad de postes necesarios es: " << perimetro / distanciaPostes << "\n";
	return 0;
}