// Fecha de Creacion:17/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:18/11/22
// Descripcion:1.	Hacer un programa en C++ que lea n números y
// determine cuál es el mayor, el menor y el promedio de los números ingresados.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int num,mayor=0,menor=0,suma=0;
	float promedio;
	int tamano;	
	cout << "\nDigite la cantidad de numeros que desea ingresar: \n";	
	cin >> tamano;	
	cout << "\nDigite cada uno de los numeros de 1 en 1.\n";
	for (int i = 0; i < tamano; i++)
	{		
		cin >> num;
		suma = suma + num;
		if (i == 0)
		{
			mayor = num;
		}
		else if (num>mayor)
		{
			mayor = num;
		}
		if (i==0)
		{
			menor = num;
		}
		else if (num < menor)
		{
			menor = num;
		}	 
		
	}
	promedio = suma / tamano;
	cout << "\nEl numero mayor es: " << mayor << " El numero menor es: " << menor << "\n"
		<< "\nEl promedio es:" << promedio<<endl;
	return 0;
}