#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

void Calculate(){
	
	int x; int y;
	
	printf("Introduzca los valores de X e Y: "); 
	scanf("%d %d", &x, &y);
	int resultado = x+y;
	printf("El resultado es: %d", resultado);
}

void Message(){
	
	string message;
	
	printf("Has elegido mandar un mensaje, cual es? ");
	cin>>message;
	cout<<""<<message;
}


int main(){
	
	int option;
	
	cout<<"------------------------------------"<<endl;
	cout<<"     Choose an option..."<<endl;  
	cout<<"      1. Calculate "<<endl;       
	cout<<"      2. Send message "<<endl;  
	cout<<"------------------------------------"<<endl;
	cin>>option;
	
/*	if(option == 1){
		Calculate();
		}else if(option == 2){
		Message();
		}  
*/
	if(option == 1 || 2){
		switch(option){
			case 1: Calculate();
			break;
			case 2: Message();
			break;
		}
	}else{
		printf("No es una entrada valida. ");
	}


	}







