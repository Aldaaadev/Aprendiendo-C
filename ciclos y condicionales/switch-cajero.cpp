// Hacer un programa que simule un cajero automatico con un saldo inicial de
// 1000 dolares 

#include <iostream>
using namespace std;

int main(){
	int saldoInicial = 1000, opcion;
	float ingresar, saldo=0,retiro,internet;
	
	cout<<"\t Bienvidido a su Cajero Automatico"<<endl;
	cout<<"1. Ingresar dinero"<<endl;
	cout<<"2. Retirar dinero"<<endl;
	cout<<"3. Pagar Internet"<<endl;
	cout<<"4. Salir";
	cout<<"\nEliga una opcion: "; cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Ingrese la cantidad: "; cin>>ingresar;
				saldo = saldoInicial + ingresar;
				cout<<"Saldo Actual"<<saldo; break;
				
		case 2: cout<<"Ingrese la cantidad: "; cin>>retiro;
				
				if(retiro > saldoInicial){
					cout<<"No tiene dinero suficiente\n";
				}else {
					saldo = saldoInicial - retiro;
					cout<<"Dinero en cuenta "<<saldo; break;
				}
				
		case 3: cout<<"Ingrese la cantidad: "; cin>>internet;
				
				if(retiro > saldoInicial){
					cout<<"No tiene dinero suficiente\n";
				}else {
					saldo = saldoInicial - retiro;
					cout<<"Dinero en cuenta "<<saldo; break;
				}
			
		case 4:	break;
	}
	
	return 0;
}