/*2. Hacer una estructura llamada alumno, en el cual se tendran los siguientes campos: nombre, edad,
promedio, pedir datos al usuario para 3 alumnos comprobar cual de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct alumno{
	char nombre[40];
	int edad;
	float promedio;
}a[3];

int main(){
	int valor=0;
	int max=0;
	int cont;
	
	//Pidiendo los datos de los corredores
	for(int i=0; i<3; i++){
		cout<<"Escriba su nombre: "; cin.getline(a[i].nombre,40,'\n');
		cout<<"Escriba su edad: "; cin>>a[i].edad;
		cout<<"Escriba su promedio: "; cin>>a[i].promedio;
		cout<<'\n';
		fflush(stdin);
	}
	
	for(int i=0; i<3; i++){
		valor = a[i].promedio;
		if(valor > max){
		max = valor;
		cont = i;
		}
	}

	
	cout<<"\n\n";
	cout<<"Nombre: "<<a[cont].nombre<<endl;
	cout<<"Edad: "<<a[cont].edad<<endl;
	cout<<"Promedio: "<<a[cont].promedio<<endl;
	
	getch();
	return 0;
}