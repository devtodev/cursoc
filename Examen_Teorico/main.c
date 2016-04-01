/*
 * main.c
 *
 *  Created on: 30 de mar. de 2016
 *      Author: alejandro
 */
#include <stdio.h>

int function(int valor1)
{
	valor1=valor1*2;
	return valor1;
}

int main()
{

	printf("Ejercicio 1. Resultado = %d\n",((20 % 3) + 5) << 2);
	printf("\n");
	printf("Ejercicio 2. \n");
	printf("  (9 < 3) || (4*3 > 11) -> %d\n",(9 < 3) || (4*3 > 11));
	printf("  (33>5) && (2 < (10%6)) -> %d\n", (33>5) && (2 < (10%6)));
	printf("  (resultado > 4) -> depende de lo que tenia antes resultado \n");
	printf("  ((2*9)<40) && ((5/2)<1) -> %d\n", ((2*9)<40) && ((5/2)<1));
	printf("\n");
	printf("Ejercicio 4. \n");
	int i;
	int cont = 0;
	for (i = 0; i<8;i++)
	{
	  if ((i%2) == 0)
	  {
	    printf("*");
	    cont++;
	  }
	}
	printf("   -->> %d veces\n",cont);
	printf("\n");
	printf("Ejercicio 7. \n");
	int k, num = 30;
	k = (num > 5 ? (num <= 10 ? 100 : 200):500);
	printf("%d\n", num);
	printf("\n");
	printf("Ejercicio 9. \n");
	int valor1, valor2;
	valor1 = 8;
	valor2 = function(valor1);
	printf("valor1: %d, valor2: %d\n", valor1, valor2);
	printf("\n");

}
