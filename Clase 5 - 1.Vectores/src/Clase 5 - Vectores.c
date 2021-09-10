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

int main(void) {
	setbuf(stdout,NULL);

	//variable escalar int numeros;
	//variable vector
	int numeros[5]; //se le indican la cantidad de elementos que tendrá entre corchetes.
	/*obs: el numero entre corchetes indica el
	 * numero de elementos (0, 1, 2, 3, 4).
	 * Estos numeros entre () son los indices del vector.
	 */

	//Formas de guardar valores en un vector
	//Ejemplo: guardar el valor 20 en el tercer elemento.

	numeros[2] = 20; //el tercer elemento es el del indice 2
	numeros[0] = 9;
	numeros[3] = 80;

	printf("%d-%d-%d", numeros[2], numeros[0], numeros[3]);




	return EXIT_SUCCESS;
}
