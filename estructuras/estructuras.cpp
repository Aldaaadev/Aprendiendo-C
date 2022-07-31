/*1. Hacer una estructura llamada corredor, en el cual se tendran los siguientes campos: Nombre, edad,
sexo, club, pedir los datos al usuario para un corredor, y asi una categoria de competicion: 
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor{
	char nombre[40];
	int edad;
	char sexo[30];
	char club[30];
}c1;

int main(){
	char categoria[20];
	
	//Pidiendo los datos de los corredores
	cout<<"Escriba su nombre: "; cin.getline(c1.nombre,40,'\n');
	cout<<"Escriba su edad: "; cin>>c1.edad;
	fflush(stdin);
	cout<<"Escriba su sexo: "; cin.getline(c1.sexo,30,'\n');
	cout<<"Escriba su club: "; cin.getline(c1.club,30,'\n');
	
	if(c1.edad <= 18){
		strcpy(categoria,"Juvenil");
	}
	else if(c1.edad <= 40){
		strcpy(categoria,"Senior");
	}
	else{
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\n";
	cout<<"Nombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;
	
	getch();
	return 0;
}