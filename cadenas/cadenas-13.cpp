// Transformar una cadenas de numeros - funcion atoi() y atof()
// Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos
// a su respectivos valores y por ultimo sumarlos

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cad[50];
	char cad1[50];
	int num;
	float num1, resultado;
	
	cout<<"Escriba su nombre un numero entero: "; cin.getline(cad,50,'\n');
	cout<<"Escriba su nombre un numero decimal: "; cin.getline(cad1,50,'\n');
	
	num = atoi(cad);
	num1 = atof(cad1);
	
	resultado = num + num1;
	
	cout<<resultado<<endl;
	
	getch();
	return 0;
}
