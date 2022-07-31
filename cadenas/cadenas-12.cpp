/* Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su
nombre a minusculas, caso contrario no convertirlo */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena[50];
	
	cout<<"Escriba su nombre en MAYUSCULA: "; cin.getline(cadena,50,'\n');
	
	if(cadena[0] == 'A'){
		strlwr(cadena);
		cout<<cadena<<endl;
	}else {
		cout<<cadena;
	}
	
	getch();
	return 0;
}