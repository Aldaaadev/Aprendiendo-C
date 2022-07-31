/*1. Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros, multiplique
estos dos numeros y despliegue el resultado. */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void mult(float a, float b);

float num1, num2;

int main(){
	pedirDatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba 2 numeros: "; cin>>num1>>num2;
}

void mult(float a, float b){
	float multiplicacion = a * b;
	
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
}

