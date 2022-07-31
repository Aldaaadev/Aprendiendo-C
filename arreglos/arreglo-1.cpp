//1. Escribe un programa que defina un vector de numeros y calcule al sumade sus elementos

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int arreglo[] = {1,2,3,4,5};
	int suma = 0;
	
	for(int i=0; i<=4; i++){
		suma += arreglo[i];
	}
	
	cout<<"La suma del arreglo es: "<<suma<<endl;
	
	system("pause");
	return 0;
}