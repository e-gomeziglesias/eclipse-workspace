/*
 * Input.c
 *
 *  Created on: 1 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */
#include <stdio.h>
#include <stdlib.h>
#include "Input.h"

float CargarFlotante(char mensaje[], char mensajeError[], float minimo, float maximo)
{
	float auxFlotante;
	float flotante;
	printf("\n%s",mensaje);
	scanf("%f", &auxFlotante);
	while(!(auxFlotante>=minimo && auxFlotante <= maximo))
	{
		printf("\n%s", mensajeError);
		scanf("%f", &auxFlotante);
	}
	flotante = auxFlotante;
	return flotante;
}

int CargarEntero(char mensaje[], char mensajeError[], int minimo, int maximo)
{
	int auxEntero;
	int entero;
	printf("\n%s",mensaje);
	scanf("%d", &auxEntero);
	while(!(auxEntero>=minimo && auxEntero<= maximo))
	{
		printf("\n%s", mensajeError);
		scanf("%d", &auxEntero);
	}
	entero = auxEntero;
	return entero;
}
