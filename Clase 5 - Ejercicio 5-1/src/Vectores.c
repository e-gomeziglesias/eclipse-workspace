/*
 * Vectores.c
 *
 *  Created on: 6 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */

#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"

int CargarVectorEnteros (int vector[], int tam)
{
	int retorno = 0;
	if(tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			printf("Ingrese un numero entero: ");
			scanf("%d", &vector[i]);
		}
		retorno = 1;
	}
	return retorno;
}

int MostrarVectorEnteros(int vector[], int tam)
{
	int retorno = 0;
	if(tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			printf("%d	", vector[i]);
		}
		retorno = 1;
	}
	return retorno;
}

int SumarVectorEnteros(int vector[], int tam)
{
	int suma = 0;

	if(tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			suma = suma + vector[i];
		}
	}
	return suma;
}
