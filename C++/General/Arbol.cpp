#include<iostream>
#include<stdio.h>
#include<cstdlib> 
#include<ctime> 

using namespace std;

void Structure(){
	
	srand((unsigned)time(0)); 
    int randomN;
    randomN = rand()%25 + 1; 
    cout << randomN << "\n";
    
	for(int x = 0; x <= randomN; x++){
		cout<<"";
	}
	
	
}


void Message(){
	
	string message;
		
	printf("Cual es el mensaje? "); 
	cin>>message;
	cout<<"El mensaje es: "<<message;
	
}

void Arbol(){
	
	int altura, longitud;
	string symbol = "*";
	
	printf("Cual es la altura del arbol? ");
	scanf("%d", &altura);
	printf("Cual es la longitud del arbol?");
	scanf("%d", &longitud);
	
	//printf("%d", altura); Comprobamos que la altura es guardada correctamente
	
	for(int i = 0; i <= altura-1; i++){
		for(int x = 0; x <= longitud-1; x++){
			cout<<symbol;
		}
		printf("\n");
	
	}
	printf("hey");
	
}

/*
		***
	***********
********************
*/


int main(){
	
	Structure();
	
	
	
	
	
return 0;
	
	
	//Arbol();
	//Message();
	
	
}



