// Copiar el contenido de una cadena a otra - funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char palabra1[] = "Holanda";
	char palabra2[20];
	
	//strcpy(cadena vacia, cadena que vamos a copiar)
	strcpy(palabra2,palabra1);
	
	cout<<palabra2<<endl;
	
	getch();
	return 0;
}