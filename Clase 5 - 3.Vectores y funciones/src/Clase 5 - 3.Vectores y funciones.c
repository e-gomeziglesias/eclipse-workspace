/*
 ============================================================================
 Name        : Vectores.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define T 5

void CargarVectorEnteroAleatorio(int listaValores[], int tam);
void InicializarVectorEntero(int listaValores[], int tam, int valorInicial);
void MostrarVectorEntero(int listaValores[], int tam);
int BuscarMaximo(int listaValores[], int tam);
int BuscarNumero(int listaValores[], int tam, int valorBusqueda);
void CargarVectorEntero(int listaValores[], int tam);

int funcion(int r);


int main(void) {
	setbuf(stdout,NULL);

	int numeros[5];
	//int acumulador=0;
	//int maximo;

	CargarVectorEntero(numeros,T);
	/*
	 //1.CARGA SECUENCIAL
		//i arranca en la primer posicion y llega hasta la ultima
		for (int i=0; i<5; i++)
		{
			printf("Ingrese un numero: ");
			scanf("%d", &numeros[i]);
			Le paso la direccion de memoria del elemento
			 * que está en el indice i
		}
	//2.MUESTRA SECUENCIAL DE UN VECTOR
		for(int i=0; i<5; i++)
		{
			printf("%d\n",numeros[i]);
		}

	//3.ACUMULADOR
		for(int i=0; i<5; i++)
		{
			acumulador = acumulador + numeros[i];
		}
	//4.Maximo
	for (int i = 0; i < 5; i++)
	{
		if (i == 0 || maximo < numeros[i])
		{
			maximo = numeros[i];
		}
	}*/
}
void CargarVectorEntero(int listaValores[], int tam)//pasaje por referencia (copia direccion de memoria del parametro actual)
{
	for (int i=0; i < tam; i++)
	{
		printf("Ingresar un numero entero: ");
		scanf("%d", &listaValores[i]);
	}
}
int funcion(int r)//pasaje por valor. Paso una copia del parametro actual
{
	r=100;

	return r;
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

int BuscarMaximo(int listaValores[], int tam)
{
	int maximo;

	return maximo;
}
int BuscarNumero(int listaValores[], int tam, int valorBusqueda)
{
	int indiceEncontrado;
	for (int i=0; i<tam; i++)
	{
		if(listaValores[i]==valorBusqueda)
		{
			indiceEncontrado = i;
			break;
		}
	}
	return indiceEncontrado;
}
