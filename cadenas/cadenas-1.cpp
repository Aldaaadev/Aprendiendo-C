// Longitud de una cadena de carecteres - Funcion strlen()

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char palabra[] = "Holanda";
	int longitud = 0;
	
	longitud = strlen(palabra);
	
	cout<<"El numero de elementos de la cadena es: "<<longitud<<endl;
	
	getch();
	return 0;
}