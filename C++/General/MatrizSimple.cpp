#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string>
// EL PROGRAMA DEBE ADMITIR 2 MATRICES 3X3.

int suma(){
	
	printf("Hello");
	
	return 0;
}


int main(){
	
	int matriz_1[3][3];
	int matriz_2[3][3];
	int fil, col; 
	int matriz_suma[3][3];
	
	// Leo la matriz uno.
	for(fil=0;fil<3;fil++){
		for(col=0; col<3; col++){
		printf("\nFila %d, Columna %d: ", fil+1,col+1);
		scanf("%d", &matriz_1[fil][col]);
		}
	}
	
	for(fil=0;fil<3;fil++){
		for(col=0; col<3; col++){
		printf("\nFila %d, Columna %d: ", fil+1,col+1);
		scanf("%d", &matriz_2[fil][col]);
		}
	}
	
	// Sumo las matrices
	for(fil=0;fil<3;fil++){
		for(col=0; col<3; col++){
			matriz_suma[fil][col]=matriz_1[fil][col]+matriz_2[fil][col];
		}
	}
	
	
	printf("\nHAS INTRODUCIDO LA MATRIZ: \n");
	for(fil=0;fil<3;fil++){
		
		for(col=0; col<3; col++){
			printf("%d", matriz_1[fil][col]);
			//printf("\nLa suma de la matriz es: %d", matriz_suma);
		}
		printf("\n");
	}
	
	
	
 
 	
	 
	 
	return 0;
}
