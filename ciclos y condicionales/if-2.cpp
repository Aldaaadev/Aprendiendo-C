// Escriba un programa que lea tres numeros y determine cual de ellos
// es el mayor

#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Escriba tres numero: "; cin>>n1>>n2>>n3;
	
	if(n1 == n2 and n2 == n3){
		cout<<"Los numeros son iguales: ";
	}
	else if(n1 > n2 and n3 < n1){
		cout<<"El numero mayor es: "<<n1;
	}else if (n2 > n3 and n1 < n2) {
		cout<<"El numero mayor es: "<<n2;
	} else {
		cout<<"El numero mayor es: "<<n3;
	}
	
	return 0;
}
	
	