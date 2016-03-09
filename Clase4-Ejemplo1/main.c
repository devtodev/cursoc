/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

char a;
int	b;
float c;
double d;

int main()
{
	printf("Tamaño de distintos tipos de datos \n");
	printf("char: %d\n", sizeof(a));
	printf("int: %d\n", sizeof(b));
	printf("float: %d\n", sizeof(c));
	printf("double: %d\n", sizeof(d));

	return 0;
}

