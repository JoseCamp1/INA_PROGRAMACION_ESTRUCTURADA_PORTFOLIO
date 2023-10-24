#include <iostream>
#include <string>
#include <array>
#include <algorithm>
//#include <iomanip>

using namespace std; 
///@brief Muestra la matriz
///@param matriz(int),[3][3]
void mostrarMatriz3x3(int matriz3x3[3][3]) //esta funcion muestra la matriz
{	
	cout << "\n\t****\t\tColumna1\tColumna2\tColumna3\t****\n\n";		
		for (int i = 0; i <= 2; i++)
		{
			cout << "FILA" << i+1 << "\t";
			for (int j = 0; j <= 2; j++)
			{
				cout << "\t|\t" << matriz3x3[i][j];
			}
			cout << "\t|\n";
		}	
	cout << endl << endl;	
}
///@brief Muestra la matriz
///@param matriz(int),[4][4]
void mostrarMatriz4x4(int matriz3x3[4][4]) //esta funcion muestra la matriz
{
	cout << "\n\t**\tColumna1\tColumna2\tColumna3\tColumna4\t**\n\n";
	for (int i = 0; i <= 3; i++)
	{
		cout << "FILA" << i+1 << "\t";
		for (int j = 0; j <= 3; j++)
		{
			cout << "\t|\t" << matriz3x3[i][j];
		}
		cout << "\t|\n";
	}
	cout << endl << endl;
}
///@brief Muestra si la matriz es un cuadrado magico
///@param matriz(int),[3][3]
string cuadradoMagico3x3(int matriz3x3[3][3])
{
	string respuesta = "";
	int num1=0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0;
    //filas
	num1=matriz3x3[0][0] + matriz3x3[0][1] + matriz3x3[0][2];
	
	num2=matriz3x3[1][0] + matriz3x3[1][1] + matriz3x3[1][2];
		
	num3=matriz3x3[2][0] + matriz3x3[2][1] + matriz3x3[2][2];
			
    //columnas
	num4=matriz3x3[0][0] + matriz3x3[1][0] + matriz3x3[2][0];
				
	num5=matriz3x3[0][1] + matriz3x3[1][1] + matriz3x3[2][1];
					
	num6=matriz3x3[0][2] + matriz3x3[1][2] + matriz3x3[2][2];
						
    //diagonales
	num7=matriz3x3[0][0] + matriz3x3[1][1] + matriz3x3[2][2];
							
	num8=matriz3x3[2][0] + matriz3x3[1][1] + matriz3x3[0][2];
	//condiciones que comparan las filas columnas y diagonales
	if (num1==num2 && num2 == num3 && num3 == num4 && num4 == num5 && num5 == num6 && num6 == num7)
	{
		respuesta = "Si";
	}
	else
	{
		respuesta = "No";
	}
	return respuesta; //devuelve un string
}

///@brief Muestra si la matriz es un cuadrado magico
///@param matriz(int),[4][4]
string cuadradoMagico4x4(int matriz3x3[4][4])
{
	string respuesta = "";
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, num10 = 0;
	//filas
	num1 = matriz3x3[0][0] + matriz3x3[0][1] + matriz3x3[0][2] + matriz3x3[0][3];

	num2 = matriz3x3[1][0] + matriz3x3[1][1] + matriz3x3[1][2] + matriz3x3[1][3];

	num3 = matriz3x3[2][0] + matriz3x3[2][1] + matriz3x3[2][2] + matriz3x3[2][3];

	num4 = matriz3x3[3][0] + matriz3x3[3][1] + matriz3x3[3][2] + matriz3x3[3][3];


	//columnas
	num5 = matriz3x3[0][0] + matriz3x3[1][0] + matriz3x3[2][0] + matriz3x3[3][0];

	num6 = matriz3x3[0][1] + matriz3x3[1][1] + matriz3x3[2][1] + matriz3x3[3][1];

	num7 = matriz3x3[0][2] + matriz3x3[1][2] + matriz3x3[2][2] + matriz3x3[3][2];

	num8 = matriz3x3[0][3] + matriz3x3[1][3] + matriz3x3[2][3] + matriz3x3[3][3];

	//diagonales
	num9 = matriz3x3[0][0] + matriz3x3[1][1] + matriz3x3[2][2] + matriz3x3[3][3];

	num10 = matriz3x3[3][0] + matriz3x3[2][1] + matriz3x3[1][2] + matriz3x3[0][3];
	
	//condiciones que comparan las filas columnas y diagonales
	if (num1 == num2 && num2 == num3 && num3 == num4 && num4 == num5 && num5 == num6 && num6 == num7 && num7 == num8 && num8 == num9 && num9 == num10)
	{
		respuesta = "Si";
	}
	else
	{
		respuesta = "No";
	}
	return respuesta;//devuelve un string
}