/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

int main()
{
   char variableChar;
   unsigned char variableUnsignedChar;

   variableChar = -128;
   printf("Al asignar -128 a un char se almacena: %d\n",variableChar);

   variableChar = -129;
   printf("Al asignar -129 a un char se almacena: %d\n",variableChar);

   variableUnsignedChar = 255;
   printf("Al asignar 255 a un unsigned char se almacena: %d\n",variableUnsignedChar);

   variableUnsignedChar = 256;
   printf("Al asignar 256 a un unsigned char se almacena: %d\n",variableUnsignedChar);

   fflush(stdout);

   return 0;
}

