/*
 ============================================================================
 Name        : Clase 6 - Ejercicio 6-3.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 6-3:
Pedirle al usuario su nombre y apellido (en variables separadas,
una para el nombre y otra para el apellido).
Ninguna de las dos variables se puede modificar.
Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
Por ejemplo:
Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
Gomez, Juan Ignacio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#include <string.h>
#define TAM 50
#define TAM2 100

int main(void) {

	setbuf(stdout,NULL);

	char nombre[TAM];
	char apellido[TAM];
	char apellidoYNombre[TAM2];

	CargarString(nombre, TAM, "Ingrese nombres: ", "Error. Nombre muy largo. Reingrese nombres: ", 2);
	CargarString(apellido, TAM, "Ingrese apellidos: ","Error. Apellido muy largo. Reingrese apellidos: ", 2);

	strcpy(apellidoYNombre, apellido);
	strcat(apellidoYNombre, ",");
	strcat(apellidoYNombre, " ");
	strcat(apellidoYNombre, nombre);

	NormalizarString(apellidoYNombre, TAM2, 0);

	printf("\nNombre: %s", nombre);
	printf("\nApellido: %s", apellido);
	printf("\nApellido y nombre: %s", apellidoYNombre);

	return EXIT_SUCCESS;
}
