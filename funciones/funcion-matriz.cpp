//Paso de parametros tipo matriz

//Elevar al cuadrados todos los elementos de una matriz

#include<iostream>
#include<conio.h>
using namespace std;

void mostrar(int m[][3], int, int);
void cuadrado(int m[][3], int, int);
void mostrarCuadrado(int m[][3], int, int);

int main(){
	const int nFilas = 2;
	const int nCol = 3;
	int m[nFilas][nCol] = {{1,2,3},{4,5,6}};
	
	mostrar(m, nFilas, nCol);
	cuadrado(m, nFilas, nCol);
	mostrarCuadrado(m, nFilas, nCol);
	
	getch();
	return 0;
}

void mostrar(int m[][3], int nFilas, int nCol){
	cout<<"Mostrando matriz:\n";
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void cuadrado(int m[][3], int nFilas, int nCol){
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarCuadrado(int m[][3], int nFilas, int nCol){
	cout<<"\nMostrando Matriz Cuadrada\n";
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}