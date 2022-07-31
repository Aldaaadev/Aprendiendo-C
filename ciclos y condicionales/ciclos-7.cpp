//7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int suma=0,n;
	
	cout<<"Escriba un numero: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		suma += i;
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	getch();
	return 0;
}