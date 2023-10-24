// fecha 13/11/22
// nombre Jose Campos Chaves
// descripcion 3.Conversión de horas, minutos y segundos a segundos.
// Solicite al usuario ingresar una cantidad de horas,
//  una cantidad de minutos y una cantidad de segundos, 
// y el programa debe indicar cuantos segundos representan 
// los datos ingresados. Ejemplo: 1 hora, 26 minutos y 40 segundos,
//  equivalen a 5200 segundos.
//

#include <iostream>
using namespace std;

int main()
{
    float horas;
    float minutos;
    float segundos;
    float SegundosFinales;
    cout << "Ingrese la cantidad de horas. \n";
    cin >> horas;
    cout << "Ingrese la cantidad de minutos. \n";
    cin >> minutos;
    cout << "Ingrese la cantidad de segundos. \n";
    cin >> segundos;
    horas = (horas * 60)*60;
    minutos = minutos * 60;
    SegundosFinales = horas + minutos + segundos;
    cout << "Equivalen a " << SegundosFinales << " segundos \n";
    return 0;
}

