/* Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena1[100];
	char cadena2[100];
	
	cout<<"Escriba la primera cadena de caracteres: "; cin.getline(cadena1,100,'\n');
	cout<<"Escriba la segunda cadena de caracteres: "; cin.getline(cadena2,100,'\n');
	
	if(strcmp(cadena1,cadena2) == 0){
		cout<<"Son iguales ";
	} else if (strcmp(cadena1,cadena2) > 0){
		cout<<cadena1;
	}else{
		cout<<cadena2;
	}
	
	
	getch();
	return 0;
}