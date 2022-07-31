/*Paso de parametros de tipo vector

Parametros de la funcion:
	void nombreFuncion(tipo nombreArreglo[], int tamañoArreglo)
	
Llamada a la funcion
	nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadros de los elementos del vector

#include<iostream>
#include<conio.h>
using namespace std;

void cuadrado(int vec[], int);
void resultado(int vec[], int);

int main(){
	const int tam = 5;
	int vec[tam] = {1,2,3,4,5};
	
	cuadrado(vec, tam);
	resultado(vec, tam);
	
	getch();
	return 0;
}

void cuadrado(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] *= vec[i]; 
	}
}

void resultado(int vec[], int tam){
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" "; 
	}
}