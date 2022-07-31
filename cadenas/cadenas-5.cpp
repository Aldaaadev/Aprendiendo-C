// Comparar cadenas - Funcion strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena1[] = "hola";
	char cadena2[] = "hola";
	
	if(strcmp(cadena2,cadena1) == 0){
		cout<<"Son iguales ";
	}
	
	
	getch();
	return 0;
}