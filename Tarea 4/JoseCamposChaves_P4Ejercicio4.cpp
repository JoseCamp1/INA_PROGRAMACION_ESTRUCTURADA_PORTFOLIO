// Fecha de Creacion:18/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:18/11/22
// Descripcion:4.	Cree un programa en C++ que realice el siguiente ejercicio con dados. 
//El ejercicio consiste en que el jugador introduzca el puntaje resultante de lanzar 2
//  dados(puntuaciones de 2 a 12) y el programa debe indicar cuales son todas las posibles 
// combinaciones de los dados para obtener dicho puntaje.Por ejemplo, el puntaje 5 se logra
//  con las siguientes tres combinaciones : 1 + 4, 2 + 3, 3 + 2 y 4 + 1.
//Escriba un programa que pregunte al usuario un puntaje, y muestre como
//resultado la cantidad de combinaciones de dados con las que se puede obtener ese puntaje.
//Permita al usuario jugar cuantas veces lo desee.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


using namespace std;

int main()
{
	bool bandera = false;
	while (bandera==false)
	{
		int num = 0, opcion = 0;
		cout << "\nDigite un numero entre 2 y 12 para descrubir las posibles combinaciones de dados para obtener ese numero.\n";
		cin >> num;
		cout << "\nLas combinaciones de dados son:\n";
		for (int i = 1; i < 6; i++)
		{
			for (int j = 1; j < 6; j++)
			{
				if (i + j == num)
				{
					cout << "\n" << i << " + " << j << " = " << num << "\n";
				}
			}
		}
		cout << "\n\nDesea jugar de nuevo? (1). si (2). no\n";
		cin >> opcion;
		if (opcion == 2)
		{
			bandera = true;
		}
		else
		{
			bandera = false;
		}
		
	}

		


	
	






	return 0;
}