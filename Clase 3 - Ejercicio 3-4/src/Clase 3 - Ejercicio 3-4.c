/*
 ============================================================================
 Name        : Clase 3 - Ejercicio 3-4.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 3-4:
Especializar la funci�n anterior para que permita validar el entero ingresado en un rango determinado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IngresoEntero (char mensaje[], char mensajeError[], int minimo, int maximo);

int main(void)
{
	setbuf(stdout,NULL);

	int numeroEntero;


	numeroEntero = IngresoEntero("Ingrese un numero entero entre 0 y 10: ", "El numero ingresado es invalido. Reingrese un numero entero entre 0 y 10: ", 0, 10);

	printf("El numero ingresado es %d", numeroEntero);


	return EXIT_SUCCESS;
}

int IngresoEntero (char mensaje[], char mensajeError[], int minimo, int maximo)
{
	int entero;
	int enteroValidado;

	printf("\n%s", mensaje);
	scanf("%d", &entero);
	while(!(entero>=minimo && entero <= maximo))
	{
		printf("\n%s", mensajeError);
		scanf("%d", &entero);
	}
	printf("\n");
	enteroValidado = entero;

	return enteroValidado;
}
