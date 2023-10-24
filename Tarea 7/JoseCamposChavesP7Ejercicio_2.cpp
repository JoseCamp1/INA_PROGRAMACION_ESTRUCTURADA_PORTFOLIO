// Fecha de Creacion:23/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:2.Almacenar en un arreglo 10 números ingresados por el usuario,
// cada uno de los cuales debe estar entre 10 y 100. A medida que se lea cada 
// número, debe validarlo y almacenarlo en el arreglo sólo si no es el doble de
// un número previamente ingresado. Después de llenar el arreglo debe mostrar 
// los números almacenados. 
//

#include <iostream>
#include <algorithm>//sirve para hacer busquedas en arrays
#include <array>
#include "FuncionesEj_2.h"

using namespace std;

int main()
{
	int cont = 0;
	float num = 0; 
	array<float, 10> arregloNumeros = {};
	array<float, 10> arregloNumerosCopia = {};
	bool flag = false;//condicion de la busqueda binaria
	cout << "\nIngrese un 10 numeros entre 10 y 100\n"; 
	do
	{
		cout << "\nIngrese un numero entero \n";//<<" contador: "<<cont<<endl;
		cin >> num;		
		if (num > 9 && num < 101)//condicion para que sea un numero usable
		{
			partial_sort_copy(arregloNumeros.begin(), arregloNumeros.end(), arregloNumerosCopia.begin(), arregloNumerosCopia.end());//hago una copia del array original y guardo sus valores dentro de un arraycopia  y lo ordeno 
			//sort(arregloNumeros.begin(), arregloNumeros.end());
			flag=binary_search(arregloNumerosCopia.begin(), arregloNumerosCopia.end(),num/2);//hago una busqueda binaria en el array copia y compruebo si hay un numero que sea la mitad del numero ingresado dentro del array, si se cumple devuelve true , sino seguira en false
			if (flag==false)//si la busqueda no cuentra nada, es porque el numero es usable,entonces lo guardo en el array original 
			{
				system("cls");
				arregloNumeros[cont] = num;//guardo el numero
				cont = cont++;// contador lleva el espacio en el array dnd se agregara el valor, solo cambia si es un numero usable
				cout << "\nLista de numeros. \n";
				mostrarArray(arregloNumeros); // muestro el array
				cout << "\n\n";
				//cout << "\nArrayCopia. \n";
				//mostrarArray(arregloNumerosCopia);
				//cout << "\n\n";
			}
			else
			{
				cout << "\nEl Numero es el doble de un numero ya ingresado! \n"; // si condicion es true
			}
		}
		else
		{
			cout << "\nNumero invalido. \n"; //si es un numero menor a 10 o mayor a 100
		}

		
	} while (cont<10);
	system("cls");
	cout << "\nLista de numeros. \n";
	mostrarArray(arregloNumeros);
	cout << "\n\n";
	return 0;
}