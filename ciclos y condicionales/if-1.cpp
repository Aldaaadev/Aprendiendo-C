// Escriba un programa que lea dos numeros y determine cual de ellos
// es el mayor

#include <iostream>
using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Escriba dos numero: "; cin>>n1>>n2;
	
	if(n1 == n2){
		cout<<"Los numeros son iguales: "
	}
	else if(n1 > n2){
		cout<<"El numero es mayor: "<<n1;
	}else {
		cout<<"El numero es mayor: "<<n2;
	}
	
	return 0;
}