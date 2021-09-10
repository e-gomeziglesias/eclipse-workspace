/*
 ============================================================================
 Name        : Clase 5 - Ejercicio 5-3.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 5-3:
Realizar un programa que permita el ingreso de
 10 números enteros distintos de cero.
La carga deberá ser aleatoria
(todos los elementos se inicializan en cero
por default).
Determinar el promedio de los positivos,
y del menor de los negativos la suma de los
 antecesores
(Según la recta numérica de los reales,
 hasta llegar a cero).

Utilizar funciones y vectores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);

	int numeros[TAM];
	float promedio;
	int minimoNegativo;
	int sumaNegativosAntecesores;

	//inicializacion de vector
		InicializarVectorEnteros(numeros, TAM, 0);
	//carga de valores
		CargarAleatoriamenteVectorEnterosValidadosDistintosDeValor(numeros, TAM, "Ingrese un numero: ", "El numero ingresado no puede ser 0. Reingrese numero: ", 0);
		MostrarVectorEnteros(numeros, TAM);
		//promedio de los positivos
		promedio = CalcularPromedioVectorEnterosPorSigno(numeros, TAM, 1);
	//suma de los antecesores al menor negativo
		//Negativo minimo
		minimoNegativo = DeterminarMinimoPorSigno(numeros, TAM, -1);
	sumaNegativosAntecesores = SumarNegativosAntecesores(minimoNegativo);
		printf("\nEl promedio de los positivos es: %.2f\n", promedio);
		if(minimoNegativo!=0)
		{
			printf("\nEl minimo negativo es %d y la suma de sus antecesores es %d\n", minimoNegativo, sumaNegativosAntecesores);
		}
		else
		{
			printf("\nNo se ingresaron numeros negativos.");
		}
			return EXIT_SUCCESS;
}
