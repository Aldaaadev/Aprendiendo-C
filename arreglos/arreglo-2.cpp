//2. Escribe un programa que defina un vector de numeros y calcule la multiplicacion
// acumulada de sus elementos.

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int arreglo[] = {1,2,3,4,5};
	int multiplicacion = 1;
	
	for(int i=0; i<=4; i++){
		multiplicacion *= arreglo[i];
	}
	
	cout<<"La multiplicacio del arreglo es: "<<multiplicacion<<endl;
	
	system("pause");
	return 0;
}