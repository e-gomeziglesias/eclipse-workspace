/*
 ============================================================================
 Name        : Vectores.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeros[5];
	int acumulador=0;
	int maximo;

	//1.CARGA SECUENCIAL
		//i arranca en la primer posicion y llega hasta la ultima
		for (int i=0; i<5; i++)
		{
			printf("Ingrese un numero: ");
			scanf("%d", &numeros[i]);
			/*Le paso la direccion de memoria del elemento
			 * que está en el indice i*/
		}
	//2.MUESTRA SECUENCIAL DE UN VECTOR
		for(int i=0; i<5; i++)
		{
			printf("%d\n",numeros[i]);
		}

	//3.ACUMULADOR
		for(int i=0; i<5; i++)
		{
			acumulador = acumulador + numeros[i];
		}
	//4.Maximo
	for (int i = 0; i < 5; i++)
	{
		if (i == 0 || maximo < numeros[i])
		{
			maximo = numeros[i];
		}
	}
	return EXIT_SUCCESS;
}
