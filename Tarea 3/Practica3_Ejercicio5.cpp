// Fecha de Creacion:15/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:5.	Cálculo de Planilla intermedia para un empleado. PD: muy largo para agregar todo el problema.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string nombre;
	string apellido1;
	string apellido2;
	float salariobaseMensual;
	int horasExtra;
	int horasDobles;
	float montohoraOrdinaria;
	float precio1horaExtra;
	float montohoraExtra;
	float precio1horaDoble;
	float montohoraDoble;
	float salarioBruto;
	float salarioNeto;
	float CCSS;
	int anosLaborados;
	int distanciaKm;
	int anulidades=0;
	int traslado=0;
	float incentivo_Horasdobles=0;
	float pensiones_IVM;
	float bancoPopular;
	float renta=0;
	float capitalizacion;
	float exceso;

	cout << "\nEscriba el nombre del empleado. \nNombre:";
	cin >> nombre;
	cout << "\nEscriba el primer apellido del empleado. \nApellido:";
	cin >> apellido1;
	cout << "\nEscriba el segundo apellido del empleado. \nApellido2:";
	cin >> apellido2;
	cout << "\nEscriba el Salario base mensual del empleado. \n$";
	cin >> salariobaseMensual;
	cout << "\nEscriba la cantidad de horas extra trabajadas del empleado este mes. \nHoras:";
	cin >> horasExtra;
	cout << "\nEscriba la cantidad de horas dobles trabajadas del empleado este mes. \nHoras:";
	cin >> horasDobles;
	cout << "\nEscriba la cantidad de ahnos laborados en la empresa. \nahnos:";
	cin >> anosLaborados;
	cout << "\nEscriba la distancia que existe de la casa de habitacion del empleado al trabajo. \nKm:";
	cin >> distanciaKm;	
	
	montohoraOrdinaria = salariobaseMensual / 192;
	//Incentivos:
	if (anosLaborados > 5)
	{
		anulidades = anosLaborados * 2000;
	}
	if (distanciaKm > 10)
	{
		traslado = 50000;
	}
	if (horasExtra > 10)
	{
		precio1horaExtra = montohoraOrdinaria * 1.5;
		montohoraExtra = (horasExtra * precio1horaExtra)+15000;
	}
	else
	{
		precio1horaExtra = montohoraOrdinaria * 1.5;
		montohoraExtra = horasExtra * precio1horaExtra;
	}
	if (horasDobles > 10)
	{
		incentivo_Horasdobles = horasDobles * 5000;
		precio1horaDoble = montohoraOrdinaria * 2;
		montohoraDoble = (horasDobles * precio1horaDoble)+incentivo_Horasdobles;
	}
	else
	{
		precio1horaDoble = montohoraOrdinaria * 2;
		montohoraDoble = horasDobles * precio1horaDoble;
	}
	salarioBruto = salariobaseMensual + montohoraExtra + montohoraDoble + anulidades + traslado;
    //Deducciones:
	if (salarioBruto>500000)
	{
		exceso = salarioBruto - 500000;
		renta = exceso * 0.10;
		salarioBruto = salarioBruto - renta;
	}
	if (anosLaborados<10)
	{
		capitalizacion = salarioBruto * 0.03;
		salarioBruto = salarioBruto - capitalizacion;
	}
	if (horasDobles==0 || horasExtra==0)
	{
		salarioBruto = salarioBruto - 1000;
	}
	CCSS = salarioBruto * 0.0925;
	pensiones_IVM = salarioBruto * 0.0525;
	bancoPopular = salarioBruto * 0.0050;
	salarioNeto = salarioBruto - CCSS - pensiones_IVM - bancoPopular;

	cout << "\n================================================================================\n\n";
	cout << "Nombre: " << nombre << " " << apellido1 << " " << apellido2 << "\n";
	cout <<setprecision(8)<<fixed<<setprecision(2) << "Salario mensual: $" << salariobaseMensual << "\n"
		<<"\nIncentivos:\n"
		<< "\nHoras extra trabajadas: " << horasExtra <<"\t"<< "Pago por horas extra trabajadas : $" << montohoraExtra << "\n"
		<< "\nHoras dobles trabajadas: " << horasDobles << "\t" << "Pago por horas dobles trabajadas: $" << montohoraDoble << "\n"
		<< "\nDistancia al trabajo: " << distanciaKm <<" Km" << "\t" << "Insentivo por concepto de traslado: $" << traslado << "\n"
		<< "\nAhnos laborados: " << anosLaborados << "\t" << "anualidades: $" << anulidades << "\n"
		<< "\nSalario bruto: $" << salarioBruto << "\n"

		<<"\nDeducciones:\n"
		<< "\nC.C.S.S: $" << CCSS << "\t" << "Pensiones e IVM: $" << pensiones_IVM << "\n"
		<< "\nBancoPopular: $" << bancoPopular << "\t" << "Impuesto a la Renta: $" << renta << "\n"
		<< "\nCapitalizacion: $" << capitalizacion << "\n"
		<< "\nSalario Neto: $" << salarioNeto << "\n";
	cout << "\n================================================================================\n";
	return 0;
}