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
#define T 5


int main(void)
{
	int lista[T]={5,1,9,4,3};
	int auxiliar; //guardara temporalmente un valor para no perderlo en el swap
	/*Para ordenar, se deben tomar pares de cosas
	 * y compararlas*/
	/*se para en la primer posicion y compara con el siguiente.
	 * si el siguiente es mayor, lo ubica en la primer posicion
	 * y luego compara con el siguiente.
	 * pivotea parandose en un lugar fijo e ir moviendose por el resto del
	 * array.
	 * */

	//permite pivotear contra un valor
	for(int i=0; i<T-1; i++)//este pivote debe llegar hasta uno menos del tope del array
	{
		for(int j=i+1;j<T; j++)//siempre estará una posicion delante del pivote
		{
			if(lista[i]<lista[j])//criterio de ordenamiento.
					//si se cumple esta condicion, recien ahi hago el swap
			{
				auxiliar = lista[i];
				lista[i] = lista[j];
				lista[j] = auxiliar;
			}
		}
	}

	for(int i=0; i<T; i++)
	{
		printf("%d\n", lista[i]);
	}
	return EXIT_SUCCESS;
}
