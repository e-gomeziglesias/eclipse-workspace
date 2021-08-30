/*
 ============================================================================
 Name        : Ejercicio 2-4
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 2-4:
Ingresar 5 caracteres e informar cuantas
letras p (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main(void) {
	setbuf(stdout,NULL);

	char caracterIngresado;
	int i;
	int contadorP=0;

	printf("Ingreso de caracteres\n\n");

	for(i=0; i<CANT; i++)
	{
		printf("\nIngrese caracter: ");
		scanf("%c", &caracterIngresado);
		fflush(stdin);//limpia el buffer de entrada windows
		//__fpurge(stdin); limpia el buffer de entrada linux
		if(caracterIngresado=='p')
		{
			contadorP++;
		}
	}

	printf("\nSe ingresaron %d 'p' ", contadorP);


	return EXIT_SUCCESS;
}
