/*3. Escribe un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso del ultimo al primer elemento */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"Diguite el numero de elemento del arreglo: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Escribe un numero: "; cin>>numeros[i];
	}
	
	for(int i=n-1; i>=0; i--){
		cout<<numeros[i]<<endl;
	}
	
	system("pause");
	return 0;
}