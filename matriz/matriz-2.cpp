/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz */ 

#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int matriz[100][100], f, c;
	
	cout << "Digite el numero de filas: "; cin >> f;
 	cout << "Digite el numero de columnas: "; cin >> c;


	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]";cin>>matriz[i][j];
		}
	}
//			cout<<"Los valores de la diagonal son: "<<endl;
//			cout<<matriz[i][0];
//			cout<<"\n";
//			cout<<matriz[i][1];
//			cout<<"\n";
//			cout<<matriz[i][2];

	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			if(i==j){
				cout<<matriz[i][j];
			}
		}
			cout<<"\n";
	}


	return 0;
}
