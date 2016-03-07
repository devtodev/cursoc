/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int main()
{
    int valorASumar;
    int resultadoSuma;

    resultadoSuma = 0; //inicializo la variable

    printf("Ingrese un valor a sumar (0 significa fin): ");
    scanf("%d",&valorASumar);

    while (valorASumar != 0)
    {
    	resultadoSuma += valorASumar;

        printf("Ingrese un valor a sumar (0 significa fin): ");
        scanf("%d",&valorASumar);
    }

    printf("El resultado de la suma es: %d",resultadoSuma);

    return 0;
}

