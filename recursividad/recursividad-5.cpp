/*22. Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la salida estandar los
numeros del ini al fin. Escriba una version que escriba los numeros en orden ascendente. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int escribeNumeros(int, int); 
void pedirDatos();
int ini,fin;

int main(){
	
	pedirDatos();		
	cout<<escribeNumeros(ini,fin)<<endl;
		
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escribe un numero inicial: "; cin>>ini;
	cout<<"Escribe un numero final: "; cin>>fin;
}

int escribeNumeros(int ini, int fin){
	int var;
	if(ini == fin){//Caso Base
		cout<<ini<<" ";
		return ini;
	}
	else{//Caso General
		var = escribeNumeros(ini,fin-1);
		cout<<fin<<" ";
		return var;
	}
}