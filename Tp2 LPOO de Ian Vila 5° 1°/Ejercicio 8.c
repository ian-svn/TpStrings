#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void may(char vec[]){
    int x;
    for(x=0;x<strlen(vec);x++){
        if(vec[x]>=97&&vec[x]<=122){
            vec[x] = vec[x] - 32;
        }
    }
}

void men(char vec[]){
    int x;
    for(x=0;x<strlen(vec);x++){
        
        if(vec[x]>=65&&vec[x]<=90){
            vec[x] = vec[x] + 32;
        }
    }
}

void interc(char vec[]){
    int x,count;
    for(x=0,count=0;x<strlen(vec);x++){

        if(vec[x]!=' '){
            if(count%2==0){
                if(vec[x]>=97&&vec[x]<=122){
        	    	vec[x] = vec[x] - 32;
        		}
            }
            if(count%2!=0){
                if(vec[x]>=65&&vec[x]<=90){
            		vec[x] = vec[x] + 32;
        		}
            }
            count++;
        }

    }
}

void mayDespEsp(char vec[]){
    int x;

    for(x=0;x<strlen(vec);x++){
        if(x==0){
            if(vec[x]>=97&&vec[x]<=122){
				vec[x] = vec[x] - 32;
        	}
        }
        if(vec[x]==' '&&vec[x+1]!=' '){
            if(vec[x+1]>=97&&vec[x+1]<=122){
                vec[x+1] = vec[x+1] - 32;
            }
        }
    }

}

void pause(){
    getch();
    system("cls");
}

int main(){
    char operacion;
    char frase[50];
    char aux;

    do {
    	system("cls");
        aux='1';

        printf("\n\n\t\t --- Programa para pasar una frase y pasarla a las siguientes opciones ---");

        printf("\n\n\t\t 1- Mayuscula    2- Minuscula    3- Intercalado     4- Mayuscula Post Espacio \n");

	    printf("\n\n\t\t Ingrese la operacion que quiera realizar: ");
		
		scanf("%c",&operacion);
		fflush(stdin);

		if(operacion=='1'||operacion=='2'||operacion=='3'||operacion=='4'){
			
	        printf("\n\n\t\t\t Ingrese la frase que quiere pasar: ");
	        fflush(stdin);
			gets(frase);
	        fflush(stdin);
	
		}
        switch (operacion) {
            case '1':
                may(frase);
                break;
            case '2':
                men(frase);
                break;
            case '3':
                interc(frase);
                break;
            case '4':
                mayDespEsp(frase);
                break;

            default:
                printf("\n\t\t\t Error: Ingrese una operacion válida. ");
                aux='0';
                pause();
                break;
        }

		printf("\n\n\t\t\t La palabra quedo así: %s", frase);
		
        if(aux!='0'){
            printf("\n\n\n\n\t\t Si quiere ejecutar nuevamente el programa ingrese el '0': ");
            aux = getch();
        }

    }while(aux=='0');

	system("cls");

    printf("\n\n\t\t\t\t Espero que el programa te haya sido útil, saludos Ian Vila. ");
    getch();

}

