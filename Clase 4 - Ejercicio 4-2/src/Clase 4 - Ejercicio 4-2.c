/*
 ============================================================================
 Name        : Clase 4 - Ejercicio 4-2.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 4-2:
Realizar un programa que permita la carga de
 temperaturas en celsius y fahrenheit ,
  validando que las temperaturas ingresadas
  est�n entre el punto de congelaci�n y
  ebullici�n del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformaci�n de fahrenheit a
 celsius y de celsius a fahrenheit se hacen en
 otra biblioteca.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"
#include "Conversor_Temperaturas.h"

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	float temperatura;
	float temperaturaConvertida;

	printf("CONVERTIDOR DE TEMPERATURAS\n\n");
	do
	{
		opcion = CargarEntero("Ingrese 1 para pasar de  Celsius a Fahrenheit.\nIngrese 2 para pasar de Fahrenheit a Celsius.\nIngrese 0 para salir.\nOpcion: ","La opcion ingresada es INVALIDA.\n\nIngrese 1 para pasar de  Celsius a Fahrenheit.\nIngrese 2 para pasar de Fahrenheit a Celsius.\nIngrese 0 para salir.\nOpcion: ", 0, 2);
		printf("\n");
		switch(opcion)
		{
			case 1:
				temperatura = CargarFlotante("\nIngrese la temperatura en �C entre 0�C y 100�C: ", "\nLa temperatura ingresada es invalida. Ingrese la temperatura en �C entre 0�C y 100�C: ", 0, 100);
				temperaturaConvertida = ConvertirCelsiusAFahrenheit(temperatura);
				printf("\n	%.2f �C = %.2f �F\n", temperatura, temperaturaConvertida);
			break;

			case 2:
				temperatura = CargarFlotante("\nIngrese la temperatura en �F entre 32�C y 212�C: ", "\nLa temperatura ingresada es invalida. Ingrese la temperatura en �F entre 32�C y 212�C: ", 32, 212);
				temperaturaConvertida = ConvertirFahrenheitACelsius(temperatura);
				printf("\n	%.2f �F = %.2f �C\n", temperatura, temperaturaConvertida);
			break;
		}
	}while(opcion !=0);

	return EXIT_SUCCESS;
}
