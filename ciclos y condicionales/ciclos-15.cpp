/*15. Realice un programa que solicite al usuario que piense un numero
entero de 1 al 100. El programa debe generar un numero aleatorio en ese
mismo rango [1-100], e indique al usuario si el numero que digito es 
menor o mayor al numero aleatorio, asi hasta que adivine. y por ultimo
mostrarle el numero de intentos que llevo.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int numero,aleatorio,acum=0;
	
	srand(time(NULL));//generar un numero aleatorio
	aleatorio = 1 + rand() % (100);
	
	do{
	
	cout<<"Escriba un numero del 1 al 100: "; cin>>numero;
	
	if(numero > aleatorio){
		cout<<"\nEl numero es mayor intenta de nuevo...\n ";
	}
	if(numero < aleatorio){
		cout<<"\nEl numero es menor intenta de nuevo...\n ";
	}
	acum++;
	}while(numero != aleatorio);
	
	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout<<"Numero de intentos: "<<acum<<endl;
	
	
	system("pause");
	return 0;
}