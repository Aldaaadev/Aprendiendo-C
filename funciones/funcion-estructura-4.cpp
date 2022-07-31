/*Escriba una funcion en C++ llamada mayor() que devuelva la fecha mas reciente de cualquier
par de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 
11/3/2015 a mayor(), sera devuelta la segunda fecha. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Fecha{
	int dia;
	int mes;
	int ano;
}f1,f2,fM;

// Prototipo
void pedirDatos();
Fecha mayor(Fecha, Fecha);
void mostrar(Fecha);

int main(){
	pedirDatos();
	Fecha fM = mayor(f1, f2);
	mostrar(fM);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba la primera fecha: "<<endl;
	cout<<"Escriba el dia:"; cin>>f1.dia;
	cout<<"Escriba el mes: "; cin>>f1.mes;
	cout<<"Escriba el ano: "; cin>>f1.ano;
	
	cout<<"\nEscriba la segunda fecha: "<<endl;
	cout<<"Escriba el dia:"; cin>>f2.dia;
	cout<<"Escriba el mes: "; cin>>f2.mes;
	cout<<"Escriba el ano: "; cin>>f2.ano;
}

Fecha mayor(Fecha f1, Fecha f2){
	if(f1.ano > f2.ano){
		f1.dia = f1.dia;
		f1.mes = f1.mes;
		f1.ano = f1.ano;
	}
	else if(f1.ano < f2.ano){
		f1.ano = f2.ano;
		f1.mes = f2.mes;
		f1.dia = f2.dia;
	}
	else if( f1.ano == f2.ano){
		f1.ano = f2.ano;	
	}
	else if(f1.mes > f2.mes){
		f1.mes = f1.mes;
		f1.dia = f1.dia;
	}	
	else{
		f1.mes = f2.mes;
		f1.dia = f2.dia;
	}
	return f1;
}


void mostrar(Fecha fM){
	cout<<"\nFecha mas reciente: "<<endl;
	cout<<fM.dia<<"/"<<fM.mes<<"/"<<fM.ano<<endl;
}