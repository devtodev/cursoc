/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int funcion(int *parametroRef);

int main()
{
	int valorActual;
	valorActual = 8;

	printf("%d\n",funcion(&valorActual));

	printf("%d\n",valorActual);
	return 0;
}

int funcion(int *parametroRef)
{
	*parametroRef = *parametroRef + 8;
	return *parametroRef;
}
