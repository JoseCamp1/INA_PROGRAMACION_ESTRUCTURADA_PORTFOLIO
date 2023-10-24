// Fecha de Creacion:15/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:15/11/22
// Descripcion:2.	Para que un estudiante apruebe un curso deben tomar en cuenta los siguientes criterios
//Nota	               Ausencias		Estado
//Menor a 60			                Reprobó
//Mayor o igual a 2		                Reprobó
//Mayor o igual a 70	Menor a 2		Aprobó
//Entre 60 y 69	        Menor a 2       Aplazó
//Tomando en cuenta las condiciones anteriores escriba un programa en C++ que se 
//encargue de solicitar la nota y las ausencias de un estudiante y determine su Estado.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int nota, ausencias;
	cout << "\nDigite la nota del estudiante: \n";
	cin >> nota;
	cout << "\nDigite el numero de ausencias del estudiante \n";
	cin >> ausencias;
	if (ausencias>=2 || nota<60)
	{
		cout <<"\nNota: " <<nota<<" Ausencias: "<< ausencias <<" Estado: " << " Reprobo";
	}
	else if (nota > 59 && nota < 70)
	{
		cout << "\nNota: " << nota << " Ausencias: " << ausencias << " Estado: " << " Aplazo";
	}
	else
	{
		cout << "\nNota: " << nota << " Ausencias: " << ausencias << " Estado: " << " Aprobo";
	}
	return 0;
}