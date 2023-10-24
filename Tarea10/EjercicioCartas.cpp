// Fecha de Creacion:29/11/222
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:30/11/22
// Descripcion: 1.	En C++ cree un proyecto con el nombre solicitado anteriormente, luego cree las siguientes funciones:
//a.Un archivo.h con el nombre de estructuras.h, en la misma debe crear un STRUCT para almacenar los datos de una
//  carta de naipe, estos datos son : int numero y string palo.En el caso del palo se recomienda string para imprimir
//  el código ascii que representa las figuras de una baraja.El nombre del STRUCT es cartas.
// 
//b.Cree otro archivo.h con el nombre de funcionesP10, en el mismo debe importar el archivo estructuras.h.
// 
//c.Cree una función para mostrar el menú, la misma no recibe parámetros, pero devuelve la opción seleccionada 
// por el usuario, se debe ver de la siguiente manera.//
//
//d.En el archivo funcionesP10 cree una función con el nombre de crearBaraja.Esta recibe el arreglo vacío de clase
//  vector, cuyo tipo de dato es un STRUCT(cartas).En esta función debe crear todas las cartas de la baraja.
// Utilice ciclos, no asigne cartas a posiciones fijas.Las cartas de una baraja se muestran en la imagen siguiente.
//
//e.En el archivo funcionesP10 cree una función con el nombre de imprimeBarajaVertical, recibe el arreglo de las
//  cartas creadas para imprimirlas, se ve de la siguiente forma :
//
//f.En el archivo funcionesPR10_E01 cree una función con el nombre de imprimeBarajaHorizontal, recibe el arreglo de
//  las cartas creadas para imprimirlas, se ve de la siguiente forma :
//
//g.En el.Cpp debe crear la programación necesaria para que el usuario seleccione una de las opciones, tome en cuenta
// que puede seguir seleccionando opciones del menú hasta seleccionar la opción 4, la cual fue destinada para salir de
// la ejecución del programa.
//
#include "FuncionesP10.h"
using namespace std;

int main()
{
	cartas naipe;
	vector<cartas> losNaipes;
	int opcion=0;
	do
	{
		menu();
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			system("cls");
			creacionBaraja(naipe, losNaipes);
			break;
		case 2:
			system("cls");
			imprimeBarajaVertical(naipe, losNaipes);
			break;
		case 3:
			system("cls");
			imprimeBarajaHorizontal(naipe, losNaipes);
			break;
		case 4:
			system("cls");
			cout << "Tenga buen dia\n";
			break;

		default:
			cout << "Opcion no permitida.\n"
				<< "Intentelo de nuevo.\n";
			break;
		}
	} while (opcion!=4);

	return 0;
}