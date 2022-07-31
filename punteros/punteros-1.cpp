/*1. Comprobar si un numero es par o impar, y señalar la posicion de memoria donde se esta guardando
el numero. Con punteros. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	int numero,*dir_num;
	
	cout<<"Escriba un numero: "; cin>>numero;
	dir_num = &numero;
	
	if(*dir_num %2==0){
		cout<<"El numero "<<*dir_num<<" es par"<<endl;
		cout<<"La direccion de memoria es: "<<dir_num<<endl;
	}
	else{
		cout<<"El numero "<<*dir_num<<"es impar"<<endl;
		cout<<"La direccion de memoria es: "<<dir_num<<endl;
	}
	

		
	getch();
	return 0;
}