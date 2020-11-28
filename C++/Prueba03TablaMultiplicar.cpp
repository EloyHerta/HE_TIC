#include<iostream>
#include<stdio.h>


using namespace std;

int main(){
	
	int tablaNum, resultado;
	
	cout<<"Que tabla quieres calcular? "; //cin>>tablaNum;
	scanf("%d",&tablaNum);
	
	for(int i = 0; i <=10; i++){
		
		resultado = tablaNum * i;
		printf("%d * %d = %d\n",tablaNum,i,resultado);
		
	}
	
	
	return 0;
	
}
