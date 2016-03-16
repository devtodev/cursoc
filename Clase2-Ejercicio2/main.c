/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int main()
{
    int precio;

    printf("Ingrese el valor del precio: \n");
    scanf("%d",&precio);

    if ((precio > 1000) && (precio < 5000))
    {
        precio = precio * 0.90;
    }
    else
    {
        if (precio>5000)
        {
            precio = precio * 0.85;
        }
    }

    printf("El precio a abonar es: %d\n", precio);

    return 0;
}

