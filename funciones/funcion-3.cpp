/*3. Escriba una funcion nombrada funpot() que eleve un numero entero que se le 
transmita a una potencia en numero entero positivo y despliegue el resultado.
El numero entero positivo debera ser el segundo valor transmitido a la funcion. */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void funpot(int a, int b);

float num, exp;

int main(){
	pedirDatos();
	funpot(num, exp);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba un numero: "; cin>>num;
	cout<<"Escriba el exponente: "; cin>>exp;
}

void funpot(int a, int b){
	long resultado=1;
	for(int i=1; i<= b; i++){
		resultado *= a;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
}