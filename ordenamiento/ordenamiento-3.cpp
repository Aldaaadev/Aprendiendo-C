// Ordenamiento por seleccion

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int numeros[] = {3,2,1,5,4};
	int aux,min;
	
	for(int i=0; i<5; i++){
		min = i;
		for(int j=i+1; j<5; j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	for(int i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}