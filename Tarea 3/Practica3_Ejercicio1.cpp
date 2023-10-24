// Fecha de Creacion:15/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:15/11/22
// Descripcion:1.	Escriba un programa que genere la siguiente salida
// (utilice manipuladores de entrada/salida) (Ejemplo: \n, \t, otros). 
// Puede solicitar los datos al usuario, o puede hacer que
// el programa genere los códigos de los estudiantes y sus promedios.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nombre;
	int cantidad;
	float nota1;
	float nota2;
	float nota3;
	float promedio;
	cout << "Digite la cantidad de alumnos que desea evaluar: \n";
	cin >> cantidad;
	
	for (int i = 1; i <= cantidad; i++)
	{
		cout << "Digite la primer nota del alumno \n";
		cin >> nota1;
		cout << "Digite la segunda nota del alumno \n";
		cin >> nota2;
		cout << "Digite la tercer nota del alumno \n";
		cin >> nota3;
		promedio = (nota1 + nota2 + nota3) / 3;
		cout << "Estudiante" << "\t" << "Promedio\n";
		cout << i << "\t" "\t" << promedio << "\n";
	}
	return 0;
}