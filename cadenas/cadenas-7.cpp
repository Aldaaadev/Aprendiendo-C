// Añadir o concatenar una cadena con otra - Funcion strcat()

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena1[] = "Esto es una ";
	char cadena2[] = "prueba";
	char cadena3[40];
	
	strcpy(cadena3, cadena1);
	
	strcat(cadena3, cadena2);
	
	cout<<cadena3;
	
	getch();
	return 0;
}