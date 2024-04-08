#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

/* 2. Realiza un programa que cuente cuántas vocales tiene una cadena de
caracteres ingresada por el usuario. */

int main(){
	
	char frase[60],operacion;
	int x,cantVocales=0;
	
	do{
		cantVocales=0;
		
		printf("\n\n\t\t ---- Programa para ingresar una frase y que se diga la cantidad de vocales ----");
		
		printf("\n\n\t\t Ingrese una frase: ");
		fflush(stdin);
		gets(frase);
		fflush(stdin);
		
		for(x=0;x<strlen(frase);x++){
			if(frase[x]=='a'||frase[x]=='e'||frase[x]=='i'||frase[x]=='o'||frase[x]=='u'||frase[x]=='A'||frase[x]=='E'||frase[x]=='O'||frase[x]=='U'){
				cantVocales++;
			}
		}
		
		printf("\n\n\n\t\t La cantidad de vocales fue de: %d", cantVocales);
		
		printf("\n\n\n\n\t\t Ingrese '1' si quiere volver a ejecutar el programa. ");
		operacion = getch();
		system("cls");
	}while(operacion == '1');
	
	printf("\n\n\t\t\t Espero que el programa le haya sido util, saludos Ian Vila \n\n");
}
