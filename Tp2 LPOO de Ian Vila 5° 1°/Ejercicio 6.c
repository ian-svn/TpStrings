#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

/* 6. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo "roma" y "amor". */

int ordenAlbafetico(char frase[50]){
	int dim = strlen(frase), vectorAux[50], aux, x, y;
	
	for(x=0;x<dim;x++){
		vectorAux[x] = frase[x];
	}
	
	for(x=0;x<dim;x++){
		
		for(y=x;y<dim-1;y++){
			if(vectorAux[x]>vectorAux[y+1]){
				aux = vectorAux[x];
				vectorAux[x] = vectorAux[y+1];
				vectorAux[y+1] = aux;
			}
		}
	}
	
	for(x=0;x<dim;x++){
		frase[x]=vectorAux[x];
	}
}

int main(){
	
	char frase1[50], frase2[50], operacion;
	int x,y,dim1,dim2,count;
	
	do{
		count=0;
		
		printf("\n\n\t\t ---- Programa remplace todas las apariciones de un caracter en una cadena de caracteres ----");
		
		printf("\n\n\n\t\t\t Ingrese primera frase: ");
		fflush(stdin);
		fgets(frase1,50,stdin);
		
		printf("\n\n\t\t\t Ingrese la segunda frase: ");
		fgets(frase2,50,stdin);
		
		ordenAlbafetico(frase1);
		ordenAlbafetico(frase2);
		
		dim1 = strlen(frase1);
		dim2 = strlen(frase2);
		
		for(x=0;x<=dim1;x++){
			if(frase1[x]==' ' || frase2[x]==' '){
				continue;
			} else if(frase1[x]==frase2[x]){
				count++;
			}
		}
		
		if(count-1==dim1&&count-1==dim2){
			printf("\n\n\t\t Las frases son anagramas. ");
		} else {
			printf("\n\n\t\t Las frases no son anagramas. ");
		}
		
		printf("\n\n\n\n\t\t Ingrese '1' si quiere volver a ejecutar el programa. ");
		operacion = getch();
		system("cls");
	}while(operacion == '1');
	
	printf("\n\n\t\t\t Espero que el programa le haya sido util, saludos Ian Vila \n\n");
}
