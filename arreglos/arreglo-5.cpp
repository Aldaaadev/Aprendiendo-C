/*5. Desarrolle un programa que lea de la entrada estandar un vector de enteros y
determine el mayor elemento del vector*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numeros[100],n,mayor=0;
	
	cout<<"Diguite el numero de elemento del arreglo: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Escribe un numero: "; cin>>numeros[i];

		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	cout<<"El numero mayor es: "<<mayor<<endl;
	
	system("pause");
	return 0;
}