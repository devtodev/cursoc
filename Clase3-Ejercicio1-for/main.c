/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

#define PRECIO_COMIENZO_DESCUENTO	1500

int main()
{
    int contador, cantidadTotalDeProdutos, valorProducto;
    int resultadoSumaNeta, descuento, sumaDescuento;

    printf("Ingrese la cantidad de productos: ");
    scanf("%d",&cantidadTotalDeProdutos);

    resultadoSumaNeta = 0;
    sumaDescuento = 0;

    contador = 0;
    while (contador < cantidadTotalDeProdutos)
    {
    	printf("Ingrese el precio del producto %d: ",contador);
    	scanf("%d",&valorProducto);

    	if (valorProducto >= PRECIO_COMIENZO_DESCUENTO)
    	{
    		descuento = valorProducto * 0.1;
    		resultadoSumaNeta += valorProducto - descuento;
    		sumaDescuento += descuento;
    	}
    	else
    	{
    		resultadoSumaNeta += valorProducto;
    	}
    	contador++;
    }

    printf("El total neto a abonar es: $%d\n",resultadoSumaNeta);
    printf("El descuento aplicado es de: $%d\n",sumaDescuento);

    return 0;
}

