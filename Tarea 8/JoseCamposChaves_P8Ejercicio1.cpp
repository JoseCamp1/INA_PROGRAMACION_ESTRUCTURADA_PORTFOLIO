// Fecha de Creacion:24/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:1.	Un cuadrado mágico es una disposición de números naturales en una tabla
// cuadrada, de modo que las sumas de cada columna, de cada fila y de cada diagonal son iguales. 
// Cree un programa que permita escoger al usuario llenar una matriz de 3x3 o una de 4x4.
// El programa llamará una función, que se encuentra en un archivo.h, que indique si 
// la matriz es un cuadrado mágico o no.Utilice una matriz tradicional
// Ejemplos de cuadrados mágicos :
//

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
//#include <iomanip>
#include "Funciones1.h"

using namespace std;

int main()
{
	//variables
	string respuesta = "";
	int matriz3x3[3][3] = {};
	int matriz4x4[4][4] = {};
	int opcion=0,num=0;
	do
	{
		cout << "\nDigite una de las siguentes opciones\n"//menu de opciones
			<< "1. matriz 3x3.\n"
			<< "2. matriz 4x4.\n"
			<< "3. Salir.\n";
		cin >> opcion;
		switch (opcion)		
		{
		case 1://matriz3x3
			system("cls");
			cout << "\nA continuacion ingrese numeros para llenar la matriz.\n";//lleno la matriz
			for (int i = 0; i <= 2; i++)
			{
				for (int j = 0; j <= 2; j++)
				{
					cout << "\nIngrese un numero: \n";
					cin >> num;
					matriz3x3[i][j] = num;

				}
			}
			system("cls");
			mostrarMatriz3x3(matriz3x3);
			respuesta=cuadradoMagico3x3(matriz3x3);
			cout << "Es un cuadrado magico?. Respuesta: " << respuesta << endl;			
			break;

		case 2://matriz4x4
			system("cls");
			cout << "\nA continuacion ingrese numeros para llenar la matriz.\n";//lleno matriz
			for (int i = 0; i <= 3; i++)
			{
				for (int j = 0; j <= 3; j++)
				{
					cout << "\nIngrese un numero: \n";
					cin >> num;
					matriz4x4[i][j] = num;

				}
			}
			system("cls");
			mostrarMatriz4x4(matriz4x4);
			respuesta = cuadradoMagico4x4(matriz4x4);
			cout << "Es un cuadrado magico?. Respuesta: " << respuesta << endl;
			break;

		case 3://salir
			system("cls");
			cout << "\nTenga un buen dia.\n";
			break;

		default:
			system("cls");
			break;
		}

	} while (opcion!=3);
	return 0;
}