// Fecha de Creacion:24/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:
//

#include <iostream>
#include <array>
#include "FuncionesEj_4.h"

#include <math.h>

using namespace std;

int main()
{
	int cont = 0;
	float horas = 0,num1=0,num2=0;
	array<float, 10> arregloHoras = {};
	array<float, 10> arregloCargos = {};
	do
	{
		cout << "Ingrese las horas de estacionamiento del cliente " << cont+1<<endl;
		cin >> horas;
		if (horas>0)
		{
			arregloHoras[cont] = horas;
			cont = cont++;
		}
		else
		{
			cout << "Dato invalido.\n"
				<< "Intente de nuevamente\n";
		}

	} while (cont < 10);
	cout << "\nHoras\n";
	mostrarArray(arregloHoras);
	for (int i = 0; i <= 9; i++)
	{
		num1 = arregloHoras[i];
		if (num1 <= 3)
		{
			arregloCargos[i] = 2000;
		}
		else if (num1>3 && num1<24)
		{
			num1 = num1 - 3;
			num1 = (num1 * 500) + 2000;
			arregloCargos[i] = num1;
		}
		else if (num1>=24)		
		{
			arregloCargos[i] = 10000;
		}
	}
	cout << "\nCargos por las horas\n";
	mostrarArray(arregloCargos);



	return 0;
}