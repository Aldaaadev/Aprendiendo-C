/*6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular
cual de todos tiene el mejor promedio, e imprimir sus datos. */

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
}a[100];

int main(){
	int n_alumnos,pos;
	float Prom=0, max;
	
	cout<<"Escriba el numero de alumnos: "; cin>>n_alumnos;
	//Pidiendo los datos del alumno
		for(int i=0; i<n_alumnos; i++){
		fflush(stdin);
		cout<<"\nEscriba su nombre: "; cin.getline(a[i].nombre,40,'\n');
		cout<<"Escriba su sexo: "; cin.getline(a[i].sexo,10,'\n');
		cout<<"Escriba su edad: "; cin>>a[i].edad;
		cout<<"\nNotas del alumno: "<<endl;
		cout<<"Escriba su primera nota: "; cin>>a[i].prom.nota1;
		cout<<"Escriba su segunda nota: "; cin>>a[i].prom.nota2;
		cout<<"Escriba su tercera nota: "; cin>>a[i].prom.nota3;
		
		// Calculando promedio
		Prom = (a[i].prom.nota1 + a[i].prom.nota2 + a[i].prom.nota3)/3;
		
		if( Prom > max){
			max = Prom;
			pos = i;
		}
	}
	
	// El promedio del alumno  
	cout<<"\n\n";
	cout<<"Datos del alumno"<<endl;
	cout<<"Nombre: "<<a[pos].nombre<<endl;
	cout<<"Sexo: "<<a[pos].sexo<<endl;
	cout<<"Edad: "<<a[pos].edad<<endl;
	cout<<"Promedio mas alto: "<<Prom<<endl;
	
	getch();
	return 0;
}