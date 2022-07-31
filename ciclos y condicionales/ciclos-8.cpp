//8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int suma=0,n;
	
	cout<<"Escriba un numero: "; cin>>n;
	
	for(int i=1; i<=(2*n)-1; i+=2){
		suma += i;
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	getch();
	return 0;
}