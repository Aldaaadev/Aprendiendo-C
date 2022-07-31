//5. Escriba un fragmento de programa que intercambie los valores de dos
// variables

#include <iostream>

using namespace std;

int main (){
	int x= 5;
	int y= 10;
	int aux;
	
	cout<<"Escirba el numero de x: "; cin>>x;
	cout<<"Escriba el numero de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"El nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y<<endl;
	
	return 0;
}