// fecha 12/11/22
// nombre Jose Campos Chaves
// descripcion 1.Realice un programa en C++ para determinar 
// el área en metros cuadrados de un terreno rectangular cuyo frente y 
// fondo se dan en pies. Solicite los datos de frente y fondo, 
// el sistema debe mostrar el área en m2.  
//

#include <iostream>
using namespace std;

int main()
{
    float frente;
    float fondo;
    float area;
    cout << "Digite el frente del terreno en pies\n ";
    cin >> frente;
    cout << "Digite el fondo del terreno en pies\n ";
    cin >> fondo;
    frente = frente * 0.3048;
    fondo = fondo * 0.3048;
    area = frente * fondo;
    cout << "El area en metros cuadrados es: " << area;
    return 0;
}
