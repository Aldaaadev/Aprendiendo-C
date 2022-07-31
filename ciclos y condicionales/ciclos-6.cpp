//6. Escriba un programa que calcule x y, donde tanto x como y son enteros,
// sin utilizar la funcion pow

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero,exp,resultado=1,i;
	
	cout<<"Escriba un numero: "; cin>>numero;
	
	if(numero < 0){
		cout<<"Escribe un numero mayor a 0 ";
		cout<<"Escriba un numero: "; cin>>numero;
	}
	
	cout<<"\nEscriba el exponente: "; cin>>exp;
	
	
	while(i <= 0);
	
		for(i=0; i<= exp; i++){
			resultado *= numero;
		}
	
	cout<<"\nEl resultado es: "<<resultado<<endl;	
	
	
	return 0;
}