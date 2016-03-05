/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>


int main()
{
    int a;
    int b;

    printf("Valor de a: ");
    scanf("%d",&a);

    printf("Valor de b: ");
    scanf("%d",&b);

    printf("valor de a: %d\n", a);
    printf("valor de b: %d\n", b);

    printf("Suma: %d\n", a+b);
    printf("Resta: %d\n", a-b);
    printf("Multiplicación.: %d\n", a*b);
    printf("División: %d\n", a/b);
    printf("Módulo: %d\n", a%b);

    return 0;
}

