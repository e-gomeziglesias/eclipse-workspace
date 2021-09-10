/*
 * Input.c
 *
 *  Created on: 1 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */
#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#include <ctype.h>

float CargarFlotanteValidado(char mensaje[], char mensajeError[], float minimo, float maximo)
{
	float auxFlotante;
	float flotante;
	printf("\n%s",mensaje);
	scanf("%f", &auxFlotante);
	while(!(auxFlotante>=minimo && auxFlotante <= maximo))
	{
		printf("\n%s", mensajeError);
		scanf("%f", &auxFlotante);
	}
	flotante = auxFlotante;
	return flotante;
}

int CargarEnteroValidado(char mensaje[], char mensajeError[], int minimo, int maximo)
{
	int auxEntero;
	int entero;
	printf("\n%s",mensaje);
	scanf("%d", &auxEntero);
	while(!(auxEntero>=minimo && auxEntero<= maximo))
	{
		printf("\n%s", mensajeError);
		scanf("%d", &auxEntero);
	}
	entero = auxEntero;
	return entero;
}

char CargarChar(char mensaje[], char mensajeError[], int capital)
{
	char auxChar;
	char caracter;
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%c", &auxChar);
	while(isalpha(auxChar)==0)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%c", &auxChar);
	}
	if(capital == 0)
	{
		caracter = tolower(auxChar);
	}
	else
	{
		caracter = toupper(auxChar);
	}

	return caracter;
}

char CargarLowerChar(char mensaje[], char mensajeError[])
{
	char auxChar;
	char caracter;
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%c", &auxChar);
	while(isalpha(auxChar)==0)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%c", &auxChar);
	}
	caracter = tolower(auxChar);

	return caracter;
}

int CargarEnteroValidadoDistintoDeValor(char mensaje[], char mensajeError[], int valor)
{
	int auxEntero;
	int entero;
	printf("\n%s",mensaje);
	scanf("%d", &auxEntero);
	while(auxEntero == valor)
	{
		printf("\n%s", mensajeError);
		scanf("%d", &auxEntero);
	}
	entero = auxEntero;
	return entero;
}

int CargarVectorEnterosValidados (int vector[], int tam, char mensaje[], char mensajeError[], int minimo, int maximo)
{
	int retorno = 0;
	int auxEntero;
	if(tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			auxEntero = CargarEnteroValidado(mensaje, mensajeError, minimo, maximo);
			vector[i] = auxEntero;
		}
		retorno = 1;
	}
	return retorno;
}

int CargarVectorFlotantesValidados (float vector[], int tam, char mensaje[], char mensajeError[], float minimo, float maximo)
{
	int retorno = 0;
	float auxFlotante;
	if(tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			auxFlotante = CargarFlotanteValidado(mensaje, mensajeError, minimo, maximo);
			vector[i] = auxFlotante;
		}
		retorno = 1;
	}
	return retorno;
}

int CargarAleatoriamenteVectorEnterosValidadosDistintosDeValor (int vector[], int tam, char mensaje[], char mensajeError[], int valor)
{
	int retorno = 0;
	int auxEntero;
	int i;
	char respuesta = 'n';
	if(tam>0)
	{
		do
		{
			auxEntero = CargarEnteroValidadoDistintoDeValor(mensaje, mensajeError, valor);
			printf("Indique la ubicacion donde guardar el valor: ");
			scanf("%d", &i);
			while(((i-1)>=tam) || ((i-1)<0))
			{
				printf("La posicion ingresada es invalida. Reingrese la posicion: ");
				scanf("%d", &i);
			}
			vector[i-1] = auxEntero;
			respuesta = CargarChar("Desea ingresar otro numero? (s/n) ", "Error. Debe ingresar una letra. Desea ingresar otro numero? (s/n)", 0);
		}while(respuesta =='s');
		retorno = i;
	}
	return retorno;
}

void MostrarVectorEnteros(int vector[], int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("%d	", vector[i]);
	}
	printf("\n");
}

void MostrarVectorFlotantes(float vector[], int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("%.2f	", vector[i]);
	}
	printf("\n");
}

void MostrarUnValorVectorEnteros(int vector[], int tam, int indice)
{
	printf("%d	", vector[indice]);
}

void MostrarUnValorVectorFlotantes(float vector[], int tam, int indice)
{
	printf("%.2f	", vector[indice]);
}

int SumarVectorEnteros(int vector[], int tam)
{
	int suma = 0;

	if(tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			suma = suma + vector[i];
		}
	}
	return suma;
}

float SumarVectorFlotantes(float vector[], int tam)
{
	float suma = 0;

	if(tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			suma = suma + vector[i];
		}
	}
	return suma;
}

int VerificarSignoEntero(int valor)
{
	int signo;
	if(valor>0)
	{
		signo = 1;
	}
	else
	{
		if(valor<0)
		{
			signo = -1;
		}
		else
		{
			signo = 0;
		}
	}
	return signo;
}

int VerificarSignoFlotante(float valor)
{
	int signo;
	if(valor>0)
	{
		signo = 1;
	}
	else
	{
		if(valor<0)
		{
			signo = -1;
		}
		else
		{
			signo = 0;
		}
	}
	return signo;
}

int VerificarParidad(int valor)
{
	int paridad;
	if(valor%2==0)
	{
		paridad = 0;
	}
	else
	{
		paridad = 1;
	}
	return paridad;
}

int ContarSignoEnteros(int vector[], int tam, int condicion)
{
	int contadorCoincidencias=0;
	int signo;
	for(int i=0; i<tam; i++)
	{
		signo = VerificarSignoEntero(vector[i]);
		if(signo == condicion)
		{
			contadorCoincidencias++;
		}
	}
	return contadorCoincidencias;
}

int ContarSignoFlotantes(float vector[], int tam, int condicion)
{
	int contadorCoincidencias=0;
	int signo;
	for(int i=0; i<tam; i++)
	{
		signo = VerificarSignoEntero(vector[i]);
		if(signo == condicion)
		{
			contadorCoincidencias++;
		}
	}
	return contadorCoincidencias;
}

void MostrarCantidadPositivosNegativosYCerosEnteros(int vector[], int tam)
{
	int positivos;
	int negativos;
	int ceros;
	positivos = ContarSignoEnteros(vector, tam, 1);
	negativos = ContarSignoEnteros(vector, tam, -1);
	ceros = ContarSignoEnteros(vector, tam, 0);
	printf("La cantidad de numeros enteros positivos es: %d", positivos);
	printf("\nLa cantidad de numeros enteros negativos es: %d", negativos);
	printf("\nLa cantidad de ceros es: %d\n", ceros);
}

void MostrarCantidadPositivosNegativosYCerosFlotantes(float vector[], int tam)
{
	int positivos;
	int negativos;
	int ceros;
	positivos = ContarSignoFlotantes(vector, tam, 1);
	ceros = ContarSignoFlotantes(vector, tam, 0);
	negativos = ContarSignoFlotantes(vector, tam, -1);
	printf("La cantidad de numeros flotantes positivos es: %d", positivos);
	printf("\nLa cantidad de numeros flotantes negativos es: %d", negativos);
	printf("\nLa cantidad de ceros es: %d\n", ceros);
}

int SumarVectorPorParidad(int vector[], int tam, int paridad)
{
	int suma=0;
	for(int i=0; i<tam; i++)
	{
		if(VerificarParidad(vector[i])==paridad)
		{
			suma = suma + vector[i];
		}
	}
	return suma;
}

int DeterminarMaximoPorParidad(int vector[], int tam, int paridad)
{
	int maximo;
	int flagMaximo=0;
	for(int i=0; i<tam; i++)
	{
		if((VerificarParidad(vector[i])== paridad) && (flagMaximo==0 || vector[i]>maximo))
		{
			maximo = vector[i];
			flagMaximo = 1;
		}
	}
	return maximo;
}

void MostrarNumerosSegunParidad(int vector[], int tam, int paridad)
{
	for (int i = 0; i < tam; i++)
	{
		if (VerificarParidad(vector[i]) == paridad)
		{
			MostrarUnValorVectorEnteros(vector, tam, i);
		}
	}
}

void MostrarNumerosSegunParidadDePosicion(int vector[], int tam, int paridad)
{
	for (int i = 0; i < tam; i++)
	{
		if (VerificarParidad(i) == paridad)
		{
			MostrarUnValorVectorEnteros(vector, tam, i);
		}
	}
}

void InicializarVectorEnteros(int vector[], int tam, int valorInicial)
{
	for(int i=0; i<tam; i++)
	{
		vector[i] = valorInicial;
	}
}

void InicializarVectorFlotantes(float vector[], int tam, int valorInicial)
{
	for(int i=0; i<tam; i++)
	{
		vector[i] = valorInicial;
	}
}

float CalcularPromedioVectorEnterosPorSigno(int vector[], int tam, int signo)
{
	float promedio;
	int suma = 0;
	int contador = 0;

	for(int i=0; i<tam; i++)
	{
		if(VerificarSignoEntero(vector[i])==signo)
		{
			suma = suma + vector[i];
			contador++;
		}
	}

	promedio = (float)suma/contador;

	return promedio;
}

int DeterminarMinimoPorSigno(int vector[], int tam, int signo)
{
	int minimo=0;
	int flagMinimo=0;
	for(int i=0; i<tam; i++)
	{
		if((VerificarSignoEntero(vector[i])==signo) && ((flagMinimo ==0) || vector[i]<minimo))
		{
			minimo = vector[i];
			flagMinimo = 1;
		}
	}
	return minimo;
}

int SumarNegativosAntecesores(int negativo)
{
	int suma = 0;

	for(int i=negativo; i<0; i++)
	{
		suma = suma + i;
	}

	return suma;
}
