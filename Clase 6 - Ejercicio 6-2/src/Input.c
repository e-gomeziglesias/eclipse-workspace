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

//1.
int CargarFlotante(float* pFlotante, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
 	float bufferFloat;

	if(pFlotante != NULL && mensaje!= NULL && mensajeError!= NULL && minimo<=maximo && reintentos>=0)
	{
		do
		{
			printf("\n%s",mensaje);
			scanf("%f", &bufferFloat);
			if(bufferFloat>=minimo && bufferFloat <= maximo)
			{
				*pFlotante = bufferFloat;
				retorno = 0;
				break;
			}
			else
			{
				printf("\n%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}
//2.
int CargarEntero(int* pEntero, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
 	float bufferInt;

	if(pEntero != NULL && mensaje!= NULL && mensajeError!= NULL && minimo<=maximo && reintentos>=0)
	{
		do
		{
			printf("\n%s",mensaje);
			scanf("%f", &bufferInt);
			if(bufferInt>=minimo && bufferInt <= maximo)
			{
				*pEntero = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("\n%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}
//3.
int CargarChar(char* pCaracter, char mensaje[], char mensajeError[], int capital, int reintentos)
{
	char bufferChar;
	int retorno = -1;
	if(pCaracter!= NULL && mensaje != NULL && mensajeError != NULL && capital>=0 && capital<=1 && reintentos >=0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c", &bufferChar);
			if(isalpha(bufferChar)==0)
			{
				printf("%s", mensajeError);
				reintentos--;
			}
			else
			{
				if(capital == 0)
				{
					bufferChar = tolower(bufferChar);
				}
				else
				{
					bufferChar = toupper(bufferChar);
				}
				*pCaracter = bufferChar;
				retorno = 0;
				break;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}
//4.
int CargarEnteroValidadoDistintoDeValor(int* pEntero, char mensaje[], char mensajeError[], int valor, int reintentos)
{
	int auxEntero;
	int retorno = -1;
	if(pEntero!=NULL && mensaje != NULL && mensajeError!=NULL && reintentos >=0)
	{
		do
		{
			printf("\n%s",mensaje);
			scanf("%d", &auxEntero);
			if(auxEntero == valor)
			{
				printf("\n%s", mensajeError);
				reintentos--;
			}
			else
			{
				*pEntero = auxEntero;
				retorno = 0;
			}
		}while(reintentos>=0);
	}
	return retorno;
}
//5
int CargarVectorEnterosValidados (int vector[], int tam, char mensaje[], char mensajeError[], int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int auxEntero;
	if(vector!=NULL && tam>0 && mensaje!=NULL && mensajeError != NULL && minimo<=maximo && reintentos >=0)
	{
		for(int i=0; i<tam; i++)
		{
			CargarEntero(&auxEntero, mensaje, mensajeError, minimo, maximo, reintentos);
			vector[i] = auxEntero;
		}
		retorno = 0;
	}
	return retorno;
}
//6.
int CargarVectorFlotantesValidados (float vector[], int tam, char mensaje[], char mensajeError[], float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float auxFlotante;
	if(vector != NULL && tam>0 && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos >=0)
	{
		for(int i=0; i<tam; i++)
		{
			CargarFlotante(&auxFlotante, mensaje, mensajeError, minimo, maximo, reintentos);
			vector[i] = auxFlotante;
		}
		retorno = 0;
	}
	return retorno;
}
//7.
int CargarAleatoriamenteVectorEnterosValidadosDistintosDeValor (int vector[], int tam, char mensaje[], char mensajeError[], int valor, int reintentos)
{
	int retorno = 0;
	int auxEntero;
	int i;
	char respuesta = 'n';
	if(vector != NULL && tam>0 && mensaje!=NULL && mensajeError != NULL && reintentos >=0)
	{
		do
		{
			CargarEnteroValidadoDistintoDeValor(&auxEntero, mensaje, mensajeError, valor, reintentos);
			printf("Indique la ubicacion donde guardar el valor: ");
			scanf("%d", &i);
			while(((i-1)>=tam) || ((i-1)<0))
			{
				printf("La posicion ingresada es invalida. Reingrese la posicion: ");
				scanf("%d", &i);
			}
			vector[i-1] = auxEntero;
			CargarChar(&respuesta, "Desea ingresar otro numero? (s/n) ", "Error. Debe ingresar una letra. Desea ingresar otro numero? (s/n)", 0, reintentos);
		}while(respuesta =='s');
		retorno = i;
	}
	return retorno;
}
//8.
void MostrarVectorEnteros(int vector[], int tam)
{
	if(vector!=NULL && tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			printf("%d	", vector[i]);
		}
		printf("\n");
	}
}
//9.
void MostrarVectorFlotantes(float vector[], int tam)
{
	if(vector!=NULL && tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			printf("%.2f	", vector[i]);
		}
		printf("\n");
	}
}
//10.
void MostrarUnValorVectorEnteros(int vector[], int tam, int indice)
{
	if(vector!=NULL && tam>0 && indice>=0)
	{
		printf("	 %d", vector[indice]);
	}
}
//11.
void MostrarUnValorVectorFlotantes(float vector[], int tam, int indice)
{
	if(vector!=NULL && tam>0 && indice>=0)
	{
		printf("	 %.2f", vector[indice]);
	}
}
//12.
int SumarVectorEnteros(int vector[], int tam, int* pSuma)
{
	int retorno = -1;
	int auxSuma = 0;

	if(vector != NULL && tam>0 && pSuma != NULL)
	{
		for(int i=0; i<tam; i++)
		{
			auxSuma = auxSuma + vector[i];
		}
		*pSuma = auxSuma;
		retorno = 0;
	}
	return retorno;
}
//13.
int SumarVectorFlotantes(float vector[], int tam, float* pSuma)
{
	int retorno = -1;
	float auxSuma = 0;

	if(vector!=NULL && tam>0 && pSuma!=NULL)
	{
		for(int i=0; i<tam; i++)
		{
			auxSuma = auxSuma + vector[i];
		}
		*pSuma = auxSuma;
		retorno = 0;
	}
	return retorno;
}
//14.
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
//15.
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
//16.
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
//17.
int ContarSignoEnteros(int vector[], int tam, int condicion, int* pContadorCoincidencias)
{
	int auxContadorCoincidencias=0;
	int signo;
	int retorno = -1;
	if(vector!=NULL && tam>0 && (condicion == 0 || condicion == 1 || condicion ==-1 ))
	{
		for(int i=0; i<tam; i++)
		{
			signo = VerificarSignoEntero(vector[i]);
			if(signo == condicion)
			{
				auxContadorCoincidencias++;
			}
		}
		*pContadorCoincidencias=auxContadorCoincidencias;
		retorno = 0;
	}
	return retorno;
}
//18.
int ContarSignoFlotantes(float vector[], int tam, int condicion, int* pContadorCoincidencias)
{
	int auxContadorCoincidencias=0;
	int signo;
	int retorno = -1;
	if(vector!=NULL && tam>0 && (condicion == 0 || condicion == 1 || condicion ==-1 ))
	{
		for(int i=0; i<tam; i++)
		{
			signo = VerificarSignoEntero(vector[i]);
			if(signo == condicion)
			{
				auxContadorCoincidencias++;
			}
		}
		*pContadorCoincidencias = auxContadorCoincidencias;
		retorno = 0;
	}
	return retorno;
}
//19.
void MostrarCantidadPositivosNegativosYCerosEnteros(int vector[], int tam)
{
	if(vector!=NULL && tam>0)
	{
		int positivos;
		int negativos;
		int ceros;
		ContarSignoEnteros(vector, tam, 1, &positivos);
		ContarSignoEnteros(vector, tam, -1, &negativos);
		ContarSignoEnteros(vector, tam, 0, &ceros);
		printf("La cantidad de numeros enteros positivos es: %d", positivos);
		printf("\nLa cantidad de numeros enteros negativos es: %d", negativos);
		printf("\nLa cantidad de ceros es: %d\n", ceros);
	}
}
//20.
void MostrarCantidadPositivosNegativosYCerosFlotantes(float vector[], int tam)
{
	if(vector!=NULL && tam>0)
	{
		int positivos;
		int negativos;
		int ceros;
		ContarSignoFlotantes(vector, tam, 1, &positivos);
		ContarSignoFlotantes(vector, tam, -1, &negativos);
		ContarSignoFlotantes(vector, tam, 0, &ceros);
		printf("La cantidad de numeros enteros positivos es: %d", positivos);
		printf("\nLa cantidad de numeros enteros negativos es: %d", negativos);
		printf("\nLa cantidad de ceros es: %d\n", ceros);
	}
}
//21.
int SumarVectorPorParidad(int* pSuma, int vector[], int tam, int paridad)
{
	int auxSuma=0;
	int retorno = -1;
	if(pSuma != NULL && vector!=NULL && tam>0 && (paridad==0 || paridad ==1))
	{
		for(int i=0; i<tam; i++)
		{
			if(VerificarParidad(vector[i])==paridad)
			{
				auxSuma = auxSuma + vector[i];
			}
		}
		*pSuma=auxSuma;
		retorno = 0;
	}
	return retorno;
}
//22.
int DeterminarMaximoPorParidad(int *pMaximo, int vector[], int tam, int paridad)
{
	int flagMaximo=0;
	int retorno = -1;
	int auxMaximo;
	if(pMaximo != NULL && vector!=NULL && tam>0 && (paridad==0 || paridad ==1))
	{
		for(int i=0; i<tam; i++)
		{
			if((VerificarParidad(vector[i])== paridad) && (flagMaximo==0 || vector[i]>auxMaximo))
			{
				auxMaximo = vector[i];
				flagMaximo = 1;
				retorno = 0;
			}
		}
		if(flagMaximo == 1)
		{
			*pMaximo = auxMaximo;
		}
	}
	return retorno;
}
//23.
void MostrarNumerosSegunParidad(int vector[], int tam, int paridad)
{
	if(vector!=NULL && tam>0 && (paridad==0 || paridad ==1))
	{
		for (int i = 0; i < tam; i++)
		{
			if (VerificarParidad(vector[i]) == paridad)
			{
				MostrarUnValorVectorEnteros(vector, tam, i);
			}
		}
	}
}
//24.
void MostrarNumerosSegunParidadDePosicion(int vector[], int tam, int paridad)
{
	if(vector!=NULL && tam>0 && (paridad==0 || paridad ==1))
	{
		for (int i = 0; i < tam; i++)
		{
			if (VerificarParidad(i) == paridad)
			{
				MostrarUnValorVectorEnteros(vector, tam, i);
			}
		}
	}
}
//25.
void InicializarVectorEnteros(int vector[], int tam, int valorInicial)
{
	if(vector!=NULL && tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			vector[i] = valorInicial;
		}
	}
}
//26.
void InicializarVectorFlotantes(float vector[], int tam, int valorInicial)
{
	if(vector!=NULL && tam>0)
	{
		for(int i=0; i<tam; i++)
		{
			vector[i] = valorInicial;
		}
	}
}
//27.
float CalcularPromedioVectorEnterosPorSigno(float* pPromedio, int vector[], int tam, int signo)
{
	float auxPromedio;
	int suma = 0;
	int contador = 0;
	int retorno = -1;
	if(vector!=NULL && tam>0 && pPromedio!=NULL && (signo==-1 || signo==0 || signo==1))
	{
		for(int i=0; i<tam; i++)
		{
			if(VerificarSignoEntero(vector[i])==signo)
			{
				suma = suma + vector[i];
				contador++;
			}
		}
		auxPromedio = (float)suma/contador;
		*pPromedio = auxPromedio;
		retorno = 0;
	}
	return retorno;
}
//28.
int DeterminarMinimoPorSigno(int* pMinimo, int vector[], int tam, int signo)
{
	int auxMinimo;
	int flagMinimo=0;
	int retorno = -1;
	if(pMinimo != NULL && vector != NULL && tam>0 && (signo==0 || signo == -1 || signo ==1))
	{
		for(int i=0; i<tam; i++)
		{
			if((VerificarSignoEntero(vector[i])==signo) && ((flagMinimo ==0) || vector[i]<auxMinimo))
			{
				auxMinimo = vector[i];
				flagMinimo = 1;
				retorno = 0;
			}
		}
		if(flagMinimo == 1)
		{
			*pMinimo = auxMinimo;
		}
	}
	return retorno;
}
//29.
int SumarNegativosAntecesores(int negativo, int* pSuma)
{
	int auxSuma = 0;
	int retorno = -1;
	if(pSuma!=NULL && negativo<0)
	{
		for(int i=negativo; i<0; i++)
		{
			auxSuma = auxSuma + i;
		}
		retorno = 0;
		*pSuma=auxSuma;
	}
	return retorno;
}

//30.
int IntercambiarEnteros(int* pVariableA, int* pVariableB)
{
	int retorno = -1;
	int auxVariable;
	if(pVariableA != NULL && pVariableB !=NULL)
	{
		auxVariable = *pVariableA;
		*pVariableA = *pVariableB;
		*pVariableB = auxVariable;
		retorno = 0;
	}
	return retorno;
}

//31.
int OrdenarVectorEnteros(int vector[], int tam, int ordenar)
{
	int retorno = -1;
	if(vector!=NULL && tam>0 && (ordenar==-1 || ordenar==1))
	{
		for(int i=0; i<tam-1; i++)
		{
			for(int j=i+1; j<tam; j++)
			{
				switch(ordenar)
				{
					case -1:
						if(vector[i]<vector[j])
						{
							IntercambiarEnteros(&vector[i], &vector[j]);
						}
					break;
					case 1:
						if(vector[i]>vector[j])
						{
							IntercambiarEnteros(&vector[i], &vector[j]);
						}
					break;

				}
			}
		}
		retorno = 0;
	}
	return retorno;
}
