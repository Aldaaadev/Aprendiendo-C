/*4. Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier numero
introducido por el usuario. Por ejemplo, si se introduce el numero 256.879, deberia 
desplegarse el numero 0.879. */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void partfrc(double a, int b);

double num;
int decimal;

int main(){
	pedirDatos();
	partfrc(num,decimal);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba un numero con decimales: "; cin>>num;
}

void partfrc(double a, int b){
	double resultado;
	decimal = num;
	resultado = num - decimal; 
	
	cout<<"El resultado es: "<<resultado<<endl;
}