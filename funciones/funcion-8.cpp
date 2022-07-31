/*8. Escriba una funcion nombrada cambio() que tenga un parametro en numero entero y seis parametros de
referencia en numero entero nombrados cien, cicuenta, veinte, diez, cinco, uno, respectivamente. La funcion
tiene que consider el valor entero transmitido como una cantidad en dolares y convertir el valor en el 
numero menor de billetes equivalentes. */

#include<iostream>
#include<conio.h>
using namespace std;

//Plantilla de Funcion
void cambio(int, int&, int&,int&,int&,int&,int&);

int main(){
	int dolares;
	int cien = 100;
	int cincuenta = 50;
	int veinte = 20;
	int diez = 10;
	int cinco = 5;
	int uno = 1;
	
	cout<<"\tDolares en Billetes\n "<<endl;
	cout<<"Escriba la cantidad de dinero: $"; cin>>dolares;
	
	cambio(dolares,cien,cincuenta,veinte,diez,cinco,uno);	
	
	cout<<"\nBilletes en dolares: "<<endl;
	cout<<"$100: "<<cien<<endl;
	cout<<"$50: "<<cincuenta<<endl;
	cout<<"$20: "<<veinte<<endl;
	cout<<"$10: "<<diez<<endl;
	cout<<"$5: "<<cinco<<endl;
	cout<<"$1: "<<uno<<endl;
	
	getch();
	return 0;
}

void cambio(int dinero, int& cien, int& cincuenta,int& veinte, int& diez, int& cinco, int& uno){
	cien = dinero/100; dinero%=100;
	cincuenta = dinero/50; dinero%=50;
	veinte = dinero/20; dinero%=20;
	diez = dinero/10; dinero%=10;
	cinco = dinero/5; dinero%=5;
	uno = dinero;
}