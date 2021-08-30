/*
 ============================================================================
 Name        : Clase 3 - Ejercicio 3-1.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 3-1:
Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void MostrarNumero(float);
int main(void) {

	setbuf(stdout,NULL);
	float unNumero = 7.99;

	MostrarNumero(unNumero);

	return EXIT_SUCCESS;
}

void MostrarNumero(float numeroFlotante)
{
	printf("El numero es %.2f\n", numeroFlotante);
}
