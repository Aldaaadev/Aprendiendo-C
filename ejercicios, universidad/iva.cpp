//2. Escribe un programa que lea de la entrada estandar el precio de un
//producto y muestre en la salida estandar el precio del producto al
//aplicarle el IVA 

#include <iostream>

using namespace std;

int main (){
	float precio, valor;
	
	cout<<"El precio de producto es: "; cin>>precio;
	
	valor = precio +(precio * 0.07);
	
	cout<<"El precio del producto con IVA es: "<<valor<<endl;
	
	return 0;
}