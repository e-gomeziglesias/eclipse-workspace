/*
 * Input.h
 *
 *  Created on: 1 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */

#ifndef INPUT_H_
#define INPUT_H_



#endif /* INPUT_H_ */

/// @fn float CargarFlotanteValidado(char[], char[], float, float)
/// @brief Permite cargar un numero flotante, validando que se encuentre dentro de un rango
///
/// @param mensaje Mensaje para comenzar el ingreso de datos.
/// @param mensajeError Mensaje para informar el ingreso incorrecto de datos y pedir el reingreso.
/// @param minimo cota inferior del rango que puede tomar el numero ingresado.
/// @param maximo cota superior del rango que puede tomar el numero ingresado.
/// @return devuelve el numero flotante validado.
float CargarFlotanteValidado (char mensaje[], char mensajeError[], float minimo, float maximo);

/// @fn int CargarEnteroValidado(char[], char[], int, int)
/// @brief Permite cargar un numero entero, validando que se encuentre dentro de un rango
///
/// @param mensaje Mensaje para comenzar el ingreso de datos.
/// @param mensajeError Mensaje para informar el ingreso incorrecto de datos y pedir el reingreso.
/// @param minimo cota inferior del rango que puede tomar el numero ingresado.
/// @param maximo cota superior del rango que puede tomar el numero ingresado.
/// @return devuelve el numero entero validado.
int CargarEnteroValidado(char mensaje[], char mensajeError[], int minimo, int maximo);

/// @fn int CargarVectorEnterosValidados(int[], int, char[], char[], int, int)
/// @brief Permite cargar un vector con una cantidad de valores definidas por el usuario, dentro de un rango
///
/// @param vector vector donde se almacenarán los valores cargados por el usuario.
/// @param tam tamaño del vector
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en el ingreso de datos
/// @param minimo cota inferior del rango
/// @param maximo cota superior del rango
/// @return 1 si se pudo cargar, 0 si hubo error.
int CargarVectorEnterosValidados (int vector[], int tam, char mensaje[], char mensajeError[], int minimo, int maximo);

/// @fn int CargarVectorFlotantesValidados(int[], int, char[], char[], int, int)
/// @brief Permite cargar un vector con una cantidad de valores definidas por el usuario, dentro de un rango
///
/// @param vector vector donde se almacenarán los valores cargados por el usuario.
/// @param tam tamaño del vector
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en el ingreso de datos
/// @param minimo cota inferior del rango
/// @param maximo cota superior del rango
/// @return 1 si se pudo cargar, 0 si hubo error.
int CargarVectorFlotantesValidados (float vector[], int tam, char mensaje[], char mensajeError[], float minimo, float maximo);

/// @fn int MostrarVectorEnteros(int[], int)
/// @brief Dado un vector de enteros, permite mostrarlo por consola
///
/// @param vector vector de enteros a mostrar
/// @param tam cantidad de elementos del vector
void MostrarVectorEnteros(int vector[], int tam);

/// @fn int MostrarVectorFlotantes(float[], int)
/// @brief Dado un vector de flotantes, permite mostrarlo por consola
///
/// @param vector vector de flotantes a mostrar
/// @param tam cantidad de elementos del vector
void MostrarVectorFlotantes(float vector[], int tam);

/// @fn int MostrarUnValorVectorEnteros(int[], int, int)
/// @brief Dado un indice, muestra el valor del vector de enteros, asociado a ése indice
///
/// @param vector vector de enteros de donde se mostrará el valor
/// @param tam tamaño del vector
/// @param indice indice que determinará el valor del vector a mostrar
void MostrarUnValorVectorEnteros(int vector[], int tam, int indice);

/// @fn int RetornarUnValorVectorFlotantes(float[], int, int)
/// @brief Dado un indice, muestra el valor del vector de flotantes, asociado a ése indice
///
/// @param vector vector de flotantes de donde se mostrará el valor
/// @param tam tamaño del vector
/// @param indice indice que determinará el valor del vector a mostrar
void MostrarUnValorVectorFlotantes(float vector[], int tam, int indice);


/// @fn int SumarVectorEnteros(int[], int)
/// @brief permite sumar los valores cargados en un vector
///
/// @param vector vector con los valores a sumar
/// @param tam tamaño del vector
/// @return total de la suma
int SumarVectorEnteros(int vector[], int tam);

/// @fn int SumarVectorFlotantes(float[], int)
/// @brief permite sumar los valores cargados en un vector
///
/// @param vector vector con los valores a sumar
/// @param tam tamaño del vector
/// @return total de la suma
float SumarVectorFlotantes(float vector[], int tam);

/// @fn int VerificarSignoEntero(int)
/// @brief permite determinar el signo de un numero entero
///
/// @param valor numero a evaluar signo
/// @return -1 si es negativo, 1 si es positivo, 0 si es cero
int VerificarSignoEntero(int valor);

/// @fn int VerificarSignoEntero(int)
/// @brief permite determinar el signo de un numero flotante
///
/// @param valor numero a evaluar signo
/// @return -1 si es negativo, 1 si es positivo, 0 si es cero
int VerificarSignoFlotante(float valor);

/// @fn int VerificarParidad(int)
/// @brief Permite determinar la paridad de un numero
///
/// @param valor numero a evaluar la paridad
/// @return 0 si es par, 1 si es impar
int VerificarParidad(int valor);

/// @fn int ContarSignoEnteros(int[], int, int)
/// @brief Dado un vector de enteros, permite contar la cantidad de valores que cumplen una condicion de signo
///
/// @param vector vector a analizar
/// @param tam tamaño del vector
/// @param condicion -1 para contar negativos, 0 para contar 0, 1 para contar positivos
/// @return cantidad de coincidencias encontradas
int ContarSignoEnteros(int vector[], int tam, int condicion);

/// @fn int ContarSignoFlotantes(float[], int, int)
/// @brief Dado un vector de flotantes, permite contar la cantidad de valores que cumplen una condicion de signo
///
/// @param vector vector a analizar
/// @param tam tamaño del vector
/// @param condicion -1 para contar negativos, 0 para contar 0, 1 para contar positivos
/// @return cantidad de coincidencias encontradas
int ContarSignoFlotantes(float vector[], int tam, int condicion);

/// @fn void MostrarCantidadPositivosYNegativosEnteros(int[], int)
/// @brief Muestra por pantalla la cantidad de numeros positivos, negativos y ceros ingresados
///
/// @param vector vector de donde se tomaran los valores a imprimir
/// @param tam tamaño del vector
void MostrarCantidadPositivosNegativosYCerosEnteros(int vector[], int tam);

/// @fn void MostrarCantidadPositivosYNegativosFlotantes(float[], int)
/// @brief Muestra por pantalla la cantidad de numeros positivos, negativos y ceros ingresados
///
/// @param vector vector de donde se tomaran los valores a imprimir
/// @param tam tamaño del vector
void MostrarCantidadPositivosNegativosYCerosFlotantes(float vector[], int tam);


/// @fn int SumarVectorEnterosPorParidad(int[], int, int)
/// @brief Permite sumar los valores de un vector que cumplan con una condicion de paridad
///
/// @param vector vector donde se tomaran los valores a sumar
/// @param tam tamaño del vector
/// @param paridad 0 si es par, -1 si es impar
/// @return total de la suma de los valores que cumplieron con la condicion
int SumarVectorPorParidad(int vector[], int tam, int paridad);

/// @fn int DeterminarMaximoPorParidad(int[], int, int)
/// @brief Devuelve el maximo encontrado en un vector, que cumpla una condicion de paridad
///
/// @param vector vector donde buscar el maximo
/// @param tam tamaño del vector
/// @param paridad 0 para buscar par, 1 para buscar impar
/// @return maximo encontrado segun paridad
int DeterminarMaximoPorParidad(int vector[], int tam, int paridad);

/// @fn void MostrarNumerosSegunParidad(int, int, int)
/// @brief Permite mostrar los valores de un vector que cumplan con una condicion de paridad
///
/// @param vector vector de donde se obtendran los valores a imprimir
/// @param tam tamaño del vector
/// @param paridad 0 para par, 1 para impar
void MostrarNumerosSegunParidad(int vector[], int tam, int paridad);

/// @fn void MostrarNumerosSegunParidadDePosicion(int[], int, int)
/// @brief Muestra por pantalla los valores del vector cuya posicion cumpla una condicion de paridad
///
/// @param vector vector cuyos valores se imprimiran
/// @param tam tamaño del vector
/// @param paridad 0 si par, 1 si impar
void MostrarNumerosSegunParidadDePosicion(int vector[], int tam, int paridad);
