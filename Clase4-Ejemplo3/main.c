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
   int variableInt;

   variableChar = 100;

   variableInt = variableChar; //no hay problema

   printf("variableChar: %d   variableInt:  %d \n",variableChar,variableInt);

   variableInt = 1028;

   variableChar = variableInt; //se desecha el exceso de
   	   	   	   	   	   	   	   //bits de más alto orden

   printf("variableChar: %d   variableInt:  %d \n",variableChar,variableInt);

   fflush(stdout);

   return 0;
}

