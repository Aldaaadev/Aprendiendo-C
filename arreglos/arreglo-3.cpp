/*3. Escribe un programa que lea de la entrada estandar un vector de numeros y
muestres en la salida estandar los numeros del vector con sus indices asociados */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"Diguite el numero de elemento del arreglo: "; cin>>n;
	
	for(int i=0; i<=n; i++){
		cout<<"Escribe un numero: "; cin>>numeros[i];
	}
	
	for(int i=0; i<=n; i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	
	system("pause");
	return 0;
}