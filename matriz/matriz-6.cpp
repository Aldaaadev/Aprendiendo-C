/*6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3. */

#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int numeros[3][3];
	int matriz [3][3];
	int suma[3][3];

	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			cout<<"Escriba un numero: ["<<i<<"]["<<j<<"]"; 
			cin>>numeros[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			cout<<"Escriba un numero: ["<<i<<"]["<<j<<"]"; 
			cin>>matriz[i][j];
		}
	}
	
	cout<<"Primera Matriz\n";
	
		for(int i=0; i<3; i++){
			for(int j=0; j<3 ;j++){
				cout<<numeros[i][j]<<" ";
			}
		cout<<"\n";
	}
	
	cout<<"Segunda Matriz\n";
	
		for(int i=0; i<3; i++){
			for(int j=0; j<3 ;j++){
				cout<<matriz[i][j]<<" ";
			}
		cout<<"\n";
	}
	
	cout<<"\nSuma de la matricez\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			suma[i][j] = numeros[i][j] + matriz[i][j];
			cout<<suma[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}