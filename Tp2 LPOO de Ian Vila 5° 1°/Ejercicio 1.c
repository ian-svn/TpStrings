#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 1. Pedir al usuario que ingrese su nombre y luego imprimirlo en pantalla. */

int main(){
	
	char frase[60],operacion;
	
	do{
		printf("\n\n\t\t ---- Programa para ingresar una frase ----");
		
		printf("\n\n\t\t Ingrese una frase: ");
		fflush(stdin);
		gets(frase);
		fflush(stdin);
		
		printf("\n\t\t La frase ingresada fue: %s ", frase);
		
		printf("\n\n\n\n\t\t Ingrese '1' si quiere volver a ejecutar el programa. ");
		operacion = getch();
		system("cls");
	}while(operacion == '1');
	
	printf("\n\n\t\t\t Espero que el programa le haya sido util, saludos Ian Vila \n\n");
}
