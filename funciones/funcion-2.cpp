/*2. Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor
que se le transmite y despliegue el resultado. La funcion debera ser capaz de 
elevar al cuadrado numeros flotantes. */

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void al_cuadrado(float a);

float num;

int main(){
	pedirDatos();
	al_cuadrado(num);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba un numero: "; cin>>num;
}

void al_cuadrado(float a){
	float cuadrado = pow(a,2);
	
	cout<<"El resultado del cuadrado es: "<<cuadrado<<endl;
}