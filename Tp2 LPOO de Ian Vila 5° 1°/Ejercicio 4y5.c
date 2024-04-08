#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

/* 4. Realiza un programa que reemplace todas las apariciones de un carácter
en una cadena de caracteres ingresada por el usuario por otro carácter
también ingresado por el usuario. */

int main(){
	
	char frase[60],fraseReversa[60],operacion,caracterAreemplazar,caracterQueReemplaza;
	int x,dim;
	
	do{
		printf("\n\n\t\t ---- Programa remplace todas las apariciones de un caracter en una cadena de caracteres ----");
		
		printf("\n\n\t\t Ingrese una frase: ");
		fflush(stdin);
		gets(frase);
		fflush(stdin);
		
		dim = strlen(frase);
		
		printf("\n\n\t\t Ingrese el caracter que quiera reemplazar de su frase ingresada anteriormente: ");
		scanf("%c",&caracterAreemplazar);
		
		fflush(stdin);
		
		printf("\n\n\t\t Ingrese por cual caracter quiere reemplazarlo: ");
		scanf("%c",&caracterQueReemplaza);
		
		for(x=0;x<dim;x++){
			if(frase[x]==caracterAreemplazar){
				frase[x]=caracterQueReemplaza;
			}
		}
		
		printf("\n\n\t\t La frase quedar%ca as%c: ' %s ' ",161,161,frase);
		
		printf("\n\n\n\n\t\t Ingrese '1' si quiere volver a ejecutar el programa. ");
		operacion = getch();
		system("cls");
	}while(operacion == '1');
	
	printf("\n\n\t\t\t Espero que el programa le haya sido util, saludos Ian Vila \n\n");
}
