/*
 ============================================================================
 Name        : Clase 3 - Ejercicio 3-3.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IngresoEntero (void);

int main(void) {
	setbuf(stdout,NULL);

	int numeroEntero;


	numeroEntero = IngresoEntero();

	printf("El numero ingresado es %d", numeroEntero);


	return EXIT_SUCCESS;
}

int IngresoEntero (void)
{
	int entero;

	printf("Ingrese un numero entero: ");
	scanf("%d", &entero);

	return entero;
}
