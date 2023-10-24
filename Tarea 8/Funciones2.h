#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void mostrarMatriz(array < array<float, 5>, 4 >& matrizArray, array<float, 5> arrayPrecio)// muestro el array
{
	cout << "\n\t                 *** Articulo 1      Articulo 2      Articulo 3      Articulo 4      Articulo 5 ***\n\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Vendedor " << i+1 << "\t";
		for (int j = 0; j < 5; j++)
		{
			cout << "\t|\t" << matrizArray[i][j];
		}
		cout << "\t|\n";
	}
	cout << "\n|\n";
	cout << "\n          **************************** Precio de los articulos *************************\n\n";
	cout << "\n              Articulo 1      Articulo 2      Articulo 3      Articulo 4      Articulo 5       \n\n";
	for (auto& i : arrayPrecio)
	{
		cout << "\t|\t"<<"$ " << i;
	}
	cout << "\t|\n";
}

void ventasxVendedor(array < array<float, 5>, 4 > matrizArray, array<float, 5> arrayPrecio, array<float, 4>& arrayventasTotales)
{
	
	for (int i = 0; i < 4; i++)
	{
		float multi = 0, sum = 0;
		for (int j = 0; j < 5; j++)
		{		
			if (j<=4)
			{
				multi = matrizArray[i][j] * arrayPrecio[j]; // multiplico el articulo por su valor
				sum = sum + multi;//almaceno una suma de todas las ventas
			}
						
		}
		//cout << "\n\nEl vendedor " << i << "vendio la cantidad de: $" << sum;
		arrayventasTotales[i] = sum;// la guardo en otro array
	}

	cout << "\n|\n";
	cout << "\n          **************************** Ventas Totales por Vendedor *********************\n\n";
	cout << "\n               Vendedor1       Vendedor2       Vendedor3       Vendedor4       \n\n";

	for (auto& i : arrayventasTotales)
	{
		cout << "\t|\t" << "$ " << i;
	}
	cout << "\t|\n";
}

int quienvendiomas(array<float, 4> arrayventasTotales) // busco en el array el que mas vendio
{
	float mayor = 0;   // el mayor en el array
	int vendedor = 0; // llevo la posicion del vendedor
	arrayventasTotales[0] = mayor;
	for (int i = 0; i < 3; i++)
	{
		if (i!=0)
		{
			if (mayor<arrayventasTotales[i])
			{
				mayor = arrayventasTotales[i];
				vendedor = i;
			}

		}
	}
	return vendedor;
}


int articulomasVendido(array < array<float, 5>, 4 > matrizArray, array<float, 5>& arrayartimasvendido)//busco el articulo mas vendido
{
	//guardo en un array la suma de cada articulo
	arrayartimasvendido[0] = matrizArray[0][0] + matrizArray[1][0] + matrizArray[2][0] + matrizArray[3][0];
	arrayartimasvendido[1] = matrizArray[0][1] + matrizArray[1][1] + matrizArray[2][1] + matrizArray[3][1] ;
	arrayartimasvendido[2] = matrizArray[0][2] + matrizArray[1][2] + matrizArray[2][2] + matrizArray[3][2] ;
	arrayartimasvendido[3] = matrizArray[0][3] + matrizArray[1][3] + matrizArray[2][3] + matrizArray[3][3] ;
	arrayartimasvendido[4] = matrizArray[0][4] + matrizArray[1][4] + matrizArray[2][4] + matrizArray[3][4] ;
	//cout << arrayartimasvendido[0] << " | " << arrayartimasvendido[1] << " | " << arrayartimasvendido[2] << " | " << arrayartimasvendido[3] << " | " << arrayartimasvendido[4] << " | " << endl;
	float mayor = 0; // el mayor en el array
	int articulo = 0; // la posicion del articulo
	arrayartimasvendido[0] = mayor;
	for (int i = 0; i < 3; i++)
	{
		if (i != 0)
		{
			if (mayor < arrayartimasvendido[i])
			{
				mayor = arrayartimasvendido[i];
				articulo = i;
			}

		}
	}
	return articulo;
}