/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int main()
{
    int contador;
    int cantidadTotalValoresASumar;
    int valorASumar;
    int resultadoSuma;

    printf("Ingrese la cantidad de números a sumar: ");
    scanf("%d",&cantidadTotalValoresASumar);

    resultadoSuma = 0;

    for (contador = 0; contador < cantidadTotalValoresASumar; contador++)
    {
    	printf("Ingrese un valor a sumar: ");
    	scanf("%d",&valorASumar);

    	resultadoSuma += valorASumar;
    }

    printf("El resultado de la suma es: %d",resultadoSuma);

    return 0;
}

