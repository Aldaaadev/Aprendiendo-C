//1. Escriba un programa que lea la entrada estandar dos numeros
// y muestre en la salida estandar su suma, resta, multiplicacion y division

#include <iostream>

using namespace std;

int main (){
	int n1,n2, suma =0, resta=0, multiplicacion=0,division=0;
	
	cout<<"Escribe un numero";
	cin>>n1;
	
	cout<<"Escribe un numero";
	cin>>n2;
	
	cout<<"El resultado de la suma es: "<<n1 + n2<<endl;
	cout<<"El resultado de la resta es: "<<n1 - n2<<endl;
	cout<<"El resultado de la multiplicacion es: "<<n1 * n2<<endl;
	cout<<"El resultado de la division es: "<<n1 / n2<<endl;
	
	return 0;
}