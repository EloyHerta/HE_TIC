#include<stdio.h>


main(){
	char nombre[3][20];
	
	
	
	for(int x = 0; x < 3; x++){
		printf("Introduzca el nombre %d: ", x+1);
		scanf("%s", &nombre[x]);
	}
	printf("Los nombres introducidos son:");
	for(int cont = 0; cont<3; cont++){
		
		printf(" %s, ", &nombre[cont]);
	}
	
	
	return 0;
}

