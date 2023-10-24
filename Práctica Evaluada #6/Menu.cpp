// Fecha de Creacion:21/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:22/11/22
// Descripcion:
//

#include <iostream>
#include <string>
#include"Funciones.h"
//#include <iomanip>

using namespace std;

int main()
{
	int opciones = 0, num1 = 0, num2 = 0, inciar1 = 0, cont = 0, nota1 = 0, nota2 = 0, nota3 = 0, numSumatoria = 0, cont2 = 0,inciar3=0,cont4=0;
	float iniciar2 = 0,salarioBase=0,ahnosLaborados=0;
	bool iniciar4 = false;
	do
	{
		system("cls");
		cout << "\nElija una de las siguientes opciones: \n"
			<< "\n1-Obtener el número mayor\n"
			<< "\n2-Obtener Promedio\n"
			<< "\n3-Obtener la sumatoria\n"
			<< "\n4-Calcular aumento salarial\n"
			<< "\n5-Salir.\n";
		cin >> opciones;
		switch (opciones)
		{
		case 1:
			system("cls");
			cout << "Ingrese el primer numero\n";
			cin >> num1;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "\n!!!Dato invalido!!!\n";
				cin >> num1;
			}			
			cout << "Ingrese el segundo numero\n";
			cin >> num2;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "\n!!!Dato invalido!!!\n";
				cin >> num1;
			}
			inciar1 = mayoroIgual(num1, num2);
			cout << "\nEl numero mayor es : " << inciar1 << endl;
			cout << "\nNOTA:Si el numero es igual a 0 es porque los numeros ingresados son iguales.\n" << endl;
			system("pause");
			break;

		case 2:
			system("cls");
			do
			{
				cout << "\nIngrese 3 notas,solo se admiten notas entre 0 a 100.\n";
				cout << "\nIngrese su primer nota\n";
				cin >> nota1;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "\n!!!Dato invalido!!!\n";					
					cin >> nota1;
				}
				if (nota1>=0 && nota1<=100)
				{
					cont = cont++;
				}
				else
				{
					cout << "No es una nota valida\n"
						<<"Vuelva a intentarlo\n";
				}
				cout << "\nIngrese su segunda nota\n";
				cin >> nota2;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "\n!!!Dato invalido!!!\n";					
					cin >> nota2;
				}
				if (nota2 >= 0 && nota2 <= 100)
				{
					cont = cont++;
				}
				else
				{
					cout << "No es una nota valida\n"
						<< "Vuelva a intentarlo\n";
				}
				cout << "\nIngrese su tercer nota\n";
				cin >> nota3;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "\n!!!Dato invalido!!!\n";					
					cin >> nota3;
				}
				if (nota3 >= 0 && nota3 <= 100)
				{
					cont = cont++;
				}
				else
				{
					cout << "No es una nota valida\n"
						<< "Vuelva a intentarlo\n";
				}
				cout << "\nLas Notas son: " << nota1 << ", " << nota2 << ", " << nota3<<endl;
				iniciar2 = promedio(nota1, nota2, nota3);
				cout << "\nEl promedio de las 3 notas es: " << iniciar2 << endl << endl;

			} while (cont<3);
			system("pause");
			break;
		case 3:
			system("cls");
			do
			{
				cout << "\nIngrese un numero mayor o igual 10\n";
				cin >> numSumatoria;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "\n!!!Dato invalido!!!\n";					
					cin >> nota3;
				}
				if (numSumatoria >= 10)
				{
					cont2 = cont2++;
				}
				else
				{
					cout << "Dato invalido vuelva a intentarlo.\n";
				}
			} while (cont2!=1);
			inciar3 = sumatoria(numSumatoria);
			cout << "\nLa sumatoria es: " << inciar3 << endl<< endl;
			system("pause");
			break;
			
		case 4:
			system("cls");
			do
			{
				cout << "\nIngrese su salario base: \n$";
				cin >> salarioBase;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "\n!!!Dato invalido!!!\n";
					cin >> salarioBase;
				}
				else
				{
					cont4 = cont4++;
				}
				cout << "\nIngrese los ahnos laborados: \n";
				cin >> ahnosLaborados;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "\n!!!Dato invalido!!!\n";
					cin >> ahnosLaborados;
				}
				else
				{
					cont4 = cont4++;
				}
			} while (cont4<2);
			cout << "\nVeremos si aplica o no para un posible aumento de salario!\n"
				<<"Salario actual: "<<salarioBase<<" ahnos trabajados: "<<ahnosLaborados << endl;
			iniciar4 = aumentoSalarial(salarioBase, ahnosLaborados);
			cout << "\nAplica para un aunmento (si=1/no=0) : " << iniciar4<<endl;
			cout << "\nNuevo salario: " << salarioBase << endl;
			system("pause");
			break;

		case 5:
			cout << "El programa finalizara\n"
				<<"Tenga buen dia";
			break;

		default:
			break;
		}

	} while (opciones!=5);





	return 0;
}