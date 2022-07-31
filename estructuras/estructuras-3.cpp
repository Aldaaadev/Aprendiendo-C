/*3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y
que imprima los datos del empleado con mayor y menor salario. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct empleados{
	char nombre[40];
	float salario;
}emp[100];

int main(){
	int n_empleados;
	int valorM=0, valorm=0;
	int max=0;
	int min=999999;
	
	cout<<"Escriba el numero de empleados: "; cin>>n_empleados;
	//Pidiendo los datos de los empleados
	for(int i=0; i<n_empleados; i++){
		fflush(stdin);
		cout<<i+1<<" Escriba su nombre: "; cin.getline(emp[i].nombre,40,'\n');
		cout<<i+1<<" Escriba su salario: "; cin>>emp[i].salario;
		
		// Mayor o menor salario
		if(emp[i].salario > max){
		max = emp[i].salario;
		valorM = i;
		}
		
		if(emp[i].salario < min){
		min = emp[i].salario;
		valorm = i;
		}
		cout<<'\n';
	}

	// El empleado con mayor y menor salario
	cout<<"\n\n";
	cout<<"Empleado con Mayor salario"<<endl;
	cout<<"Nombre: "<<emp[valorM].nombre<<endl;
	cout<<"Salario: "<<emp[valorM].salario<<endl;
	cout<<"Empleado con menor salario"<<endl;
	cout<<"Nombre: "<<emp[valorm].nombre<<endl;
	cout<<"Salario: "<<emp[valorm].salario<<endl;
	
	getch();
	return 0;
}