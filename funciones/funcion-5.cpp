/*5. Escriba una plantilla de funcion llamda despliegue() que despliegue el valor del 
argumento unico que se le transmite cuando es invocada la funcion. */

#include<iostream>
#include<conio.h>
using namespace std;

//Plantilla de Funcion
template <class TIPO>
void despliegue(TIPO dato);

int main(){
	int dato = 14;
	float dato1 = 14.14;
	double dato2 = 14.141414;
	bool dato3 = true;
	char dato4 = 'A';
	
	despliegue(dato);
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	getch();
	return 0;
}

template <class TIPO>
void despliegue(TIPO dato){
	cout<<"El dato es: "<<dato<<endl;
}