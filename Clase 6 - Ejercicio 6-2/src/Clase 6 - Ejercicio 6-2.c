/*
 ============================================================================
 Name        : Clase 6 - Ejercicio 6-2.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 6-2:
Realizar un programa que permita el ingreso de 10 números
enteros (positivos y negativos).
Necesito generar un listado de los números positivos de
 manera creciente y negativos de manera decreciente. (Como máximo 4 for)

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#define TAM 10

int main(void) {

	setbuf(stdout, NULL);
	int numeros[TAM];

	CargarVectorEnterosValidados(numeros, TAM, "Ingrese numero: ", "Error. El numero ingresado es invalido. Reingrese el numero: ", -5000, 5000, 3);

	//Ordeno creciente
	OrdenarVectorEnteros(numeros, TAM, 1);
	printf("Positivos en orden creciente: ");
	for(int i=0; i<TAM; i++)
	{
		//Muestro positivos
		if(VerificarSignoEntero(numeros[i])==1)
		{
			MostrarUnValorVectorEnteros(numeros, TAM, i);
		}
	}

	printf("\nNegativos en orden decreciente: ");
	//Ordeno decreciente
	OrdenarVectorEnteros(numeros, TAM, -1);
	for(int i=0; i<TAM; i++)
	{
		//Muestro negativos
		if(VerificarSignoEntero(numeros[i])==-1)
		{
			MostrarUnValorVectorEnteros(numeros, TAM, i);
		}
	}
	return EXIT_SUCCESS;
}
