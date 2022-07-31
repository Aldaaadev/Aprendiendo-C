// Realice un programa que solicite de la entrada estandar un numero del 1 aL
// 10 y muestre en la salida estandar su tabla de multiplicacion

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numero;
	
	do {
			
	cout<<"Escriba un numero del 1 al 10 "; cin>>numero;
	} while (numero < 1 or numero >10);
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	getch();
	return 0;
}

