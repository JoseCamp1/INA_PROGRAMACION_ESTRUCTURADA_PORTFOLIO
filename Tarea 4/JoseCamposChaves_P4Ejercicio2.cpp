// Fecha de Creacion :17/11/22
// Nombre: Jose Campos Chaves
// fecha de ultima modificacion:18/11/22
// Descripcion:2.Hacer un programa en C++ que solicite al usuario 
// ingresar un número entre 5 y 20 (cantN), el cual representará 
// la cantidad de números que se van a mostrar en pantalla como salida. 
//PERMITA AL USUARIO ESCOGER ENTRE UNA DE LAS SIGUIENTES OPCIONES :
//1)ESCRIBA “CANTN” NÚMEROS PARES DE FORMA DESCENDENTE A PARTIR DEL 100.
//2)ESCRIBA LOS “CANTN” PRIMEROS MÚLTIPLOS DEL 7.
//3)MUESTRE EL RESULTADO DE SUMAR LOS “CANTN” NÚMEROS CONSECUTIVOS A PARTIR DEL 5
//4)SALIR
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int cantN,opcion,cont=0,suma=0,i;
	do
	{
		cout << "\nIngrese un numero entre 5 y 20\n";
		cin >> cantN;
		if (cantN < 5 || cantN>20)
		{
			cout << "\ningreso un numero invalido vuelvalo a intentar\n";
		}

	} while (cantN < 5 || cantN>20);
	cout << "\nElija una opcion\n"
		<< "\n1)ESCRIBIR " << cantN << " NÚMEROS PARES DE FORMA DESCENDENTE A PARTIR DEL 100.\n"
		<< "\n2)ESCRIBIR LOS " << cantN << " PRIMEROS MÚLTIPLOS DEL 7.\n"
		<< "\n3)MUESTRAR EL RESULTADO DE SUMAR LOS " << cantN << " NÚMEROS CONSECUTIVOS A PARTIR DEL 5\n"
		<< "\n4)SALIR\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:		
		for (int i = 100; i > 1; i--)
		{
			if (i%2==0)
			{
				cout << i<<", ";
				cont = cont++;
				if (cont==cantN)
				{
					break;
				}
			}
		}
		cout << "\n";
		break;

	case 2:
		for (int i = 0; i <= cantN; i++)
		{
			cout << 7 * i << ", ";
		}
		break;

	case 3:
		
		
		i = 5;
		while (cont!=cantN)
		{			
			suma = suma + i;
			cont = cont++;
			i = i++;
		}		
		cout << "\nLa suma de los numeros consecutivos es: "<<suma<<endl;
	   break;

	case 4:
		cout << "Tenga un buen dia. :)";
		break;


	default:
		break;
	}
	return 0;
}