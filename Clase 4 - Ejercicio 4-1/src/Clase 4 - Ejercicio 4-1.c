/*
 ============================================================================
 Name        : Clase 4 - Ejercicio 4-1.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un n�mero.
Por ejemplo:
5! = 5*4*3*2*1 = 120

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


/// @fn int IngresoEntero(char[], char[], int, int)
/// @brief Permite ingresar un numero entero, con un mensaje personalizado dentro de un rango definido.
///
/// @param mensaje mensaje personalizado de ingreso de datos.
/// @param mensajeError mensaje personalizado de error al ingresar datos.
/// @param minimo minimo valor que puede tomar el numero ingresado.
/// @param maximo maximo valor que puede tomar el numero ingresado.
/// @return el numero ingresado, validado dentro del rango establecido.
int IngresoEntero (char mensaje[], char mensajeError[], int minimo, int maximo);

/// @fn int factorialNumero(int)
/// @brief Recibe un numero y le calcula el factorial.
///
/// @param numero numero a calcularle el factorial
/// @return factorial calculado
int CalcularFactorial(int numero);


int main(void) {

	setbuf(stdout,NULL);
	int factorial;
	int numero;

	numero = IngresoEntero("Ingrese un numero positivo para calcular el factorial: ", "El numero ingresado es invalido. Reingrese numero positivo para calcular el factorial: ", 0, 1000);
	factorial = factorialNumero(numero);

	printf("El factorial de %d es %d.", numero, factorial);
	return EXIT_SUCCESS;
}

int IngresoEntero (char mensaje[], char mensajeError[], int minimo, int maximo)
{
	int entero;
	int enteroValidado;

	printf("\n%s", mensaje);
	scanf("%d", &entero);
	while(!(entero>=minimo && entero <= maximo))
	{
		printf("\n%s", mensajeError);
		scanf("%d", &entero);
	}
	printf("\n");
	enteroValidado = entero;

	return enteroValidado;
}

int CalcularFactorial(int numero)
{
	int factorial;

	if(numero==0)
	{
		factorial=1;
	}
	for(int i = numero; i>0; i--)
	{
		factorial = i * factorial;
	}
	return factorial;
}
