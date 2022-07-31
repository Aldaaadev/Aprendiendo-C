// Escriba un programa que lea de la entrada estandar los dos catetos de un
//triangulo rectangulo y escriba su hipotenusa

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float catetoA, catetoB, hipotenusa;
	
	cout<<"Escriba el valor del primer cateto: "; cin>>catetoA;
	cout<<"Escriba el valor del segundo cateto: "; cin>>catetoB;
	
	hipotenusa = (sqrt(pow(catetoA,2)) + (pow(catetoB,2)));
	
	cout<<"El resultado de la hipotenusa es: "<<hipotenusa;
	
	return 0;
}