/*
 ============================================================================
 Name        : Clase 5 - Ejercicio 5-2.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000.
Determinar:
a.Cantidad de positivos y negativos.
b.Sumatoria de los pares.
c.El mayor de los impares.
d.Listado de los números ingresados.
e.Listado de los números pares.
f.Listado de los números de las posiciones impares.
---Se deberán utilizar funciones y vectores.

1.	CargarNumeros
2.	IngresarEntero (2.1 Validar en rango)
3.	MostrarCantidadPositivosYNegativos
4.	SumarPares
5.	CalcularMayorDeLosImpares
6.	ListadoNumeros
7.	ListadoNumerosPares
8.	ListadoNumerosPosicionesImpares
9.	VerificarParidad
10.	VerificarSigno

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#define TAM 10

int main(void) {
	setbuf(stdout,NULL);
	int numeros[TAM];
	int sumaPares;
	int mayorImpar;
	//0.Carga de numeros validados en el vector
		CargarVectorEnterosValidados(numeros, TAM,"Ingrese numero entero dentro del rango [-1000; 1000]: ","Error. El numero ingresado está fuera del rango [-1000; 1000]. Reingrese numero: ", -1000, 1000);
	//a. Cantidad de positivos y negativos
		printf("\na. Cantidad de positivos y negativos\n");
		MostrarCantidadPositivosNegativosYCerosEnteros(numeros, TAM);
	//b. Sumatoria de los pares
		printf("\nb. Sumatoria de pares\n");
		sumaPares = SumarVectorPorParidad(numeros, TAM, 0);
		printf("La suma de los numeros pares ingresados es: %d\n", sumaPares);
	//c. El mayor de los impares
		printf("\nc. El mayor de los impares.\n");
		mayorImpar = DeterminarMaximoPorParidad(numeros, TAM, 1);
		printf("El mayor de los impares es: %d\n", mayorImpar);
	//d. Listado de los numeros ingresados
		printf("\nd. Listado de los numeros ingresados.\n");
		MostrarVectorEnteros(numeros, TAM);
	//e. Listado de los numeros impares
		printf("\ne. Listado de los numeros impares\n");
		MostrarNumerosSegunParidad(numeros, TAM, 1);
	//f. Listado de los numeros de posiciones impares
		printf("\n\nf. Listado de los numeros de las posiciones impares\n");
		MostrarNumerosSegunParidadDePosicion(numeros, TAM, 1);

	return EXIT_SUCCESS;
}
