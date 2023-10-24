// Fecha de Creacion:26/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:26/11/22
// Descripcion: 2.Una empresa de ventas a domicilio cuenta con 4 vendedores y 
// 5 artículos diferentes. En un arreglo de 4x5 se tienen almacenadas las cantidades
// de cada artículo vendidas por cada vendedor. Además, los precios de cada artículo
// están almacenados en un vector de tamaño 5. Utilice el vector y la matriz de tipo array
// Elabore un programa, que utilice funciones y obtenga la siguiente información :
// a)	La cantidad de dinero recopilado por cada vendedor.
// b)	El vendedor que recopiló la mayor cantidad de dinero.
// c)	El artículo más vendido(suma de cantidades).
//

#include <iostream>
#include <array>
#include <algorithm>
#include "Funciones2.h"

using namespace std;

int main()
{
	int vendedor = 0,articulo=0;
	array < array<float, 5>, 4 > arrayArticulosxVendedores = {3,5,7,2,4,6,5,4,8,1,2,8,5,4,6,1,0,7,8,4};//array principal de datos
	array<float, 5> arrayPrecio = {1000,2000,3000,4000,5000};//array precio de los articulos
	array<float, 4> arrayventasTotales = {};//array para totales de ventas
	array<float, 5> arrayartimasvendido = {};// arra para el articulo que se vendio mas
	mostrarMatriz(arrayArticulosxVendedores, arrayPrecio);
	ventasxVendedor(arrayArticulosxVendedores, arrayPrecio,arrayventasTotales);
	vendedor = quienvendiomas(arrayventasTotales);
	cout << "\nEl vendedor que recopilo la mayor cantidad de dinero fue el vendedor: " << vendedor + 1 << endl;
	articulo=articulomasVendido(arrayArticulosxVendedores,arrayartimasvendido);
	cout << "\nEl articulo mas vendido fue: " << articulo + 1 << endl;
	return 0;
}