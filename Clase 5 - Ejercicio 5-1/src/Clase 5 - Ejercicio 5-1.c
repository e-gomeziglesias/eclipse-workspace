/*
 ============================================================================
 Name        : Clase 5 - Ejercicio 5-1.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular
 la sumatoria de los mismos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"
#define TAM 5
int main(void) {

	setbuf(stdout,NULL);
	int suma;
	int enteros[TAM];

	CargarVectorEnteros(enteros, TAM);
	MostrarVectorEnteros(enteros, TAM);
	suma = SumarVectorEnteros(enteros, TAM);

	printf("\nLa suma de los valores es: %d", suma);
	return EXIT_SUCCESS;
}
