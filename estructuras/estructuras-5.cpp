/*5. Hacer 2 estructuras una llamda promedio que tendra los siguientes campos: nota1, nota2, nota3; y
otro llamado alumno que tendra los siguientes miembros: nombre, sexo, edad; hacer que la estructura
promedio este anidada en la estructura alumno, luego pedir los datos para un alumno, luego calcular 
su promedio, y por ultimo imprimir todos los datos incluidos el promedio. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[40];
	char sexo[10];
	int edad;
	struct promedio prom;
}a;

int main(){
	float Prom=0;
	
	//Pidiendo los datos del alumno
		cout<<"Escriba su nombre: "; cin.getline(a.nombre,40,'\n');
		cout<<"Escriba su sexo: "; cin.getline(a.sexo,10,'\n');
		cout<<"Escriba su edad: "; cin>>a.edad;
		cout<<"\nNotas del alumno: "<<endl;
		cout<<"Escriba su primera nota: "; cin>>a.prom.nota1;
		cout<<"Escriba su segunda nota: "; cin>>a.prom.nota2;
		cout<<"Escriba su tercera nota: "; cin>>a.prom.nota3;
		
		// Calculando promedio
		Prom = (a.prom.nota1 + a.prom.nota2 + a.prom.nota3)/3;
	
	// El promedio del alumno  
	cout<<"\n\n";
	cout<<"Datos del alumno"<<endl;
	cout<<"Nombre: "<<a.nombre<<endl;
	cout<<"Sexo: "<<a.sexo<<endl;
	cout<<"Edad: "<<a.edad<<endl;
	cout<<"Promedio: "<<Prom<<endl;
	
	getch();
	return 0;
}