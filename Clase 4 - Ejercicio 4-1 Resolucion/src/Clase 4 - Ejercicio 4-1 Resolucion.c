/*
 ============================================================================
 Name        : Clase.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int CalcularFactorial(int numeroIngresado);

int main(void) {

	int numero;
	int factorial;

	numero = 6;

	factorial = CalcularFactorial(numero);

	printf("El factorial del numero es: %d", factorial);

	return EXIT_SUCCESS;
}

int CalcularFactorial(int numeroIngresado)
{
	int factorial;
	if(numeroIngresado == 0)
	{
		factorial = 1; //esta sentencia no llama al factorial. Hace que el factorial se corte.
	}
	else
	{
		factorial = numeroIngresado * CalcularFactorial(numeroIngresado - 1);
	}
	return factorial;
}
