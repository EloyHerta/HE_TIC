#include<stdio.h>

int main(){
	
	int numeros[10];
	int bolsillo;
	
	printf("Introduzca diez numeros. ");
	for(int cont = 0; cont < 10; cont++){
		printf("\nNumero %d: ", cont);
		scanf("%d", &numeros[cont]);
	}
	for(int veces = 1; veces<10; veces++)
		for(int pos = 0; pos<9; pos++){
			if(numeros[pos] > numeros[pos+1]){ // Vamos a intercambiar 
				bolsillo = numeros[pos];
				numeros[pos] = numeros[pos+1];
				numeros[pos+1] = bolsillo;
		}
	}
	
	printf("Ordenada: ");
	for(int cont = 0; cont<10; cont++){
		printf("\nNumero %d: %d", cont, numeros[cont]);
	}
	
	
	return 0;
}
