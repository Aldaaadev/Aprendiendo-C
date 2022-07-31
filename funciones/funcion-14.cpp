/*14. Realice una funcion que tome como parametros un vector de numeros y su tamaño y cambie
el signo de los elementos del vector. */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();

int vec[100], tam;

void cambiarSig(int vec[], int);
void resultado(int vec[], int);

int main(){
	pedirDatos();
	cambiarSig(vec, tam);
	resultado(vec, tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba el tamano de elementos del vector: "; cin>>tam;
	
	for(int i=0; i<tam; i++){
		 cout<<i+1<<" Escriba un numero: "; cin>>vec[i];
	}
}

void cambiarSig(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] *= -1;
	}
}
	
void resultado(int vec[], int tam){
	cout<<"\nMostrando los elementos del vector con signos cambiados\n";
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
}	