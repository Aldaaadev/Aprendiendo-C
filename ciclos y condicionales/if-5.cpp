// Escriba un programa que solicite una edad (un entero) e indique en la 
// salida estandar si la edad introducida esta en el rango [18-25]

#include <iostream>
using namespace std;

int main(){
	int edad;
	
	cout<<"Escriba su edad: "; cin>>edad;
	
	if(edad >= 18 and  edad <=25){
		cout<<"Se encuentra en el rango de edad de [18-25]";
	}else {
		cout<<"No se encuentra en el rango de edad";
	}
	
	
	return 0;
}