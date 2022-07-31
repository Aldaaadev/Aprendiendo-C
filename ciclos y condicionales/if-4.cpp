//Comprobar si un numero digitado por el usuario es positivo o negativo

#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"Escriba un numero: "; cin>>numero;
	
	if(numero == 0){
		cout<<"El numero es 0";
	}
	else if(numero > 0){
		cout<<"El numero es positivo ";
	} else {
		cout<<"El numero es negativo ";	
	}
	
	return 0;
}