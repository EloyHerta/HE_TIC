#include<stdio.h>

/*


*/
int main(){
	
	int x;
	int *px;
	x = 2;
	px = &x;
	
	int y;
	int *py;
	y = 4;
	px = &y;
	
	int z;
	int *pz;
	z = 5;
	px = &z;
	
	printf("%X, \n", &px);
	printf("%X, \n", &py);
	printf("%X, \n", &pz);
	
	int sumaTotal = x+y+z;
	int *psumaTotal = &sumaTotal;
	printf("La suma total es: %X  ", &sumaTotal);
	
	/*
	char letra;
	char *pletra;
	letra = 'Y';
	pletra = &letra;
	 
	printf("La variable letra es = %c",letra);
	printf("\nLa posicion de memoria de letra = %X", &letra);
	printf("\nPletra = %X", &pletra);
	printf("El contenido de letra desde su puntero = %c", *pletra);
	*/
	
}
