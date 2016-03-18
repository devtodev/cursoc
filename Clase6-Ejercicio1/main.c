/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

unsigned long factorial(unsigned int valor);

int main()
{
	unsigned int m,n;
	unsigned long combinacion, variacion, permutacion;

	printf("Esta aplicación calcula la combinación, variación, y permutación\n");
	printf("Ingrese el valor de m: ");
	scanf("%d", &m);

	printf("Ingrese el valor de n: ");
	scanf("%d", &n);

	variacion = factorial(m) / factorial(m-n);

	combinacion = factorial(m) / (factorial(n) * factorial(m-n));

	permutacion = factorial(n);

	printf("variacion: %lu\n",variacion);
	printf("combinacion: %lu\n",combinacion);
	printf("permutacion: %lu\n",permutacion);

	return 0;
}

unsigned long factorial(unsigned int valor)
{
	long resultado;
	resultado = valor;
	valor--;
	while (valor > 1)
	{
		resultado = resultado * valor;
		valor --;
	}
	return resultado;
}
