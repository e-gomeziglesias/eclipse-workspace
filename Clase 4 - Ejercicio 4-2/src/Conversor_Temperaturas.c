/*
 * Conversor_Temperaturas.c
 *
 *  Created on: 1 sep. 2021
 *      Author: Gomez Iglesias, Emiliano
 */

float ConvertirCelsiusAFahrenheit (float celsius)
{
	float auxFahrenheit;
	float fahrenheit;

	auxFahrenheit = ((celsius*1.8)+32);

	fahrenheit = auxFahrenheit;

	return fahrenheit;
}

float ConvertirFahrenheitACelsius (float fahrenheit)
{
	float auxCelsius;
	float celsius;

	auxCelsius = ((fahrenheit-32)/1.8);

	celsius = auxCelsius;

	return celsius;
}
