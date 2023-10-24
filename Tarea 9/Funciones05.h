#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;



//@brief \e Rellena un vector con strings 
//@param \b First vector <string>
//@return \b Vector por parametro
void llenarVector(vector<string>& vectorA)
{
	int opcion = 0, num = 0;
	string nombres = "";
	int tamanio;

	cout << "Cuantos nombres desea ingresar: \n";
	cin >> tamanio;
	for (int i = 0; i < tamanio; i++)
	{
		cout << "\nIngrese un nombre.\nNombre:";
		cin >> nombres;
		vectorA.insert(vectorA.end(), nombres);
	}
}

//@brief \e Funcion: muestra un vector lleno con strings 
//@param \b First vector <string>
//@return \b Vector por parametro
void mostrarVector(vector<string>& vectorA)
{
	for (auto& i : vectorA)
	{
		cout << " | " << i;
	}
	cout << " | " << "\n\n";
}

//@brief \e Ordena un vector lleno con strings 
//@param \b First vector <string>
//@return \b vector por parametro
void ordenarVector(vector<string>& vectorA)
{
	sort(vectorA.begin(), vectorA.end());
}


//@brief \e Busca en un vector lleno con strings un string espefico 
//@param \b First vector <string>
//@param \b Second string
//@return \b Bool
bool buscarenelVector(vector<string>& vectorA, string nombre)
{
	bool respuesta = false;
	respuesta = binary_search(vectorA.begin(), vectorA.end(), nombre);
	return respuesta;
}

//@brief \e Elimina del vector lleno con strings el string en la primera posicion 
//@param \b First vector <string>
//@return \b Vector por parametro
void eliminarprimerodelVector(vector<string>& vectorA)
{
	vectorA.erase(vectorA.begin() + 0);
}

//@brief \e Elimina del vector lleno con strings el string en la primera posicion 
//@param \b First vector <string>
//@return \b Vector por parametro
void eliminarultimodelVector(vector<string>& vectorA)
{
	vectorA.erase(vectorA.end() - 1);
}

//@brief \e Muestra un menu de opciones. 
//@return \b Int
int buscarenelVector()
{
	int respuesta = 0;
	cout << "\nDigite una de las siguientes opciones:\n"
		<< "\n1. Crear una lista de nombres. \n"
		<< "\n2. Mostrar la lista de nombres. \n"
		<< "\n3. Ordenar la lista de nombres. \n"
		<< "\n4. Buscar un nombre en la lista de nombres. \n"
		<< "\n5. Eliminar el primer nombre de la lista de nombres. \n"
		<< "\n6. Eliminar el ultimo nombre de la lista de nombres. \n"
		<< "\n7  Salir. \n";
	cin >> respuesta;
	return respuesta;
}
