/*11. Escriba un programa que calcule las soluciones de una ecuacion de segundo
grado de la forma ax 2 + bx + c = 0, teniendo en cuenta que: */

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float a,b,c, resultadoP=0,resultadoN=0;
	
	cout<<"Escriba el valor de a "; cin>>a;
	cout<<"Escriba el valor de b "; cin>>b;
	cout<<"Escriba el valor de c "; cin>>c;
	
	resultadoP=( -b +sqrt( pow(b,2)-(4*a*c)))/2*a;
	resultadoN=( -b -sqrt( pow(b,2)-(4*a*c)))/2*a;
	
	cout<<"El resultado positivo es:"<<resultadoP<<endl;
	cout<<"El resultado negativo es:"<<resultadoN<<endl;
	
	return 0;
}