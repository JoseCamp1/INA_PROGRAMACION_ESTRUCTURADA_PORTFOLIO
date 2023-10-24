// Fecha de Creacion: 13/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion: 6.	Dados 12 salarios de un trabajador, determine cuál es el monto de aguinaldo que le corresponde.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	float salario;
	float aguinaldo;
	float suma=0;
	cout << "Digite los salarios que recibio de uno en uno.\n";
	for (int i = 0; i < 12; i++)
	{
		cin >> salario;
		suma = salario+suma;
	}
	aguinaldo = suma / 12;
	cout << "El aguinaldo del trabajador es: " << aguinaldo << "\n";
	return 0;
}