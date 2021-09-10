/*
 ============================================================================
 Name        : Clase 6 - Ejercicio 6-1.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 6-1:
Disponemos de dos variables numéricas
 (a y b). Realizar un algoritmo que
 permita el intercambio de valores
 de dichas variables.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"

int main(void)
{
	setbuf(stdout, NULL);
	int a=5;
	int b=10;

	printf("Antes del swap\n");
	printf("a=%d   b=%d\n", a, b);

	IntercambiarEnteros(&a, &b);

	printf("\nDespues del swap\n");
	printf("a=%d   b=%d\n", a, b);;


	return EXIT_SUCCESS;
}
