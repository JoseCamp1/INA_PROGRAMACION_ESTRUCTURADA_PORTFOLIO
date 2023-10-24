#include <iostream>
#include <array>
using namespace std;
void mostrarArray(array<float, 10> arregloVentas) //esta funcion muestra el array
{

	for (int i : arregloVentas)
	{
		cout << " | " << i;
	}
	cout << " | ";
}

