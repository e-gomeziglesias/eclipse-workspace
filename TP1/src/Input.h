/*
 * Input.h
 *
 *  Created on: 1 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */

#ifndef INPUT_H_
#define INPUT_H_



#endif /* INPUT_H_ */

/// @fn float CargarFlotante(char[], char[], float, float)
/// @brief Permite cargar un numero flotante, validando que se encuentre dentro de un rango
///
/// @param mensaje Mensaje para comenzar el ingreso de datos.
/// @param mensajeError Mensaje para informar el ingreso incorrecto de datos y pedir el reingreso.
/// @param minimo cota inferior del rango que puede tomar el numero ingresado.
/// @param maximo cota superior del rango que puede tomar el numero ingresado.
/// @return devuelve el numero flotante validado.
float CargarFlotante (char mensaje[], char mensajeError[], float minimo, float maximo);

/// @fn int CargarEntero(char[], char[], int, int)
/// @brief Permite cargar un numero entero, validando que se encuentre dentro de un rango
///
/// @param mensaje Mensaje para comenzar el ingreso de datos.
/// @param mensajeError Mensaje para informar el ingreso incorrecto de datos y pedir el reingreso.
/// @param minimo cota inferior del rango que puede tomar el numero ingresado.
/// @param maximo cota superior del rango que puede tomar el numero ingresado.
/// @return devuelve el numero entero validado.
int CargarEntero(char mensaje[], char mensajeError[], int minimo, int maximo);
