//10. Realice un programa que calcule el valor que toma la siguiente funcion
// para unos valores de x e y:

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float x,y,resultado=0;
	
	cout<<"Escriba el valor de x: "; cin>>x;
	cout<<"Escriba el valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}