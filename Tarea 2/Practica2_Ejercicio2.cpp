// fecha 13/11/22
// nombre Jose Campos Chaves
// descripcion 2.	Los empleados de una tienda reciben un salario base mensual, 
// más un 10% por comisión sobre las ventas realizadas mensualmente. 
// Realice un programa en C++ que calcule el salario bruto del empleado. 
//

#include <iostream>
using namespace std;

int main()
{
    float salario;
    float comision;
    float salarioBruto;
    cout << "Digite el salario mensual \n";
    cin >> salario;
    cout << "Digite el total de las ventas realizadas en este mes \n";
    cin >> comision;
    comision = comision * 0.10;
    salarioBruto = salario + comision;
    cout << "El salario bruto del empleado es: " << salarioBruto << "\n";
    return 0;
}
