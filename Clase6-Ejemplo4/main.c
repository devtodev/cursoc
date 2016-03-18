/*
 * main.c
 *
 *  Created on: 26 de feb. de 2016
 *      Author: alejandro
 */

#include <stdio.h>

#define PI 3.14

void calculosCirculo(int paramRadio, float *paramArea, float *paramPerimetro);

int main()
{
	int radio;
	float area, perimetro;

	printf("Esta aplicación calcula el área y perímetro de un círculo\n");
	printf("Ingrese el valor del radio: \n");
	fflush(stdout);
	scanf("%d", &radio);

	calculosCirculo(radio, &area, &perimetro);

	printf("Valor del área: %g\n",area);
	printf("Valor del perímetro: %g\n",perimetro);
	fflush(stdout);
	return 0;
}

void calculosCirculo(int paramRadio, float *paramArea, float *paramPerimetro)
{
	*paramArea = PI * paramRadio * paramRadio;
	*paramPerimetro = 2 * PI * paramRadio;
	return;
}
