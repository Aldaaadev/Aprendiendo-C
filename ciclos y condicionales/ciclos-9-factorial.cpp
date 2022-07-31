//9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

//5! = 5*4*3*2*1

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int factorial = 1,n;
	
	cout<<"Escriba un numero: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		factorial *= i;
	}
	
	cout<<"\nEl resultado es: "<<factorial<<endl;
	
	getch();
	return 0;
}