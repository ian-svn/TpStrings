#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

/* 3. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es palíndromo (se lee igual de izquierda a derecha que de
derecha a izquierda). */

int main(){
	
	char frase[60],fraseReversa[60],operacion;
	int x,y=0, dim, count=0;
	
	do{
		count=0,y=0;
		
		printf("\n\n\t\t ---- Programa para ingresar una frase y que se diga si es palindromo o no ----");
		
		printf("\n\n\t\t Ingrese una frase: ");
		fflush(stdin);
		gets(frase);
		fflush(stdin);
		
		dim = strlen(frase);
		
		for(x=dim-1; x>=0 ;x--,y++){
			fraseReversa[y] = frase[x];
		}
		
		for(x=0;x<dim;x++){
			if(fraseReversa[x] == frase[x]){
				count++;
			}
		}
		
		if(count == dim){
			printf("\n\n\t\t La frase es pal%cdroma. ",161);
		} else {
			printf("\n\n\t\t La frase no es pal%cdroma. ",161);	
		}
		
		printf("\n\n\n\n\t\t Ingrese '1' si quiere volver a ejecutar el programa. ");
		operacion = getch();
		system("cls");
	}while(operacion == '1');
	
	printf("\n\n\t\t\t Espero que el programa le haya sido util, saludos Ian Vila \n\n");
}
