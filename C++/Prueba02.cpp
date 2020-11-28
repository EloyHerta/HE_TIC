#include<iostream>
#include<stdio.h>

using namespace std;


void Calculate(){
	
	int x=2; int y=3; int resultado;
		
	resultado = x+y;
	cout<<"El resultado es: "<<resultado;
	
}

void Message(){
	
	cout<<"Message is..."<<endl;
	cout<<"Helloooo!";
	
}

int main(){
	
	int answer;
	
	cout<<"|----------------------------------------------|"<<endl;
	cout<<"|            1. Calculate -function            |"<<endl;
	cout<<"|            2. Message -function              |"<<endl; 
	cout<<"|----------------------------------------------|"<<endl;
	cin>>answer;
	
	switch(answer){
		
		case 1: Calculate(); // We execute the function Calculate
		break;
		case 2: Message(); // We execute the function Message
		break;
			
	}
	
	return 0;
}
























