#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct palabritas{
	char palabra[50];
};

void clearDesdeAca(char vec[],int count){
	int x;
	for(x=count;x<strlen(vec);x++){
		vec[x] = ' ';
	}
}

void buscarSubstringEntreSi(struct palabritas palabras[5]){
	
	int x,y,z,w,dim;
	char substring[50];
	char vecAux[50],vecAux2[50];
	int count=0;
	
	for(x=0;x<strlen(palabras[0].palabra);x++){
		if(palabras[0].palabra[x]==palabras[1].palabra[x]&&count>1){
			vecAux[x] = palabras[0].palabra[x];
			if(palabras[0].palabra[x+1]!=palabras[1].palabra[x+1]){
				break;
			}
		} else if(palabras[0].palabra[x]==palabras[1].palabra[x]){
			vecAux[x] = palabras[0].palabra[x];
			count++;
		}
	}
	
	count=0;
	
	for(x=1;x<4;x++){
		count=0;
		if(strlen(palabras[x].palabra)<strlen(palabras[x+1].palabra)){
			for(y=0;y<strlen(vecAux);y++){
				if(palabras[x].palabra[y]==palabras[x+1].palabra[y]){
					vecAux[y] = palabras[x].palabra[y];	
					count++;
					if(palabras[x].palabra[y+1]!=palabras[x+1].palabra[y+1]){
						break;
					}
				}
				
			}
			clearDesdeAca(vecAux,count);
		} else {
			for(y=0;y<strlen(palabras[x].palabra);y++){
				if(palabras[x].palabra[y]==palabras[x+1].palabra[y]){
					vecAux[y] = palabras[x].palabra[y];	
					count++;
					if(palabras[x].palabra[y+1]!=palabras[x+1].palabra[y+1]){
						break;
					}
				}
			}
			clearDesdeAca(vecAux,count);
		}
	}
	
	printf("\n\n\t\t La subcadena mas larga entre las 5 palabras fue: %s ", vecAux);
	
	getch();
	system("cls");
	
	printf("\n\n\t\t Espero que el programa le haya sido util, saludos Ian Vila \n\n\n");
}

int main(){
	
	int x,y,cantPalabras=5;
	struct palabritas palabras[cantPalabras];
	
	for(x=0;x<cantPalabras;x++){
		printf("\n\t Estas ingresando la palabra nro %d, Ingrese una palabra: ",x+1);
		scanf("%s",palabras[x].palabra);
	}
	buscarSubstringEntreSi(palabras);
}
