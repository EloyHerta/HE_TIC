#include<stdio.h>
#include<stdlib.h>

// Memory Allocation

int main(){
	
	char *pletra;
	int longitud;
	printf("Cuantas letras tiene la palabra? ");
	scanf("%d", &longitud);
	
	pletra = (char *) malloc(longitud);
	printf("Escribe una palabra con menos de %d letras", longitud);
	scanf("%s", pletra);
	printf("Acabas de escribir la palabra %s", pletra);
	
	
	return 0;
}
