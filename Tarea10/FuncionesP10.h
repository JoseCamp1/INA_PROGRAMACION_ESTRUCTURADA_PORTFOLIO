#include "Estructuras.h"

void menu()
{
	int opcion = 0;
	cout << "\n Seleccione una opcion\n"
		<< "\n1 - Crear Baraja\n"
		<< "\n2 - Mostrar Baraja en lineas\n"
		<< "\n3 - Mostrar Baraja en columnas\n"
		<< "\n4 - Salir\n";	
}

void creacionBaraja(cartas& naipe, vector<cartas>& losNaipes)
{
	int cont_C=1,cont_D = 1,cont_T=1,cont_P=1;
	cout << "\nBARAJA CREADA!!!\n.";

	for (int i = 0; i <= 12; i++)
	{
		naipe.numero = cont_C;
		losNaipes.insert(losNaipes.begin() + i, naipe);
		naipe.palo = "C";
		losNaipes.insert(losNaipes.begin() + i, naipe);
		cont_C++;
	}
	for (int i = 13; i <= 25; i++)
	{
		naipe.numero = cont_T;
		losNaipes.insert(losNaipes.begin() + i, naipe);
		naipe.palo = "T";
		losNaipes.insert(losNaipes.begin() + i, naipe);
		cont_T++;
	}
	for (int i = 26; i <= 38; i++)
	{
		naipe.numero =cont_D;
		losNaipes.insert(losNaipes.begin() + i, naipe);
		naipe.palo = "D";
		losNaipes.insert(losNaipes.begin() + i, naipe);
		cont_D++;
	}
	for (int i = 39; i <= 51; i++)
	{
		naipe.numero = cont_P;
		losNaipes.insert(losNaipes.begin() + i, naipe);
		naipe.palo = "P";
		losNaipes.insert(losNaipes.begin() + i, naipe);
		cont_P++;
	}
	
}

void imprimeBarajaVertical(cartas& naipe,vector<cartas>& losNaipes)
{
	cout << "\n===============================================================================\n";
	cout << "Los palos de las cartas se representaran con las iniciales de esta manera\n"
		<< "Diamantes = D, Picas = P, Corazones = C y Tréboles = T\n";
	cout << "\n===============================================================================\n";

	for (int i = 0; i <= 51; i++)
	{
		if ((i==12) || (i==25) || (i == 38) || (i == 51))
		{			
			cout << "[" << losNaipes[i].numero << losNaipes[i].palo << "]" << endl;			
		}
		else
		{		
			cout << "[" << losNaipes[i].numero << losNaipes[i].palo << "]";			
		}
		
	}
}


void imprimeBarajaHorizontal(cartas& naipe, vector<cartas>& losNaipes)
{
	cout << "\n===============================================================================\n";
	cout << "Los palos de las cartas se representaran con las iniciales de esta manera\n"
		<< "Diamantes = D, Picas = P, Corazones = C y Tréboles = T\n";
	cout << "\n===============================================================================\n";

	int cont1 = 0, cont2 = 13, cont3 = 26, cont4 = 39;
	for (int i = 0; i <= 12; i++)
	{
		
		cout << "\t[" << losNaipes[cont1].numero << losNaipes[cont1].palo << "]" << "[" << losNaipes[cont2].numero << losNaipes[cont2].palo << "]" << "[" << losNaipes[cont3].numero << losNaipes[cont3].palo << "]" << "[" << losNaipes[cont4].numero << losNaipes[cont4].palo << "]"<<endl;
		cont1++;
		cont2++;
		cont3++;
		cont4++;
	}
}