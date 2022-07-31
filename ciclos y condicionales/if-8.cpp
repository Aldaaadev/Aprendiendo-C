/* Escribe un programa que lea de la entrada estandar tres numeros. Despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de los
introducidos con anterioridad */

#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Escriba tres numeros: "; cin>>n1>>n2>>n3;
	cout<<"Escriba un numero: "; cin>>n4;
	
	
	if((n4 == n1) and (n4 == n2) and (n4 == n3)){
		cout<<"El ultimo numero introducido coincide con los demas";
	}else {
		cout<<"El ultimo numero introducido no coincide con los demas";
	}
	
	
	return 0;
}