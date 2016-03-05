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

    printf("Ingrese un valor a comprar\n");

    scanf("%d", &valor);

    if (valor > 5)
    {
        printf("El valor ingresado es mayor que 5\n");
    }
    else
    {
        printf("El valor ingresado es menor o igual que 5\n");
    }

    return 0;
}

