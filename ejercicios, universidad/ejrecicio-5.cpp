//1. Escriba la siguiente expresion como expresion en C++

#include <iostream>

using namespace std;

int main (){
	float a,b, resultado =0;
	
	cout<<"Escriba el valor de a: "; cin>>a;
	cout<<"Escriba el valor de b: "; cin>>b;
	
	resultado = a/b +1;
	
	cout.precision(2);// Solo imprime 2 digitos 
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}