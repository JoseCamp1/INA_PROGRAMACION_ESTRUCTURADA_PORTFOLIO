int mayoroIgual(int num1, int num2)
{
	int respuesta;
	if (num1==num2)
	{
		respuesta = 0;
	}
	else if (num1>num2)
	{
		respuesta = num1;
	}
	else if (num2>num1)
	{
		respuesta = num2;
	}
	return respuesta;
}

float promedio(int nota1, int nota2, int nota3)
{
	float promediode3Numeros;
	promediode3Numeros = (nota1 + nota2 + nota3) / 3;
	return promediode3Numeros;
}

int sumatoria(int num)
{
	int suma = 0;
	for (int i = 10; i <= num; i++)
	{
		suma = suma + i;

	}
	return suma;
}

bool aumentoSalarial(float &salario, float ahnostrabajados)
{
	bool bandera = false;
	float porcentajeAumento = 0;
	if (ahnostrabajados>5)
	{
		porcentajeAumento = salario * 0.06;
		salario = salario + porcentajeAumento;
		bandera = true;
	}
	else
	{
		bandera = false;
	}
	return bandera;
}