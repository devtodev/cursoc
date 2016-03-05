/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */


#include <stdio.h>

#define VERDADERO 1
#define FALSO 0

int main()
{
    int resultado;

    resultado = VERDADERO && VERDADERO; //Verdadero
    resultado = VERDADERO && FALSO;     //Falso
    resultado = FALSO && FALSO;         //Falso

    resultado = VERDADERO || VERDADERO;  //Verdadero
    resultado = VERDADERO || FALSO;      //Verdadero
    resultado = FALSO || FALSO;          //Falso

    resultado = !VERDADERO;              //Falso
    resultado = !FALSO;                  //Verdadero

    return 0;
}

