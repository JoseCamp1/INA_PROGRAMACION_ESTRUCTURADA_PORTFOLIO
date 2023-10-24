// Fecha de Creacion:23/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion: 1.	Una compañía paga a sus vendedores un salario base 
//y comisión por ventas. Los vendedores reciben ₡100,000 por semana más 5% de sus
//ventas totales de esa semana. Por ejemplo, un vendedor que acumule ₡500,000
//en ventas en una semana, recibirá ₡100,000 de salario base, más el 5% de ₡500,000
//para un total de ₡125,000 (₡100,000 + ₡25,000). Escriba un programa en 
//C++ (utilizando arreglos) que lea un conjunto de 10 ventas semanales y que determine
//cuántos vendedores recibieron salarios en cada uno de los siguientes rangos: 
//a.	100.000 a 299.999
//b.	300.000 a 499.999
//c.	500.000 a 699.999
//d.	700.000 a 899.999
//e.Iguales o mayores a 900.000
//

#include <iostream>
#include <array>
#include "FuncionesEj_1.h"

using namespace std;

int main()
{
	array<float, 10> arregloVentas = {};//se guardan las ventas
	array<float, 10> arregloSalarios = {}; // se guardan los salarios ya calculados
	float ventas = 0,salarioBase=100000,nuevoSalario=0,porcetExtra=0.05,contA=0, contB=0, contC=0, contD=0, contE=0,cont=0;//los contadores son para las condiciones de los salarios
	

	for (int i = 0; i <= 9; i++)//ingreso las ventas
	{
		cout << "Ingrese las ventas semanales del empleado " << i+1 << " : \n";
		cin >> ventas;
		arregloVentas[i] = ventas;
	}
	system("cls");
	cout << "\nVentas mensuales: \n";
	mostrarArray(arregloVentas);//muestro array

	for (int i : arregloVentas)//calculo los salarios
	{
		nuevoSalario = salarioBase + (i * porcetExtra);//se calcula el salario 
		arregloSalarios[cont]=nuevoSalario;//lo guardo en el array de salarios
		cont = cont++;
		if (nuevoSalario>=100000 && nuevoSalario<300000)
		{
			contA = contA++;
		}
		else if (nuevoSalario >= 300000 && nuevoSalario < 500000)
		{
			contB = contB++;
		}
		else if (nuevoSalario >= 500000 && nuevoSalario < 700000)
		{
			contC = contC++;
		}
		else if (nuevoSalario >= 700000 && nuevoSalario < 900000)
		{
			contD = contD++;
		}
		else
		{
			contE = contE++;
		}
	}
	cout << "\nSalarios mensuales: \n";
	mostrarArray(arregloSalarios);//muestro array
	cout << "\n\n";
	cout << "\nLos vendedores recibieron salarios en cada uno de los siguientes rangos:\n"
		<< "a.	100.000 a 299.999: " << contA << endl
		<< "b.	300.000 a 499.999: " << contB << endl
		<< "c.	500.000 a 699.999: " << contC << endl
		<< "d.	700.000 a 899.999: " << contD << endl
		<< "e.Iguales o mayores a 900.000: " << contE << endl;
	return 0;
}