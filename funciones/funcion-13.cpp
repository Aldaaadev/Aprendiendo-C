/*13. Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector
esta ordenado crecientemente. Sugerencia: compruebe que para todas las posiciones del vector,
salvo 0, el elemento del vector es mayor o igual que el elemento que procede del vector. */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();

int vec[100], tam;

void comprobar(int vec[], int);

int main(){
	pedirDatos();
	comprobar(vec, tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba el tamano de elementos del vector: "; cin>>tam;
	
	for(int i=0; i<tam; i++){
		 cout<<i+1<<" Escriba un numero: "; cin>>vec[i];
	}
}

void comprobar(int vec[], int tam){
	int aux=1;
	for(int i=1; i<tam; i++){
		if(vec[i] >= vec[i-1]){
			aux += 1;
		} 
	}
	
	if(aux == tam){
		cout<<"El arreglo esta ordenado crecientemente";
	}
	else{
		cout<<"El arreglo NO esta ordenado crecientemente";
	}
}