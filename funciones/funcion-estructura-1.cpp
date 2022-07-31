/*17. Suma de numeros complejos */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Complejo{
	float real,imaginaria;
}z1,z2;

// Prototipo
void pedirDatos();
void mostrar(Complejo);
Complejo suma(Complejo, Complejo);

int main(){
	pedirDatos();
	
	Complejo x = suma(z1, z2);
	mostrar(x);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba los datos para el primer numero complejo: "<<endl;
	cout<<"Escriba el numero real:"; cin>>z1.real;
	cout<<"Escriba su numero imaginario: "; cin>>z1.imaginaria;
	
	cout<<"\nEscriba los datos para el segundo numero complejo: "<<endl;
	cout<<"Escriba el numero real:"; cin>>z2.real;
	cout<<"Escriba su numero imaginario: "; cin>>z2.imaginaria;
}

Complejo suma(Complejo z1, Complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	
	return z1;
}


void mostrar(Complejo x){
	cout<<"\nResultado de la suma: "<<x.real<<" , "<<x.imaginaria<<endl;
}