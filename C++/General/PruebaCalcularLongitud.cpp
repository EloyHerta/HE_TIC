#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int longitud(){
	char palabra[20];
	printf("Introduce una palabra: ");
	scanf("%s", &palabra);

	int i = 0; 
    while (palabra[i]) 
        i++; 
    printf("La longitud es: %d", i); 
    return(i);
}

class MiClase
{
	int var1; //Variable de clase
	const double var2 = 3.14159;  //Variable de clase
	
};

int main(){

	int aceite; 
	
	
	return 0;
}



