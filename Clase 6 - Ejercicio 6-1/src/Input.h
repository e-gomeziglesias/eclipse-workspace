/*
 * Input.h
 *
 *  Created on: 1 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */

#ifndef INPUT_H_
#define INPUT_H_



#endif /* INPUT_H_ */

//1.
/// @fn int CargarFlotante(float*, char*, char*, float, float, int)
/// @brief Permite cargar un numero flotante definido dentro de un rango y con una cantidad definida de reintentos en caso de error
///
/// @param pFlotante puntero a flotante donde se guardara el numero validado
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en caso de ingreso erroneo
/// @param minimo cota inferior del rango
/// @param maximo cota superior del rango
/// @param reintentos cantidad de reintentos
/// @return 0 si ok, -1 si error.
int CargarFlotante(float* pFlotante, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

//2.
/// @fn int CargarEntero(int*, char*, char*, int, int, int)
/// @brief Permite cargar un numero entero definido dentro de un rango y con una cantidad definida de reintentos en caso de error
///
/// @param pEntero puntero a entero donde se guardara el numero validado
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en caso de ingreso erroneo
/// @param minimo cota inferior del rango
/// @param maximo cota superior del rango
/// @param reintentos cantidad de reintentos
/// @return 0 si ok, -1 si error.
int CargarEntero(int* pEntero, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

//3.
/// @fn char CargarChar(char*, char[], char[], int, int)
/// @brief permite cargar un caracter y elegir si cargarlo en mayuscula o en minuscula
///
/// @param pCaracter puntero a char donde se guardará el caracter validado
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en caso de ingreso de datos fallido
/// @param capital 0 para pasar a minuscula, 1 para pasar a mayuscula
/// @param reintentos cantidad de reintentos en caso de error
/// @return 0 si ok, -1 si error.
int CargarChar(char* pCaracter, char mensaje[], char mensajeError[], int capital, int reintentos);

//4.
/// @fn int CargarEnteroValidadoDistintoDeValor(int*, char[], char[], int, int)
/// @brief permite cargar un valor entero que sea distinto de un valor elegido, con una cantidad de reintentos en caso de error.
///
/// @param pEntero puntero a int donde se almacenará el entero validado
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en caso de error en el ingreso
/// @param valor valor que no puede tomar el entero
/// @param reintentos cantidad de reintentos en caso de error
/// @return 0 si OK, -1 si error.
int CargarEnteroValidadoDistintoDeValor(int* pEntero, char mensaje[], char mensajeError[], int valor, int reintentos);

//5.
/// @fn int CargarVectorEnterosValidados(int[], int, char[], char[], int, int)
/// @brief Permite cargar un vector con una cantidad de valores definidas por el usuario, dentro de un rango
///
/// @param vector vector donde se almacenarán los valores cargados por el usuario.
/// @param tam tamaño del vector
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en el ingreso de datos
/// @param minimo cota inferior del rango
/// @param maximo cota superior del rango
/// @param reintentos cantidad de reintentos en caso de carga errónea
/// @return 0 si se pudo cargar, -1 si hubo error.
int CargarVectorEnterosValidados (int vector[], int tam, char mensaje[], char mensajeError[], int minimo, int maximo, int reintentos);

//6.
/// @fn int CargarVectorFlotantesValidados(int[], int, char[], char[], int, int)
/// @brief Permite cargar un vector con una cantidad de valores definidas por el usuario, dentro de un rango
///
/// @param vector vector donde se almacenarán los valores cargados por el usuario.
/// @param tam tamaño del vector
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error en el ingreso de datos
/// @param minimo cota inferior del rango
/// @param maximo cota superior del rango
/// @param reintentos cantidad de reintentos en caso de carga errónea
/// @return 0 si se pudo cargar, -1 si hubo error.
int CargarVectorFlotantesValidados (float vector[], int tam, char mensaje[], char mensajeError[], float minimo, float maximo, int reintentos);

//7.
/// @fn int CargarAleatoriamenteVectorEnterosValidadosDistintosDeValor(int[], int, char[], char[], int)
/// @brief Permite cargar valores en un vector que sean distintos de un valor en particular
///
/// @param vector vector donde se cargaran los valores
/// @param tam tamaño del vector
/// @param mensaje mensaje de ingreso de datos
/// @param mensajeError mensaje de error al ingresar datos
/// @param valor valor que no podran tomar los numeros cargados
/// @param reintentos cantidad de reintentos en caso de carga erronea
/// @return 0 si ok, -1 si error
int CargarAleatoriamenteVectorEnterosValidadosDistintosDeValor (int vector[], int tam, char mensaje[], char mensajeError[], int valor, int reintentos);

//8.
/// @fn int MostrarVectorEnteros(int[], int)
/// @brief Dado un vector de enteros, permite mostrarlo por consola
///
/// @param vector vector de enteros a mostrar
/// @param tam cantidad de elementos del vector
void MostrarVectorEnteros(int vector[], int tam);

//9.
/// @fn int MostrarVectorFlotantes(float[], int)
/// @brief Dado un vector de flotantes, permite mostrarlo por consola
///
/// @param vector vector de flotantes a mostrar
/// @param tam cantidad de elementos del vector
void MostrarVectorFlotantes(float vector[], int tam);

//10.
/// @fn int MostrarUnValorVectorEnteros(int[], int, int)
/// @brief Dado un indice, muestra el valor del vector de enteros, asociado a ése indice
///
/// @param vector vector de enteros de donde se mostrará el valor
/// @param tam tamaño del vector
/// @param indice indice que determinará el valor del vector a mostrar
void MostrarUnValorVectorEnteros(int vector[], int tam, int indice);

//11.
/// @fn int RetornarUnValorVectorFlotantes(float[], int, int)
/// @brief Dado un indice, muestra el valor del vector de flotantes, asociado a ése indice
///
/// @param vector vector de flotantes de donde se mostrará el valor
/// @param tam tamaño del vector
/// @param indice indice que determinará el valor del vector a mostrar
void MostrarUnValorVectorFlotantes(float vector[], int tam, int indice);

//12.
/// @fn int SumarVectorEnteros(int, int, int*)
/// @brief permite sumar los valores cargados en un vector
///
/// @param vector vector con los valores a sumar
/// @param tam tamaño del vector
/// @param pSuma puntero a la variable donde se almacenará el resultado de la suma
/// @return -1 si error, 0 si OK
int SumarVectorEnteros(int vector[], int tam, int* pSuma);

//13.
/// @fn int SumarVectorFlotantes(float[], int, float*)
/// @brief permite sumar los valores cargados en un vector
///
/// @param vector vector con los valores a sumar
/// @param tam tamaño del vector
/// @param pSuma puntero a la variable donde almacenar el resultado de la suma
/// @return
int SumarVectorFlotantes(float vector[], int tam, float* pSuma);

//14.
/// @fn int VerificarSignoEntero(int)
/// @brief permite determinar el signo de un numero entero
///
/// @param valor numero a evaluar signo
/// @return -1 si es negativo, 1 si es positivo, 0 si es cero
int VerificarSignoEntero(int valor);

//15.
/// @fn int VerificarSignoEntero(int)
/// @brief permite determinar el signo de un numero flotante
///
/// @param valor numero a evaluar signo
/// @return -1 si es negativo, 1 si es positivo, 0 si es cero
int VerificarSignoFlotante(float valor);

//16.
/// @fn int VerificarParidad(int)
/// @brief Permite determinar la paridad de un numero
///
/// @param valor numero a evaluar la paridad
/// @return 0 si es par, 1 si es impar
int VerificarParidad(int valor);

//17.
/// @fn int ContarSignoEnteros(int[], int, int)
/// @brief Dado un vector de enteros, permite contar la cantidad de valores que cumplen una condicion de signo
///
/// @param vector vector a analizar
/// @param tam tamaño del vector
/// @param condicion -1 para contar negativos, 0 para contar 0, 1 para contar positivos
/// @param pContadorCoincidencias puntero a la variable donde se almacenarán la cantidad de coincidencias encontradas
/// @return cantidad de coincidencias encontradas
int ContarSignoEnteros(int vector[], int tam, int condicion, int* pContadorCoincidencias);

//18.
/// @fn int ContarSignoFlotantes(float[], int, int)
/// @brief Dado un vector de flotantes, permite contar la cantidad de valores que cumplen una condicion de signo
///
/// @param vector vector a analizar
/// @param tam tamaño del vector
/// @param condicion -1 para contar negativos, 0 para contar 0, 1 para contar positivos
/// @param pContadorCoincidencias puntero a la variable donde se almacenara la cantidad de coincidencias encontradas
/// @return 0 si OK, -1 si error
int ContarSignoFlotantes(float vector[], int tam, int condicion, int* pContadorCoincidencias);

//19.
/// @fn void MostrarCantidadPositivosYNegativosEnteros(int[], int)
/// @brief Muestra por pantalla la cantidad de numeros positivos, negativos y ceros ingresados
///
/// @param vector vector de donde se tomaran los valores a imprimir
/// @param tam tamaño del vector
void MostrarCantidadPositivosNegativosYCerosEnteros(int vector[], int tam);

//20.
/// @fn void MostrarCantidadPositivosYNegativosFlotantes(float[], int)
/// @brief Muestra por pantalla la cantidad de numeros positivos, negativos y ceros ingresados
///
/// @param vector vector de donde se tomaran los valores a imprimir
/// @param tam tamaño del vector
void MostrarCantidadPositivosNegativosYCerosFlotantes(float vector[], int tam);

///21.
/// @fn int SumarVectorEnterosPorParidad(int[], int, int)
/// @brief Permite sumar los valores de un vector que cumplan con una condicion de paridad
///
/// @param pSuma puntero donde se almacenará el resultado de la suma
/// @param vector vector donde se tomaran los valores a sumar
/// @param tam tamaño del vector
/// @param paridad 0 si es par, 1 si es impar
/// @return 0 si OK, -1 si error
int SumarVectorPorParidad(int* pSuma, int vector[], int tam, int paridad);

//22.
/// @fn int DeterminarMaximoPorParidad(int[], int, int)
/// @brief Devuelve maximo encontrado en un vector, que cumpla una condicion de paridad
///
/// @param pMaximo puntero a la variable donde se almacenará el maximo encontrado
/// @param vector vector donde buscar el maximo
/// @param tam tamaño del vector
/// @param paridad 0 para buscar par, 1 para buscar impar
/// @return 0 si se encontró maximo, -1 si error o no se econtro el maximo
int DeterminarMaximoPorParidad(int* pMaximo, int vector[], int tam, int paridad);

//23.
/// @fn void MostrarNumerosSegunParidad(int, int, int)
/// @brief Permite mostrar los valores de un vector que cumplan con una condicion de paridad
///
/// @param vector vector de donde se obtendran los valores a imprimir
/// @param tam tamaño del vector
/// @param paridad 0 para par, 1 para impar
void MostrarNumerosSegunParidad(int vector[], int tam, int paridad);

//24.
/// @fn void MostrarNumerosSegunParidadDePosicion(int[], int, int)
/// @brief Muestra por pantalla los valores del vector cuya posicion cumpla una condicion de paridad
///
/// @param vector vector cuyos valores se imprimiran
/// @param tam tamaño del vector
/// @param paridad 0 si par, 1 si impar
void MostrarNumerosSegunParidadDePosicion(int vector[], int tam, int paridad);

//25.
/// @fn void InicializarVectorEnteros(int[], int, int)
/// @brief inicializa un vector con un valor
///
/// @param vector vector a inicializar
/// @param tam tamaño del vector
/// @param valorInicial valor con el que se inicializa el vector
void InicializarVectorEnteros(int vector[], int tam, int valorInicial);

//26.
/// @fn void InicializarVectorFlotantes(float[], int, int)
/// @brief inicializa un vector con un valor
///
/// @param vector vector a inicializar
/// @param tam tamaño del vector
/// @param valorInicial valor con el que se inicializa el vector
void InicializarVectorFlotantes(float vector[], int tam, int valorInicial);

//27.
/// @fn float CalcularPromedioVectorEnterosPorSigno(int[], int, int)
/// @brief permite calcular el promedio de los valores de un vector que cumplan una condicion de signo
///
/// @param vector vector de cuyos valores se calculara el promedio
/// @param pPromedio puntero a la variable donde almacenar el promedio calculado.
/// @param tam tamaño del vector
/// @param signo -1 si negativo, 0 si 0, 1 si positivo
/// @return 0 si OK, -1 si error
float CalcularPromedioVectorEnterosPorSigno(float* pPromedio, int vector[], int tam, int signo);

//28.
/// @fn int DeterminarMinimoPorSigno(int[], int, int)
/// @brief permite determinar un minimo de un vector dentro de un subconjunto que cumpla una condicion de signo
///
/// @param pMinimo puntero a la variable donde se almacenara el minimo.
/// @param vector vector donde se buscara el minimo
/// @param tam tamaño del vector
/// @param signo -1 si negativo, 0 si cero, 1 si positivo
/// @return 0 si OK, -1 si error o si no se encontro el minimo
int DeterminarMinimoPorSigno(int* pMinimo, int vector[], int tam, int signo);

//29.
/// @fn int SumarNegativosAntecesores(int)
/// @brief permite,dado un numero negativo, sumar a sus antecesores
///
/// @param negativo numero desde el cual se comenzara a sumar
/// @param pSuma puntero a la variable donde se guardará el valor de la suma
/// @return 0 si OK, -1 si error
int SumarNegativosAntecesores(int negativo, int* pSuma);

//30.
/// @fn int IntercambiarEnteros(int*, int*)
/// @brief Dados dos numeros, permite intercambiarlos entre sí.
///
/// @param pVariableA primer numero a intercambiar
/// @param pVariableB segundo numero a intercambiar
/// @return 0 si OK, -1 si error
int IntercambiarEnteros(int* pVariableA, int* pVariableB);
