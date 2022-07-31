/*4. Ejecute el programa del ejercicio anterior con entradas erroneas y
observe los resultados. Por ejemplo, introduzca un dato de tipo carecter
cuadno se espera un dato de tipo entero */

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