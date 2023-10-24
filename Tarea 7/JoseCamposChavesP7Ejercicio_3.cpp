// Fecha de Creacion:23/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:24/11/22
// Descripcion: hacer la criba de Eratóstenes en algoritmo .PD: son muchas instrucciones
//

#include <iostream>
//#include <algorithm>//sirve para hacer busquedas en arrays
#include <array>
#include "FuncionesEj_3.h"

using namespace std;
int main()
{
	int num1=0;
	array<int, 100> arregloNumeros = {};
	arregloNumeros.fill(1);
	arregloNumeros[0] = 0;	// no es primo pero no se evalua en el programa
	for (int i = 2; i <= 99; i++)
	{
		for (int j = 2; j <= 99; j++)
		{
			if (arregloNumeros[j-1]==1) // evaluo si en el indicie es un 1 , y si lo es entonces comienza el proceso
			{
				num1 = j * i; //multiplico y saco el indice que tachare como 0
				if (num1<=100)//mientras que numero sea menor o igual a 100
				{
					arregloNumeros[num1-1] = 0;//guardo el 0 en el indice
					// pongo -1 porque el array va de 0 a 99, no a 100 y me daria errores
				}
			}

		}

	}
	mostrarArray(arregloNumeros);//muestro el arrary
	return 0;
}