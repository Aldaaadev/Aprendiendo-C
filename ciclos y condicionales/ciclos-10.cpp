//7. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factorial)

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int suma=0,n,factorial = 1;
	
	cout<<"Escriba un numero: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		factorial *= i;
		suma += factorial;
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	getch();
	return 0;
}