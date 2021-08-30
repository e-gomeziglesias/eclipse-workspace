/*
 ============================================================================
 Name        : Clase 3 - Ejercicio 3-2.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 3-2:
Crear una funci�n que permita determinar si un n�mero es par o no.
La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IngresoEntero (char mensaje[]);
int DeterminarParidad (int numero);

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int paridad;

	numero = IngresoEntero("Ingrese el numero: ");
	paridad = DeterminarParidad(numero);

	if(paridad == 1)
	{
		printf("\nEl numero ingresado es par");
	}
	else
	{
		printf("\nEl numero ingresado es impar");
	}

	return EXIT_SUCCESS;
}

int IngresoEntero (char mensaje[])
{
	int entero;

	printf("%s", mensaje);
	scanf("%d", &entero);

	return entero;
}

int DeterminarParidad (int numero)
{
	int retorno = 0;

	if(numero%2 == 0)
	{
		retorno = 1;
	}

	return retorno;
}
