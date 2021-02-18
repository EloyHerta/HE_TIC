#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int tirada(){
	
	int puntuacion, pTotal;
	srand(time(0));
	puntuacion = rand() % 6 + 1;
	
	return(puntuacion);
	
	
}

void escribe_ganador(int puntuacion_1, int puntuacion_2){
	
	if(puntuacion_1 > puntuacion_2){
		printf("\nORDENADOR WINS");
	}else{
		if(puntuacion_2 > puntuacion_1){
			printf("\nJUGADOR WINS");
		}else{
			printf("\nEMPATE.");
		}
	}
	
}



int main(){
	
	int puntuacion; int tecla, total1 = 0, total2 = 0;
	int resultados;
	int marcador1[3];
	int marcador2[3];
	
	for(int t = 0; t < 3; t++ ){
		printf("\nTurno %d. Ordenador. Presiona cualquier tecla", t+1);
		scanf("%c", &tecla);
		marcador1[t] = tirada();
		printf(" %d", marcador1[t]);
		
		
		printf("\nTurno %d. Jugador. Presiona cualquier tecla", t+1);
		scanf("%c", &tecla);
		marcador2[t] = tirada();
		printf(" %d", marcador2[t]);
		escribe_ganador(marcador1[t], marcador2[t]);
		
	}
	
	printf("\n*****************************************************");
	printf("\n*PUNTUACIONES			      *");
	
	printf("\n*****************************************************");
	printf("\n              PC       JUGADOR      ");
	for(int t = 0; t < 3; t++){
		
		printf("\n* TURNO %d    %d    %d", t+1, marcador1[t], marcador2[t]);
		total1 = total1+marcador1[t];
		total2 = total2+marcador2[t];
	}
	
	
	return 0;
	
	
	/*
	VOLUNTARIO: 
	
	1. marcador[2][3] (una matriz)
	2. Sacar fuera del cuerpo todos los procesos y funciones que se nos ocurran. Hacerlo todo con
	funciones (eFECTIVAMENTE)
	(turno1)  sustituyendo las lineas  //TURNO ORDENADOR.
	
	
	
	
	
	*/
	
}
