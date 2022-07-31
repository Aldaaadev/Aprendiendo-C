// Busqueda Secuencial

// a[5] = {3,4,2,1,5}; dato = 4;

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int numeros[] = {3,2,1,5,4};
	int dato,i;
	char band = 'F';
	
	dato = 1;
	i = 0;
	
	while((band == 'F') and (i<5)){
		if(numeros[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero no existe"<<endl;
	}
	else if(band == 'V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}