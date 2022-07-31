/* Hacer un menu que considere las siguientes opciones 
caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: salir. */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int numero,opcion;
	
	cout<<"\t Hola"<<endl;	
	cout<<"1. Cubo de un numero: \n";
	cout<<"2. Numero par o impar: \n";
	cout<<"3. Salir"<<endl;
	cout<<"Seleccione una opcion: "; cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Escriba un numero: "; cin>>numero;
				numero = pow(numero,3);
				cout<<"El numero al cubo es: "<<numero; break;
				
		case 2: cout<<"Escriba un numero: "; cin>>numero;
				if (numero == 0){
					cout<<"El numero es igual a 0";
				}
				else if(numero %2 == 0){
					cout<<"El numero es par";
				}else {
					cout<<"El numero es impar"; break;
				}
		case 3: cout<<"Vuelva Pronto... "; break;
	}
	
	return 0;
}