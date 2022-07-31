/* Desarrollar una funcion que determine si una matriz es simetrica o no.
Una matriz es simetrica: A = A´t

-La matariz debe ser cuadrada. 
|2  5  9|       |2  5  9|
|5  8 -1|  -->  |5  8 -1|
|9 -1 10|       |9 -1 10|
*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos(); 
void comprobar(int m[][100], int, int);

int m[100][100], nFilas, nCol;

int main(){
	pedirDatos(); 
	comprobar(m, nFilas, nCol);
	
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

void comprobar(int m[][100], int nFilas, int nCol){
	int cont = 0;
	if(nFilas == nCol){
		for(int i=0; i<nFilas; i++){
			for(int j=0; j<nCol; j++){
				if(m[i][j] == m[j][i]){
					cont++;	
				}
			}
		}	
	}
	if(cont == nFilas * nCol){
		cout<<"\nLa matriz es Simetrica";
	}
	else{
		cout<<"\nLa matriz NO es Simetrica";
	}
}