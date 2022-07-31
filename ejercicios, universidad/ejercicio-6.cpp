//2. Escriba la siguiente expresion como expresion matematica 
// como expresion en C++

#include <iostream>

using namespace std;

int main (){
	float a,b,c,d, resultado =0;
	
	cout<<"Escriba el valor de a: "; cin>>a;
	cout<<"Escriba el valor de b: "; cin>>b;
	cout<<"Escriba el valor de c: "; cin>>c;
	cout<<"Escriba el valor de d: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(2);// Solo imprime 2 digitos 
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}