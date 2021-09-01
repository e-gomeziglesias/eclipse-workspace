/*
 ============================================================================
 Name        : Menu.c
 Author      : Gomez Iglesias, Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int opcion;
	setbuf(stdout, NULL);

	//el do mostrará
	do
	{
		printf("1. Alta usuario\n");
		printf("2. Baja usuario\n");
		printf("3. Modificacion usuario\n");
		printf("4. Salir\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
		case 1:
			printf("Aca estoy dando de alta\n\n");
			break;

		case 2:
			printf("Aca estoy dando de baja\n\n");
			break;

		case 3:
			printf("Aca estoy modificando\n\n");
			break;
		case 4:
			printf("Gracias por usar mi app\n\n");
			break;
		}
	}while(opcion !=4);
	return EXIT_SUCCESS;
}
