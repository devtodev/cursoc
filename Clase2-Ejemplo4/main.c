/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int main()
{
    int resultado;


    resultado = 2 > 3;  //Falso
    resultado = 3 > 2;  //Verdadero
    resultado = 3 < 2;  //Falso
    resultado = 3 <= 2; //Falso
    resultado = 3 >= 2; //Verdadero
    resultado = 5 == 3; //Falso
    resultado = 5 != 3; //Verdadero

    return 0;
}

