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

int CalcularMaximo(int vector[], int tam, int* maximo);
/*int tam recibe un valor, int* maximo recibe una direccion de memoria
  */

int main(void) {
	setbuf(stdout, NULL);

	int lista[5]={5,9,3,-1,4};
	int maximo;
	int respuesta;

	respuesta = CalcularMaximo(lista, 5, &maximo);

	if(respuesta == 1)
	{
		printf("El maximo de los positivos es %d", maximo);
	}
	else
	{
		printf("No se ingreso ningun positivo.");
	}
	return EXIT_SUCCESS;
}

int CalcularMaximo(int vector[], int tam, int* maximo)
{
	int max;
	int banderaPrimerPositivo = 0;
	for(int i=0; i<tam; i++)
	{
		if(vector[i]>0 && (banderaPrimerPositivo==0 || vector[i]>max))
		{
			max = vector[i];
			banderaPrimerPositivo = 1;
		}
	}

	*maximo = max;
	//a la variable a la que apunta maximo, asignale a maximo
	return banderaPrimerPositivo;
}
