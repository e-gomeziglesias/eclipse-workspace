/*
 ============================================================================
 Name        : Clase 6 - 2-Cadenas de caracteres.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>//bibilioteca para manejar cadenas de caracteres


int main(void) {
	setbuf(stdout, NULL);
	int largo;
	char cadena[50];
	//10 + 1 para el \0 de fin de cadena
	//Siempre tiene que ser 1 mas al limite superior establecido para que no desborde el vector.
	/*Largo de la cadena: cantidad de caracteres utiles ocupados
	 *Capacidad de la cadena: espacio disponible para guardar caracteres en la cadena
	 * */
	printf("Ingrese una palabra: ");
	fflush(stdin);

	//1.scanf("%s", cadena);
		//al usar scanf, se esta guardando solo la primer palabra que ingresamos.
		//para corregirlo, hay que hacer:
		//scanf("%[^\n]",cadena);

	//2.gets(cadena);
		//disponible solo para windows

	//3.fgets(cadena, tamaño de la cadena, stdin); /*ATENCION*/
		//fgets(cadena, 50, stdin);
		//ESTA FUNCION GUARDA EL \N DEL ENTER EN LA CADENA
		//para corregir esto, hay que hacer
		//cadena[len-1]='\0'; e implementarlo en una funcion

	//4.strcpy(cadenaDestino, CadenaOrigen);
		//copia una cadena en otra
		//el origen puede ser tanto una variable como una constante
		//hay que chequear que la cadena destino tenga, al menos, el mismo tamaño que la cadena origen para que no desborde.

	//5.strcmp(cadena, otra cadena);
		//devuelve un entero, resultado de la comparacion
		//es case sensitive. Diferencia mayusculas de minusculas
		//0 si las cadenas son iguales
		//devuelve otro valor, producto de la algoritmia de la funcion si son distintas

	//6.stricmp(cadena, otra cadena);
		//hace lo mismo que strcmp pero ignorando las mayusculas y las minusculas

	//7.strupr(cadena);
		//pasa una cadena todo a mayusculas.

	//8.strlwr(cadena);
		//pasa una cadena todo a minusculas.

	//9.strcat(cadena1, cadena2)
		//en "cadena" puedo pasar una cadena o un literal
		//la concatenacion se guarda en cadena1
		//a la hora de hacer esto, hay que chequear que cadena1 tenga espacio suficiente para guardar cadena1 y cadena2
		//

	largo = strlen(cadena); //cont char*
	//Obs: recorre la cadena contando cada caracter y cuando encuentra el /0 deja de contar (no cuenta el \0)

	printf("La palabra que ingreso es: %s\n", cadena);
	printf("Largo de la cadena %d", largo);



	return EXIT_SUCCESS;
}
