/*
 * main.c
 *
 *  Created on: 30 de mar. de 2016
 *      Author: alejandro
 */
#include <stdio.h>

int main()
{
	char palabra[200];
	int i, contador;

	printf("Ingrese la palabra a la que se contaran las ocurrenicas de 's' \n");
	scanf("%s",palabra);

	i=0;
	contador = 0;
	while (palabra[i]!= 0)
	{
		if (palabra[i] == 's')
		{
			contador++;
		}
		i++;
	}

	if (contador > 0)
	{
		printf("La palabra contiene %d veces la letra 's'",contador);
	}
	else
	{
		printf("La palabra NO contiene letra 's'");
	}

	return(0);

}
