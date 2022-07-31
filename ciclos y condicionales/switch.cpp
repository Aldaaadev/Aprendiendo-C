//Setencia Switch

#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"Escriba un numero del 1 al 3: "; cin>>numero;
	
	switch(numero){
		case 1: cout<<"El numero es 1";
		break;
		
		case 2: cout<<"El numero es 2";
		break;
		
		case 3: cout<<"El numero es 3";
		break;
		
		default: cout<<"No esta en el rango de 1-3";
	}
	
	return 0;
}