#include <iostream>
#include <array>
using namespace std;
///@brief Muestra el array
///@param array(float),[10]
void mostrarArray(array<float, 10> arregloVentas) //esta funcion muestra el array
{

	for (int i : arregloVentas)
	{
		cout << " | " << i;
	}
	cout << " | ";
}

