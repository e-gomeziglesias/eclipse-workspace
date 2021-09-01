/*
 * Bibliotecas.c
 *
 *  Created on: 31 ago. 2021
 *      Author: Dellie
 */
#include <stdio.h>
#include"Biblioteca.h"
//2- Desarrollo o implementacion de la funcion
/**/
int SumarNumeros(int unNumero, int otroNumero) //copio el prototipo, sin ;
{//1.el set de llaves determina el scope o alcance de la funcion
	int resultado; //2.esto será lo que devuelve la funcion
	/*Las variables definidas dentro de una funcion son variables locales
	 * tienen alcance sólo dentro del scope de la funcion.*/
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


