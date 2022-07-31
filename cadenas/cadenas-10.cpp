// Pasar una palabra a MAYUSCULA - Funcion strupr()
// Convertir dos cadenas de minuscula a MAYUSUCULAS. Compararlas, y decir si son iguales o no.

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena[] = "hola";
	char cadena1[] = "hola";
	
	strupr(cadena);
	strupr(cadena1);
	
	cout<<cadena<<endl;
	cout<<cadena1<<endl;
	
	if(strcmp(cadena,cadena1) == 0){
		cout<<"Las cadenas son iguales ";
	}else {
		cout<<"Las cadenas no son iguales ";
	}
	
	getch();
	return 0;
}