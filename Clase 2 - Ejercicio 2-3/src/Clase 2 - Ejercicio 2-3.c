/*
 ============================================================================
 Name        : Gomez Iglesias, Emiliano
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata
 con un grupo de personas, de cada persona debemos obtener los
 siguientes datos:
	n�mero de cliente,
	estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
	edad( solo mayores de edad, m�s de 17),
	temperatura corporal (validar por favor)
	sexo ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de m�s de 60 a�os.
b) el n�mero de cliente y edad de la mujer soltera m�s joven.
c) cu�nto sale el viaje total sin descuento.
d) si hay m�s del 50% de los pasajeros que tiene m�s de 60 a�os , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PRECIO 600
#define DESCUENTO 0.25

int main(void) {

	setbuf(stdout,NULL);

	int numeroCliente;
	char estadoCivil;
	char estadoCivilValidado;
	int edad;
	int edadValidada;
	float temperatura;
	float temperaturaValidada;
	char sexo;
	char sexoValidado;
	int contadorPasajeros=0;
	int contador60Mas=0;
	int contadorViudos60Mas=0;
	int numeroClienteMujerJoven;
	int edadMujerJoven=-1;
	float porcentajeMayores60;
	float precioViajeTotal;
	float precioViajeDescuento;
	char respuesta='s';

	printf("Viaje a Mar del Plata\n\n");
	printf("Ingreso de datos:\n");
	do
	{
		//--Numero de cliente
		//---Carga de numero de cliente
		printf("\nIngrese el numero de cliente: ");
		scanf("%d", &numeroCliente);

		//---Estado Civil

		//Carga de estado civil
		printf("\nIngrese el estado civil (c=casado / s=soltero / v=viudo): ");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		estadoCivil = tolower(estadoCivil);

		//validacion de estado civil
		while(estadoCivil != 'c' && estadoCivil != 's' && estadoCivil != 'v')
		{
			printf("\nEl estado civil ingresado es invalido. Ingrese el estado civil (c=casado / s=soltero / v=viudo): ");
			fflush(stdin);
			scanf("%c", &estadoCivil);
			estadoCivil = tolower(estadoCivil);
		}
		//---carga de estado civil validado
		estadoCivilValidado = estadoCivil;

		//---Edad

		//Carga de edad
		printf("\nIngrese la edad (s�lo mayores de edad): ");
		fflush(stdin);
		scanf("%d", &edad);
		//validacion de edad
		while(edad<18 || edad>100)
		{
			printf("\nLa edad ingresada es invalida. Ingrese la edad (s�lo mayores de edad): ");
			scanf("%d", &edad);
		}
		//carga de edad validada
		edadValidada = edad;

		//---Temperatura

		//carga de temperatura
		printf("\nIngrese temperatura: ");
		scanf("%f", &temperatura);

		//validacion temperatura
		while(temperatura<35 || temperatura>37)
		{
			printf("\nLa temperatura ingresada es invalida. Reingrese la temperatura: ");
			scanf("%f", &temperatura);
		}

		//carga temperatura validada
		temperaturaValidada = temperatura;

		//---Sexo

		//carga de sexo
		printf("\nIngrese sexo (f=femenino / m=masculino / o=no binario): ");
		fflush(stdin);
		scanf("%c", &sexo);
		sexo = tolower(sexo);

		//validacion de sexo
		while(sexo!= 'f' && sexo != 'm' && sexo!= 'o')
		{
			printf("\nEl sexo ingresado es invalido.Reingrese sexo (f=femenino / m=masculino / o=no binario): ");
			fflush(stdin);
			scanf("%c", &sexo);
			sexo = tolower(sexo);
		}

		//carga de sexo validado
		sexoValidado = sexo;

		//Conteo

		//Cantidad de pasajeros
		contadorPasajeros++;

		//Cantidad de viudos mayores de 60 a�os
		if(edadValidada >60)
		{
			contador60Mas++;
			if(estadoCivilValidado == 'v')
			{
				contadorViudos60Mas++;
			}
		}

		//Numero cliente y edad mujer mas joven
		if(sexoValidado == 'f' && estadoCivilValidado == 's')
		{
			if((edadMujerJoven == -1) || (edadValidada < edadMujerJoven))
			{
				numeroClienteMujerJoven = numeroCliente;
				edadMujerJoven = edadValidada;
			}
		}
		//Muestra por pantalla de los datos del pasajero
		printf("\nDatos Ingresados\n\n");
		printf("\nNumero de cliente: %d", numeroCliente);
		printf("\nEstado Civil: %c", estadoCivilValidado);
		printf("\nEdad: %d", edadValidada);
		printf("\nTemperatura: %.2f�C", temperaturaValidada);
		printf("\nSexo: %c", sexoValidado);

		printf("\n\nDesea ingresar otro cliente? (s/n): ");
		fflush(stdin);
		scanf("%c", &respuesta);
		respuesta = tolower(respuesta);
	}while (respuesta!='n');

	//Calculos auxiliares

	//Porcentaje de pasajeros mayores a 60 a�os
	porcentajeMayores60 = (float)contador60Mas/contadorPasajeros;

	//Precio del viaje sin descuento
	precioViajeTotal = contadorPasajeros*PRECIO;

	//Informes por pantalla

	printf("\nINFORMES\n\n");

	//a.Cantidad de pasajeros viudos de mas de 60 a�os
	if(contadorViudos60Mas != 0)
	{
		printf("	a.Cantidad de pasajeros viudos de mas de 60 a�os: %d\n", contadorViudos60Mas);
	}
	else
	{
		printf("	a.No hay pasajeros viudos de mas de 60 a�os.\n");
	}

	//b.Numero cliente y edad mujer soltera mas joven
	if(edadMujerJoven != -1)
	{
		printf("	b.La mujer soltera mas joven es la cliente #%d y tiene %d a�os.\n", numeroClienteMujerJoven, edadMujerJoven);
	}
	else
	{
		printf("	b.No se ingresaron datos de una mujer soltera.\n");
	}

	//c) cu�nto sale el viaje total sin descuento.
	printf("	c.Precio total del viaje (sin descuentos): $%.2f\n", precioViajeTotal);

	//d) si hay m�s del 50% de los pasajeros que tiene m�s de 60 a�os , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
	if(porcentajeMayores60 > 0.5)
	{
		precioViajeDescuento = precioViajeTotal * (1-DESCUENTO);
		printf("	d.Mas del 50 por ciento de los pasajeros tiene mas de 60 a�os. Se aplica un descuento del 25 por ciento y el precio final del viaje es $ %.2f \n", precioViajeDescuento);
	}
	else
	{
		printf("	d.Menos del 50 por ciento de los pasajeros son mayores de 60 a�os. No se aplica descuento.\n");
	}
	return EXIT_SUCCESS;
}
