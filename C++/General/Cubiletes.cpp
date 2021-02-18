#include<stdio.h>
// ¿Y los arrays?

int main(){
	
	char letras[4];
	letras[0]='H';
	letras[1]='O';	
	letras[2]='L';
	letras[3]='A';
	
	
	for(int cont = 0; cont < 10; cont++){
		
		printf("%c", *(letras+cont));
		//printf("%c", letras[cont]) Es lo mismo.
	}
	
}
