#include<stdio.h>

int main(){
	
	int primo[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int numDesc, division;
	
	printf("Que numero quieres descomponer? "); 
	scanf("%d",&numDesc);
	
	for(int n = 0; numDesc != 1; n++){
		
		for(int i = 0; i <= 14; i++){
			
		//printf("%d\n", primo[0]); Comprobamos que se estan utilizando los numeros del array.
		if(numDesc % primo[i] == 0){
			numDesc /= primo[i];
			printf("El divisor es %d\n", primo[i]);
			break; 							// Cerramos el bucle - segundo for(i <=14)...
		}
		if(i == 14) // Si tras pasar por los 14 numeros del array, no se puede dividir por ninguno
		{
			printf("El divisor es %d\n", numDesc);
			numDesc = 1;
		}
	}
	
	}
	
}

