/*2. Realice un programa que lea de la entrada estandar numeros hasta que se 
 introduzca un cero. En ese momento el programa debe terminar y mostrar en la
 salida estandar el numero de valores mayores que cero leidos*/
 
#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numeros;
	
	for(int i=1; i<=100; i++){
		if(numeros > 0){
			cout<<i<<endl;
		}
	}
	
	getch();
	return 0;
}
 
