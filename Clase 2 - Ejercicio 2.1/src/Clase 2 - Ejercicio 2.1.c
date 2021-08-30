/*
 ============================================================================
 Name        : Emiliano Gaston Gomez Iglesias
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 2-1: Ingresar 5 n�meros enteros
 calcular y mostrar el promedio de los n�meros. Probar la
 aplicaci�n con distintos valores.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
	setbuf(stdout,NULL);

    int numeroIngresado;
    int suma=0;
    int i;

    float promedio;
    //const int T=3;

    printf("Calcular el promedio\n\n");

    for(i=0; i<T; i++)
    {
        printf("Ingrese el %d�numero: ",i+1);
        scanf("%d", &numeroIngresado);
        suma = suma + numeroIngresado;
    }

    /*Parseo de datos:
     * Implica convertir una cadena (string) en un tipo de
     * dato num�rico.
     *
     * Casteo de datos:
     * Implica convertir un tipo de dato num�rico en otro
     * tipo de datos num�rico.
     *
     * Casteo impl�cito
     * int x;
     * float y;
     * y = 3.25;
     * x = y;
     *
     *
     * Casteo expl�cito
     *
     * int x;
     * float y;
     *
     * y = 3.25;
     * x = (int) y;
     */

    promedio = (float)suma/T; /*casteo expl�cito.
    Convierto el valor que
    devuelve suma a flotante, no la variable y luego lo divido por i.*/

    printf("\n\nEl promedio es %.2f ", promedio);

	return EXIT_SUCCESS;
}
