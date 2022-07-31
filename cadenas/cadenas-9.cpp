// Invertir una cadena - Funcion strrev()
// Hacer un programa que determine si una palabra es políndroma

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena[] = "hola";
	char cadena1[100];
	
	strcpy(cadena1,cadena);
	strrev(cadena1);
	
	if(strcmp(cadena,cadena1) == 0){
		cout<<"Es una palabra polindroma";
	}else {
		cout<<"No es una palabra polindroma";
	}
	
	
	getch();
	return 0;
}