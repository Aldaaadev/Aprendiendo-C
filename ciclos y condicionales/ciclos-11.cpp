//11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	int suma=0,n,exp=0;
	
	cout<<"Escriba un numero: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		exp = pow(2,i);
		suma += exp;
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	getch();
	return 0;
}