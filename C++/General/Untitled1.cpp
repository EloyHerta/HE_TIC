#include<iostream>
#include<stdio.h>
#include <cstdlib> 
#include <ctime> 

using namespace std;

	int main(){
		int puntuacion;
		int resultados[6];
		srand((unsigned) time(0));
		
		for(int i = 0; i<6; i++){
			puntuacion = rand() % 6 + 1;
			printf("La puntuacion es: %d\n", puntuacion);
			resultados[i] = puntuacion;
		}
		for(int i=0; i<6; i++){
			printf("\nArray: [%d]", resultados[i]);
		}
		
		
    	
		
		
		return 0;
	}
