// Fecha de Creacion:25/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:26/11/22
// Descripcion:Realice lo siguiente:
//Una función que recibe un arreglo tipo vector como parámetro y un número de elementos,
//debe dar la posibilidad de agregar una lista de nombres, según el número de elementos recibido y devolver el vector al.cpp.
//Una función para mostrar el vector de nombres, recibe el vector como parámetro.
//Una función para ordenar el vector de nombres, recibe el vector como parámetro.
//Una función para buscar un nombre en el vector de nombres, recibe el vector y el nombre a buscar como parámetro, devuelve un valor lógico al.CPP.
//Una función para eliminar el primer elemento del vector de nombres, recibe el vector como parámetro.
//Una función para eliminar el último elemento del vector de nombres, recibe el vector como parámetro.
//Una función para mostrar el menú, debe mostrar todas las opciones al usuario y devuelve un número según la opción seleccionada.
//En el Cpp debe confeccionar un ciclo y un switch para que el usuario seleccione entre las diferentes opciones mencionada anteriormente.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Funciones05.h"


//#include <iomanip>

using namespace std;

int main()
{
	vector<string> VectorNombres(0);
	string nombreBuscar = "";
	bool respuesta = false;
	int opcion = 0;

	do
	{
		opcion = buscarenelVector();
		switch (opcion)
		{
		case 1:
			system("cls");
			llenarVector(VectorNombres);
			break;
		case 2:
			system("cls");
			mostrarVector(VectorNombres);
			break;
		case 3:
			system("cls");
			ordenarVector(VectorNombres);
			break;
		case 4:
			system("cls");
			cout << "\nDigite un nombre para buscar si se cuentra en la lista de nombres\n";
			cin >> nombreBuscar;
			respuesta = buscarenelVector(VectorNombres, nombreBuscar);
			cout << "Se encuentra la paralabra en la lista ? Respuesta: ";
			if (respuesta == true)
			{
				cout << "Si.\n";
			}
			else
			{
				cout << "No.\n";
			}
			break;
		case 5:
			system("cls");
			eliminarprimerodelVector(VectorNombres);
			break;
		case 6:
			system("cls");
			eliminarultimodelVector(VectorNombres);
			break;
		case 7:
			system("cls");
			cout << "Gracias!!!";
			break;

		default:
			system("cls");
			cout << "\nOpcion incorreta\n";
			break;
		}


	} while (opcion != 7);

	return 0;
}