/* Crear una cadena que tenga la siguiente frase "Hola que tal",
luego crear otra cadena para preguntar al usuario su nombre, 
por ultimo añadir el nombre al final de la primera cadena y 
mostrar el mensaje completo "Hola que tal (NombreDeLususario)"*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena1[] = "Hola que tal ";
	char cadena2[30];
	char cadena3[60];
	
	cout<<"Escriba su nombre: "; cin.getline(cadena2,30,'\n');
	
	strcpy(cadena3, cadena1);
	
	strcat(cadena3, cadena2);
	
	cout<<cadena3;
	
	getch();
	return 0;
}