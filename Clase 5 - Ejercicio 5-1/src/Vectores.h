/*
 * Vectores.h
 *
 *  Created on: 6 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */

#ifndef VECTORES_H_
#define VECTORES_H_



#endif /* VECTORES_H_ */

/// @fn int CargarVectorEnteros(int[], int)
/// @brief Permite cargar numeros enteros en un vector
///
/// @param vector vector donde se almacenan los numeros cargados
/// @param tam cantidad de elementos a cargar
/// @return 0 si error, 1 si ok
///
int CargarVectorEnteros (int vector[], int tam);

/// @fn int MostrarVectorEnteros(int[], int)
/// @brief Dado un vector de enteros, permite mostrarlo por consola
///
/// @param vector vector de enteros a mostrar
/// @param tam cantidad de elementos del vector
/// @return 0 si error, 1 si ok
int MostrarVectorEnteros(int  vector[], int tam);

/// @fn int SumarVectorEnteros(int[], int)
/// @brief permite sumar los valores cargados en un vector
///
/// @param vector vector con los valores a sumar
/// @param tam tamaño del vector
/// @return total de la suma
int SumarVectorEnteros(int vector[], int tam);
