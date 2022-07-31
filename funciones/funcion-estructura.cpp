#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}p1;

// Prototipo
void pedirDatos();
void mostrar(Persona);

int main(){
	pedirDatos();
	mostrar(p1);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escriba su nombre:"; cin.getline(p1.nombre,30,'\n');
	cout<<"Escriba su edad: "; cin>>p1.edad;
}

void mostrar(Persona p){
	cout<<"\n\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}


