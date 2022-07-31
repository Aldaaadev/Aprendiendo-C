//3. Realice un programa que lea de la entrada estandar los siguientes datos de
// de una persona:

// Edad: dato de tipo entero.
// Sexo: dato de tipo carecter.
// Altura: dato de tipo real.

// Tras leer los datos, el programa debe mostrarlos en la salida estandar 

#include <iostream>

using namespace std;

int main (){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Escriba su edad: "; cin>>edad;
	cout<<"Escriba su sexo: "; cin>>sexo;
	cout<<"Escriba su altura: "; cin>>altura;
	
	cout<<"Su edad es: "<<edad<<endl;
	cout<<"Su sexo es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura<<endl;
	
		
	return 0;
}