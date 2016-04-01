/*
 * main.c
 *
 *  Created on: 30 de mar. de 2016
 *      Author: alejandro
 */
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int esPrimo(int valor);

int main()
{
	int n,i, contadorPrimosEncontrados;

	printf("Ingrese el valor de 'n' \n");
	scanf("%d",&n);

	printf("Los primeros %d números primos a partir de 1 son: \n", n);
	i = 1;
	contadorPrimosEncontrados = 0;
	while (contadorPrimosEncontrados<n)
	{
		if (esPrimo(i) == TRUE)
		{
			printf("%d ",i);
			contadorPrimosEncontrados++;
		}
		i++;
	}

	return(0);
}

int esPrimo(int valor)
{
	int cantidadDivisores, auxiliar, resultado;
	cantidadDivisores = 0;
	for (auxiliar = 1;auxiliar< valor;auxiliar++)
	{
		if ((valor % auxiliar)==0)
		{
			cantidadDivisores++;
		}
	}
	if (cantidadDivisores < 2)
	{
		resultado = TRUE;
	}
	else
	{
		resultado = FALSE;
	}

	return(resultado);
}
