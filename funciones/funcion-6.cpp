/*6. Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres
argumentos que se transmitan a la funcion cuando sea llamada. Suponga que los tres argumentos
seran del mismo tipo de dato. */

#include<iostream>
#include<conio.h>
using namespace std;

//Plantilla de Funcion
template <class TIPO>
int maximo(TIPO a,TIPO b,TIPO c);

int main(){
	int dato = 14;
	int dato1 =82;
	int dato2 = 72;

	cout<<"El dato maximo es: "<<maximo(dato,dato1,dato2);	
	
	getch();
	return 0;
}

template <class TIPO>
int maximo(TIPO a, TIPO b, TIPO c){
	TIPO max=0;
	
	if((a > b) and (a > c) ){
		max = a;
	}
	else if ((b > a) and (b > c)){
		max = b;
	}
	else{
		max = c;
	}
	
	return max;
}











