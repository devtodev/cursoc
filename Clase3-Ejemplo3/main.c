/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int main()
{
    int valor;

    printf("Ingrese un valor: ");
    scanf("%d",&valor);

    switch (valor)
    {
    	case 1 : printf("El valor es 1\n"); break;

    	case 2 : printf("El valor es 2\n"); break;

    	case 3 : printf("El valor es 3\n"); break;

    	default:
    		printf("El valor no es 1, 2, ni 3\n");
    }

    return 0;
}

