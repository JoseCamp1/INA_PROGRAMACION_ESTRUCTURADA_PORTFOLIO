#include <iostream>
#include <array>
using namespace std;

///@brief Muestra el array
///@param array(int),[100]
void mostrarArray(array<int, 100> arregloVentas) //esta funcion muestra el array
{
	for (int i = 1; i <= 99; i++)	{
		
		cout << " | " << i + 1 << ", " << arregloVentas[i];		
	}
	cout << " | ";

}