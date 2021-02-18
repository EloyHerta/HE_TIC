#include<iostream>
#include<sstream>
#include<string> 
// 17467239G
using namespace std;
int main(){
	string dni;
	string dniNumeros = "";
	string letras = "TRWAGMYFPDXBNJZSQVHLCKE";
	
	char dniLetra;
	
	int dniNum;
	
 	cout<<"Introduce your DNI: ";
	cin>>dni;
		
	cout<<"\nYour DNI is: "<<dni; // Muestra en pantalla el DNI introducido. (letra incluida).
	
	for(int x=0; x<dni.length() - 1; x++){
		dniNumeros += dni[x];
	}
	dniLetra = dni[dni.length() -1];
	
	stringstream parseToInt;  
  	parseToInt << dniNumeros;  
  	parseToInt >> dniNum; // Transformamos la string dniNumeros a int.
	
	//cout<<"\nLos numeros son: "<<dniNum; // Muestra el valor en numeros sin la letra.
	int resto = dniNum % 23;
	
	//cout<<"\nSu letra es: "<<letras[resto];
	
	if(letras[resto] == dniLetra)
		cout<<"\nEl DNI introducido es correcto.";
	else
		cout<<"\nEl DNI no coincide.";
	
	
	
	return 0;
}
