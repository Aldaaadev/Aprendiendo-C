// Ordenamiento por Insercion

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int numeros[] = {2,4,5,1,3};
	int pos,aux;
	
	for(int i=0; i<5; i++){
		pos = i;
		aux = numeros[i];
		while((pos > 0) and (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	for(int i=0; i>=5; i++){
		cout<<numeros[i];
	}
	
	
	getch();
	return 0;
}