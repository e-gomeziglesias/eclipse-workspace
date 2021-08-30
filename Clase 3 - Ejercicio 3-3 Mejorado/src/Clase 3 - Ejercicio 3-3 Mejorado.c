/*
 ============================================================================
 Name        : Clase 3 - Ejercicio 3-3.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 3-3:
 Se modifica el argumento de la funcion para estandarizarla.
Crear una función que pida el ingreso de un entero y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IngresoEntero (char[]);

int main(void) {
	setbuf(stdout,NULL);

	int numeroEntero;


	numeroEntero = IngresoEntero("Ingrese el numero: ");

	printf("El numero ingresado es %d", numeroEntero);


	return EXIT_SUCCESS;
}

int IngresoEntero (char mensaje[])
{
	int entero;

	printf("%s", mensaje);
	scanf("%d", &entero);

	return entero;
}

