/*
 ============================================================================
 Name        : Vectores-Carga.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#define T 5

void CargarVectorEnteroAleatorio(int listaValores[], int tam);
void InicializarVectorEntero(int listaValores[], int tam, int valorInicial);
void MostrarVectorEntero(int listaValores[], int tam);


int main(void) {
	setbuf(stdout,NULL);

	//int numeros[T]={5, 7, 9, 6, 1} inicializacion por extension
	int numeros[T];//así, queda inicializado en 0 todo el vector


	/*CARGA DE DATOS ALEATORIA
	 * Le permito al usuario elegir donde guardar el dato a cargar.
	 * Se pueden cargar todos o solo algunos de los elementos
	 * Se suelen hacer con while o con do while
	 */
	InicializarVectorEntero(numeros, T, -1);
	CargarVectorEnteroAleatorio(numeros, T);
	MostrarVectorEntero(numeros, T);

	return EXIT_SUCCESS;
}



void CargarVectorEnteroAleatorio(int listaValores[], int tam)
{
	int i;
	char seguir;
	int numeroAux;
	do
	{
		numeroAux = CargarEntero("Ingrese un numero: ", "El numero ingresado es invalido. Reingrese: ", 0, 100);
		i = CargarEntero("Donde quiere ingresarlo?: ", "La posicion ingresada es invalida. Reingrese: ", 0, tam);
		listaValores[i-1] = numeroAux;
		printf("Desea ingresar otro numero?");
		fflush(stdin);
		scanf("%c", &seguir);
	}while(seguir=='s');
}

void InicializarVectorEntero(int listaValores[], int tam, int valorInicial)
{
	for(int i=0; i<tam; i++)
	{
		listaValores[i] = valorInicial;
	}
}


void MostrarVectorEntero(int listaValores[], int tam)
{
	for (int i=0; i<tam; i++)
	{
		if(listaValores[i]!= -1)
		{
			printf("%d	", listaValores[i]);
		}
	}
}

