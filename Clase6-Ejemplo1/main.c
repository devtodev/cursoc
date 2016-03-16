/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int suma(int paramA, int paramB);

int main()
{
	int valorA, valorB;

   printf("Ingrese un valor a sumar\n");
   scanf("%d", &valorA);

   printf("Ingrese otro valor a sumar\n");
   fflush(stdout);
   scanf("%d", &valorB);

   printf("El resultado es: %d",suma(  valorA  ,  valorB  ));
   fflush(stdout);

   return 0;
}

int suma(int paramA, int paramB)
{
	int resultado;

	resultado = paramA + paramB;

	return resultado;
}
