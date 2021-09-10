/*
 ============================================================================
 Name        : pruebas.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	for(int i=5; i>0; i--)
	{
		printf("Hola\n");
	}
	return EXIT_SUCCESS;
}
