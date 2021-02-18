#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int devuelveLongitud(char *pletra){
	int longitud = 0;
	int i = 0;
	
	while(*(pletra)+i) != '\0'{
		i++;
	}
	longitud = i;
	return(longitud);
	
}


int main(){
	
	char *lista[3];
	char aux[20];
	int longitud;
	

	for(int i = 0; i<3; i++){
		
		printf("\nPalabra %d ",i);
		scanf("%s", &aux);
		
		//longitud = strlen(aux);
		printf("%d", devuelveLongitud(aux));
		
		//lista[i] = (char *) malloc(devuelveLongitud(lista+i);  //strcopy syntax = destino, origen
		//strcpy(lista[i], aux);
	
	}
	
	printf("\n********************************************");
	printf("\n* 			LISTA DE PALABRAS             *            ");
	printf("\n********************************************");
	
	for(int i = 0; i<3; i++){
		printf("\n %d - %s", i, *(lista + i));
	}
	
	return 0;
}
