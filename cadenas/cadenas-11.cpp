// Pasar una palabra a minuscula - Funcion strlwr()

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena[] = "HOLA";
	char cadena1[] = "HOLA";
	
	strlwr(cadena);
	strlwr(cadena1);
	
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