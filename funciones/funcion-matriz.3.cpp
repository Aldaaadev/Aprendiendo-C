/* Realice una funcion que dada una matriz y un numero de fila de la matriz devuelva el menor
de los elementos almacenados en dicha fila.
*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos(); 
void comprobarMenor(int m[][100], int, int);

int m[100][100], nFilas, nCol;

int main(){
	pedirDatos(); 
	comprobarMenor(m, nFilas, nCol);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba el numero de filas: "; cin>>nFilas;
	cout<<"Escriba el numero de columnas: "; cin>>nCol;
	for(int i=0; i<nFilas; i++){
		for(int j=0; j<nCol; j++){
			cout<<"Escriba un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

void comprobarMenor(int m[][100], int nFilas, int nCol){
	int min=999,n_fila,a=0,b=0;
	
	cout<<"\nEscriba el numero de fila que quiere revisar: "; cin>>n_fila;
	if(nFilas == nCol){
		for(int i=0; i<n_fila; i++){
			for(int j=0; j<nCol; j++){
				if(m[i][j] < min){
					min = m[i][j];	
					a = i;
					b = j;
				}
			}
		}	
	}
	cout<<"El numero menor de la matriz es: "<<min;
}

