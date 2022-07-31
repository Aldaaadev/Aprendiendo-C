#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Empleados{
	char nombre [50];
	char direccion [80];
	int edad;
	char sexo [10];
}e[100],mayores[100];

int main(){
	int n_empleados;
	int totalM=0;
	int j=0;
	
	cout<<"Escriba el numero de empleados: "; cin>>n_empleados;
	
// Pidiendo los datos a los empleados
	for(int i=0; i<n_empleados; i++){
		fflush(stdin);
		cout<<i+1<<" Escriba su nombre: "; cin.getline(e[i].nombre,50,'\n');
		cout<<i+1<<" Cual es su direccion?: "; cin.getline(e[i].direccion,80,'\n');
		cout<<i+1<<" Cual es su edad?: "; cin>>(e[i].edad);
		fflush(stdin);
		cout<<i+1<<" Cual es su sexo?: "; cin.getline(e[i].sexo,10,'\n');
		cout<<'\n';
		
		// Determinando la edad
			if(e[i].edad > 65){
				strcpy(mayores[i].nombre, e[i].nombre);
				mayores[i].edad = e[i].edad;
				j++;
				totalM =  totalM + 1;
			}
		cout<<'\n';
	}
	
	cout<<"Empleados mayores a 65: "<<endl;
	for(int j=1; j<n_empleados; j++){
		cout<<mayores[j].nombre<<endl;
		cout<<mayores[j].edad<<endl;
	}
	cout<<"Total de empleados mayores a 65: "<<totalM<<endl;
	
	getch();
	return 0;	
}
