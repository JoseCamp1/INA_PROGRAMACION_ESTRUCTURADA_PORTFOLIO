// Fecha de Creacion:15/11/22
// Nombre: Jose Campos Chaves
// Fecha de ultima modificacion:
// Descripcion:4.	Escriba un programa que solicite el tamaño de un archivo 
// (valor y unidad de medida) y realice la conversión a las otras unidades.
// Trabaje sólo con KB, MB y GB.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int unidaddeMedida;
	float valor,KB,MB,GB;
	cout << "\nDigite el tamano del archivo ya sean KB o MB o GB: \n";
	cin >> valor;
	cout << "\nElija la unidad de medida del archivo: \n"
		<< "1.KB\n"
		<< "2.MB\n"
		<< "3.GB\n"
		<< "4.Salir\n";
	cin >> unidaddeMedida;
	switch (unidaddeMedida)
	{
	case 1:
		KB = valor;
		MB = valor / 1024;
		GB = MB / 1024;
		cout << "\nLa conversion de:" << setprecision(8) << valor <<"KB es: " << "\t"  << MB << "MB" <<"\t" << GB << "GB" << "\n";
		break;

	case 2:
		KB = valor * 1024;
		MB = valor;
		GB = MB / 1024;
		cout << "\nLa conversion de:" << setprecision(8) << valor << "MB es: " << "\t"  << KB << "KB" << "\t" << GB << "GB" << "\n";
		break;

	case 3:
		KB = ((valor*1024)*1024);
		MB = valor * 1024;
		GB = valor;
		cout << "\nLa conversion de:" << setprecision(8) << valor << "GB es: " << "\t"  << KB << "KB" << "\t" << MB << " MB" << "\n";
		break;

	case 4:
		cout << "Tenga un buen dia.";
		break;

	default:
		break;
	}

	return 0;
}