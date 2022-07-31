/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de numeros aleatorios, copiar el contenido a otra matriz y por 
ultimo mostrarla en pantalla. */ 

#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int numeros[100][100], c, f;
	int matriz [100][100];

	cout << "Digite el numero de filas: "; cin >> f;
 	cout << "Digite el numero de columnas: "; cin >> c;

	for(int i=0; i<f; i++){
		for(int j=0; j<c;j++){
			cout<<"Escriba un numero: ["<<i<<"]["<<j<<"]"; 
			cin>>numeros[i][j];
			
			matriz[i][j] = numeros[i][j];
		}
	}
	
	for(int i=0; i<f; i++){
		for(int j=0; j<c;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}