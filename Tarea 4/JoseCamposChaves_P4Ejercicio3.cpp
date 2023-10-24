// Fecha de Creacion:18/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:18/11/22
// Descripcion:3.	A los trabajadores de una constructora le pagan según
// las horas trabajadas por cada semana. Si la cantidad de horas semanales
// es mayor a 40, el monto ganado por hora se incrementa en un 50% para las
// horas extras. Realice un programa en C++ que se encargue de calcular y 
// mostrar el salario bruto de 10 trabajadores, para lo cual debe solicitar 
// el nombre del empleado, el salario por hora, el cual debe ser entre 1000 y 3000,
//  y las horas semanales trabajadas, las cuales deben estar entre 30 y 50. 
// Solicite los datos de un empleado, los muestra y luego solicita los datos
//  del siguiente empleado, hasta completar la planilla de los 10 colaboradores.
// Utilice las instrucciones IF, FOR, WHILE y DO – WHILE.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	float salarioBruto=0,salarioxHora=0,salariohExtra,preciohoraExtra;
	int horas_semTrabajadas=0,horaExtra;
	string nombre="";
	bool bandera=false;
	for (int i = 0; i <= 9; i++)
	{
		do
		{

			cout << "Digite el nombre del empleado.\n";
			cin >> nombre;
			//system("pause");
			cout << "\nDigite el salario por hora del empleado.(entre $1000 y $3000)\n";
			cin >> salarioxHora;
			//system("pause");
			if (salarioxHora < 1000 && salarioxHora>3000)
			{
				cout << "\nNo digito un salario valido\n"
					<< "\nIntentelo nuevamente\n";
			}
			else
			{
				bandera = true;
			}
			cout << "\nDigite las horas semanales trabajadas del empleado.(entre 30h y 50h)\n";
			cin >> horas_semTrabajadas;
			//system("pause");
			if (horas_semTrabajadas < 30 && salarioxHora>50)
			{
				cout << "\nNo digito una cantidad de horas trabajadas validas\n"
					<< "\nIntentelo nuevamente\n";
			}
			else
			{
				bandera = true;
			}
		} while (bandera = false);

		if (horas_semTrabajadas > 40)
		{
			horaExtra = horas_semTrabajadas - 40;
			preciohoraExtra = salarioxHora * 0.50;
			salariohExtra = (preciohoraExtra + salarioxHora) * horaExtra;
			salarioBruto = (salarioxHora * 40) + salariohExtra;
		}
		else
		{
			salarioBruto = (salarioxHora * 40);
		}
		cout << "\n========================================================================\n";
		cout << "\nNombre: " << nombre <<"\t" << " SalarioBruto: $" << salarioBruto << "\n"
			<<"Horas semanales trabajadas: "<<horas_semTrabajadas<<"\t"<<" Salario por hora: $"<<salarioxHora<<"\n"
			<<"Horas extra trabajadas: "<<horaExtra<<"\t" << " Salario por hora extras: " << salariohExtra << "\n";
		cout << "\n========================================================================\n";
		system("pause");
	}
	return 0;
}