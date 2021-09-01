/*
 ============================================================================
 Name        : Clase 3 - Funciones.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

/*Sin modularizar-Escribir todo en una misma funcion:
 *
 * (X) Se hace incontrolable
 * ante la depuración, tenemos que buscar
 * codigo inalcanzable
 *
 * (X)Hay una dependencia del codigo
 *
 * (X)Uso innecesario de funcionalidades
 *
 * Redundancia en el codigo (escribo una y otra
 * vez el mismo codigo
 * */

/*Programar en funciones:
 *
 * Se divide el programa en pedacitos, en modulos.
 *
 * Para ello, hay que tener muy en claro que hace cada
 * modulo.
 *
 * Instancias a tener en cuenta:
 *
 * 1- Declaracion de la funcion (prototipo o firma de la funcion)
 * 		Doy a conocer la funcion
 * 		LA INICIAL DE CADA PALABRA DEL NOMBRE DE LA FUNCION VA EN MAYUSCULAS
 * 		que devuelve --- como se llama --- (que recibe / argumento)
 * 	ejemplo:
 */



int main(void) {
	setbuf(stdout,NULL); //setea el buffer de salida, poniendole un valor NULL

	int resultado; //donde guardo lo que devuelve la funcion
	int unNumero = 8;
	int otroNumero;


	printf("Prueba funcion Sumar\n");
	printf("Ingrese el segundo numero: ");
	scanf("%d", &otroNumero);
	resultado = SumarNumeros(7,4); //3-Llamada a la funcion
	//b. Parametros Actuales: son los parametros que aparecen cuando llamo a la funcion
	//printf("La suma es %d", suma);
	MostrarResultado(resultado);

	resultado = SumarNumeros(unNumero, otroNumero);
	MostrarResultado(resultado);

	return EXIT_SUCCESS;
}

