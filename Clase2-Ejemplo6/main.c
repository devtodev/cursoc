/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */


#include <stdio.h>

int main()
{
    unsigned char resultado;
    unsigned char a;
    unsigned char b;

    a = 0b11001100;     //204 decimal
    b = 0b10100100;     //164 decimal

    resultado = a & b;  // 10000100

    resultado = a | b;  // 11101100

    resultado = a ^ b;  // 01101000

    resultado = ~a;     // 00110011

    resultado = a << 3; // 01100000

    resultado = b >> 4; // 00001010

    return 0;
}

