// Leer tres numeros y devolver el mayor de ellos.
#include<stdio.h>

using namespace std;

void NumeroMayor(){
	
	int num1,num2,num3, mayor;
	printf("Introduzca tres numeros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	//printf("You introduced: %d %d %d", num1,num2,num3);
	if(num1 > num2 && num1 > num3){
		mayor = num1;	
		printf("El numero mayor es: %d",mayor);
	}else if(num2 > num1 && num2 > num3){
		mayor = num2;
		printf("El numero mayor es: %d",mayor);
	}else{
		mayor = num3;
		printf("El numero mayor es: %d",mayor);
}
	
}
// Suma numeros dentro de un array. 
void SumaArray(){
	
	int sumaTotal, suma;
	int numbers [5] = {16,21, 46, 40, 10}; 
	sizeof(numbers);
	for(int i = 0; i < 5; i++){
		
		sumaTotal += numbers[i];
		
	}
	printf("La suma total es: %d",sumaTotal);
	
}


int main(){
	
	SumaArray();
	printf("\n");
	NumeroMayor();
	
	return 0;	
	
}

