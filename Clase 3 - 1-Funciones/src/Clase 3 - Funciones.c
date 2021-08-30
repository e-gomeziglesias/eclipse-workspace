/*
 ============================================================================
 Name        : Clase 3 - Funciones.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


/*Sin modularizar-Escribir todo en una misma funcion:
 *
 * (X) Se hace incontrolable
 * ante la depuraci�n, tenemos que buscar
 * codigo inalcanzable
 *
 * (X)Hay una dependencia del codigo
 *
 * (X)Uso innecesario de funcionalidades
 *
 * Redundancia en el codigo (escribo una y otra
 * vez el mismo codigo
 * */

/*Programar en funciones:
 *
 * Se divide el programa en pedacitos, en modulos.
 *
 * Para ello, hay que tener muy en claro que hace cada
 * modulo.
 *
 * Instancias a tener en cuenta:
 *
 * 1- Declaracion de la funcion (prototipo o firma de la funcion)
 * 		Doy a conocer la funcion
 * 		LA INICIAL DE CADA PALABRA DEL NOMBRE DE LA FUNCION VA EN MAYUSCULAS
 * 		que devuelve --- como se llama --- (que recibe / argumento)
 * 	ejemplo:
 */

//1-Prototipo o firma
int SumarNumeros(int unNumero, int otroNumero); //obs: se finaliza con ;, como cuando declaro una variable
/*En el prototipo, no es necesario indicar los
 * nombres de los parametros.
 * S� hay que poner el tipo de dato
 *
 *
 * a. Parametros Formales: se definen en el prototipo y en la implementacion de la funcion
*/
void MostrarResultado(int);
void Calcular (void);

int main(void) {
	setbuf(stdout,NULL); //setea el buffer de salida, poniendole un valor NULL

	int resultado; //donde guardo lo que devuelve la funcion
	int unNumero = 8;
	int otroNumero;


	printf("Prueba funcion Sumar\n");
	printf("Ingrese el segundo numero: ");
	scanf("%d", &otroNumero);
	resultado = SumarNumeros(7,4); //3-Llamada a la funcion
	//b. Parametros Actuales: son los parametros que aparecen cuando llamo a la funcion
	//printf("La suma es %d", suma);
	MostrarResultado(resultado);

	resultado = SumarNumeros(unNumero, otroNumero);
	MostrarResultado(resultado);

	return EXIT_SUCCESS;
}


//2- Desarrollo o implementacion de la funcion
/**/
int SumarNumeros(int unNumero, int otroNumero) //copio el prototipo, sin ;
{//1.el set de llaves determina el scope o alcance de la funcion
	int resultado; //2.esto ser� lo que devuelve la funcion
	/*Las variables definidas dentro de una funcion son variables locales
	 * tienen alcance s�lo dentro del scope de la funcion.*/
	resultado = unNumero + otroNumero; //4.

	return resultado; //3. return retorna la variable / valor que le indico a continuacion
} //cuando la llamada a la funcion detecta el return o la llave de cierre, la funcion se desapila de memoria.

void MostrarResultado(int resultado)
{
	printf("La suma es: %d\n", resultado);
}

void Calcular (void)
{

}
