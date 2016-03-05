/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int main()
{
    printf("Este es el ejemplo 1");

    printf("del curso de C.\n");

    fflush(stdout); //necesario para ver correctamente al depurar

    printf("Luego vendrá el ejemplo %d\n", 2);

    fflush(stdout); //necesario para ver correctamente al depurar

    return 0;
}

