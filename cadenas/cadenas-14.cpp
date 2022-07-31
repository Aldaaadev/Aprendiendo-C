/*9. Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre en la
salida estandar cuantos ocurrencias de cada vocal existen en la cadena */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	char cad[50];
	int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
		
	cout<<"Escriba su nombre una cadena: "; cin.getline(cad,50,'\n');

	for(int i=0; i<50; i++){
		switch(cad[i]){
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
		}
	}
	
	cout<<"Vocal a aparece: "<<vocal_a<<endl;
	cout<<"Vocal e aparece: "<<vocal_e<<endl;
	cout<<"Vocal i aparece: "<<vocal_i<<endl;
	cout<<"Vocal o aparece: "<<vocal_o<<endl;
	cout<<"Vocal u aparece: "<<vocal_u<<endl;
	
	getch();
	return 0;
}