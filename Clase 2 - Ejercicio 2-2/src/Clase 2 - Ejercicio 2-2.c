/*
 ============================================================================
 Name        : Clase2-Ejercicio:2-2.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 2-2:
Ingresar 10 n�meros enteros, distintos de cero. Mostrar:
Cantidad de pares e impares.
El menor n�mero ingresado.
De los pares el mayor n�mero ingresado.
Suma de los positivos.
Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	int numero;
	int numeroValidado;
	int i;
	int contadorPares = 0;
	int contadorImpares = 0;
	int menorNumero;
	int mayorNumeroPar;
	int sumaPositivos=0;
	int productoNegativos=1;
	int flagPositivos=0;
	int flagNegativos=0;

	printf("Ingreso de datos\n\n");

	for(i=0; i<10; i++)
	{
		//ingreso de numero
		printf("Ingrese el %d� numero: ",i+1);
		scanf("%d", &numero);
		//validacion de numero
		while(numero==0)
		{
			printf("El numero ingresado no puede ser cero. Reingrese el %d� numero: ", i+1);
			scanf("%d", &numero);
		}
		//carga de numero validado
		numeroValidado = numero;

		//cuento los numeros pares
		if(numeroValidado%2==0)
		{
			contadorPares++;
		}

		//cuento los numeros impares
		else
		{
			contadorImpares++;
		}

		//busqueda de maximos y minimos

		//busqueda de minimo
		if(i==0 || numeroValidado < menorNumero)
		{
			menorNumero = numeroValidado;
		}

		//busqueda de maximo par
		if(i==0 || ((numeroValidado%2==0) && numeroValidado>mayorNumeroPar))
		{
			mayorNumeroPar = numeroValidado;
		}

		//Suma de positivos
		if(numeroValidado > 0)
		{
			flagPositivos = 1;
			if(flagPositivos==1)
			{
				sumaPositivos = sumaPositivos + numeroValidado;
			}
		}
		else //producto negativos
		{
			flagNegativos = 1;
			if(flagNegativos == 1)
			{
				productoNegativos = productoNegativos * numeroValidado;
			}
		}
	}
	//Informes por pantalla

	printf("\nINFORMES\n\n");
	printf("	a. Cantidad de numeros pares: %d\n", contadorPares);
	printf("	b. Cantidad de numeros impares: %d\n", contadorImpares);
	printf("	c. El menor numero ingresado es: %d\n", menorNumero);
	printf("	d. El maximo numero par ingresado es: %d\n", mayorNumeroPar);
	if(flagPositivos==1)
	{
		printf("	e. La suma de los numeros positivos ingresados es: %d\n", sumaPositivos);
	}
	else
	{
		printf("	e. No se ingresaron numeros positivos.\n");
	}
	if(flagNegativos==1)
	{
		printf("	f. El producto de los numeros negativos ingresados es: %d", productoNegativos);
	}
	else
	{
		printf("	f. No se ingresaron numeros negativos.\n");
	}


	return EXIT_SUCCESS;
}
