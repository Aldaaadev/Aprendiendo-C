/*21.Escriba una funcion recursiva que calcule un numero elevado a una potencia entera mayor o
igual que cero: x´y.

	potencia(x,y) = x  , y=1
	x*potencia(x,y-1)  , y>1
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int elevarExp(int, int); 

int main(){
	int x,y;
			
		cout<<"Escriba un numero: "; cin>>x;
		cout<<"Escriba el exponente: "; cin>>y;
	
	cout<<"\nPotencia de: "<<x<<" elevado a "<<y<<" es: "<<elevarExp(x,y)<<endl;
	
	getch();
	return 0;
}

int elevarExp(int x, int y){
	int pot;
	if(y==1){//Caso Base
		pot = x;
	}
	else{//Caso General
		 pot = x * elevarExp(x,y-1);
	}
	return pot;
}