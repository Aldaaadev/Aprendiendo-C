/*5. Escriba un programa que lea valores enteros hasta que se introduzca
un valor en el rango [20-30] o se introduzca el valor 0. El programa debe
entregar la suma de los valores mayores a 0 introducidos */
 
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros, suma=0;
	
	do{
		cout<<"Escribe un numero "; cin>>numeros;
		
		if(numeros >0){
			suma += numeros;
		}
		
	}while(((numeros <20)||(numeros>30)) && (numeros !=0));
	
	cout<<"\nLa suma de los numeros es: "<<suma<<endl;
	
	getch();
	return 0;
}