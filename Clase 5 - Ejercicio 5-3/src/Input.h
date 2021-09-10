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

/// @fn char CargarChar(char[], char[], int)
/// @brief Permite cargar un caracter, validar que sea una letra y pasarlo a mayuscula o minuscula
///
/// @param mensaje mensaje de carga de caracter
/// @param mensajeError mensaje de error en la carga
/// @param capital 1 para pasar letra a mayuscula, 0 para pasarlo a minuscula
/// @return el caracter cargado en mayuscula
char CargarChar(char mensaje[], char mensajeError[], int capital);

/// @fn int CargarEnteroValidadoDistintoDeValor(char[], char[], int)
/// @brief Permite cargar un numero entero, distinto de un valor
///
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error al cargar los datos
/// @param valor valor que no puede tomar el numero cargado
/// @return
int CargarEnteroValidadoDistintoDeValor(char mensaje[], char mensajeError[], int valor);

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

/// @fn int CargarAleatoriamenteVectorEnterosValidadosDistintosDeValor(int[], int, char[], char[], int)
/// @brief Permite cargar valores en un vector que sean distintos de un valor en particular
///
/// @param vector vector donde se cargaran los valores
/// @param tam tamaño del vector
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error al ingresar datos
/// @param valor valor que no podran tomar los numeros cargados
/// @return 1 si ok, 0 si error
int CargarAleatoriamenteVectorEnterosValidadosDistintosDeValor (int vector[], int tam, char mensaje[], char mensajeError[], int valor);

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

/// @fn void InicializarVectorEnteros(int[], int, int)
/// @brief inicializa un vector con un valor
///
/// @param vector vector a inicializar
/// @param tam tamaño del vector
/// @param valorInicial valor con el que se inicializa el vector
void InicializarVectorEnteros(int vector[], int tam, int valorInicial);

/// @fn void InicializarVectorFlotantes(float[], int, int)
/// @brief inicializa un vector con un valor
///
/// @param vector vector a inicializar
/// @param tam tamaño del vector
/// @param valorInicial valor con el que se inicializa el vector
void InicializarVectorFlotantes(float vector[], int tam, int valorInicial);

/// @fn float CalcularPromedioVectorEnterosPorSigno(int[], int, int)
/// @brief permite calcular el promedio de los valores de un vector que cumplan una condicion de signo
///
/// @param vector vector de cuyos valores se calculara el promedio
/// @param tam tamaño del vector
/// @param signo -1 si negativo, 0 si 0, 1 si positivo
/// @return el promedio calculado
float CalcularPromedioVectorEnterosPorSigno(int vector[], int tam, int signo);

/// @fn int DeterminarMinimoPorSigno(int[], int, int)
/// @brief permite determinar un minimo de un vector dentro de un subconjunto que cumpla una condicion de signo
///
/// @param vector vector donde se buscara el minimo
/// @param tam tamaño del vector
/// @param signo -1 si negativo, 0 si cero, 1 si positivo
/// @return devuelve el minimo encontrado segun la condicion de signo
int DeterminarMinimoPorSigno(int vector[], int tam, int signo);

/// @fn int SumarNegativosAntecesores(int)
/// @brief permite,dado un numero negativo, sumar a sus antecesores
///
/// @param negativo numero desde el cual se comenzara a sumar
/// @return el valor de la suma
int SumarNegativosAntecesores(int negativo);
