/*15. Realiza una funcion que tome como parametros un vector de enteros y su tamaño e imprima 
un vector con los elementos impares del vector recibido. */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();

int vec[100], vec2[100], tam, tam2=0;

void impar(int vec[], int vec2[], int);
void resultado(int vec[], int);

int main(){
	pedirDatos();
	impar(vec,vec2, tam);
	resultado(vec2, tam2);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba el tamano de elementos del vector: "; cin>>tam;
	
	for(int i=0; i<tam; i++){
		 cout<<i+1<<" Escriba un numero: "; cin>>vec[i];
	}
}

void impar(int vec[], int vec2[], int tam){
	int j=0;
	for(int i=0; i<tam; i++){
		if(vec[i] %2 != 0){
			vec2[i] = vec[i];
			j++;
			tam2++;		
		}
	}
}
	
void resultado(int vec[], int tam){
	cout<<"\nMostrando los elementos del vector impares\n";
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
}	