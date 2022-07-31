/*2. Hacer un programa que pida al usuario que digite una cadena de carecteres,
luego  verificar la longitud de la cadena, y si esta supera los 10 caracteres 
mostrarla en pantalla, caso contrario no mostrarla */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char palabra[100];
	int longitud = 0;
	
	cout<<"Escriba una cadena de caracteres: "; cin.getline(palabra,100,'\n');
	
	longitud = strlen(palabra);
	
	if(longitud > 10){
		cout<<"El numero de elementos de la cadena es: "<<longitud<<endl;
	}
	
	
	getch();
	return 0;
} 