/*8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos:
el nombre de la persona y un valor de tipo logico que indica si la persona tiene algun tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas
que no tienen ninguna discapaciad y otro que contenga las personas con discapacidad. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Personas{
	char nombre[40];
	bool discapacidad = true;
}per[100],con_discapacidad[100],no_discapacidad[100];

int main(){
	int n_personas, j=0, x=0;
	
	cout<<"Cuantas personas son: "; cin>>n_personas;
	cout<<"\nATENCION. Presione 1 si es discapacitado o 0 si no lo es:\n ";
	//Pidiendo los datos de los atletas
	for(int i=0; i<n_personas; i++){
		fflush(stdin);
		cout<<i+1<<" Escriba su nombre: "; cin.getline(per[i].nombre,40,'\n');
		cout<<" Presione 1 si es discapacitado o 0 si no lo es: "; cin>>per[i].discapacidad;
		
		if(per[i].discapacidad == 1){
			strcpy(con_discapacidad[i].nombre, per[i].nombre);
			j++;
		}else{
			strcpy(no_discapacidad[i].nombre, per[i].nombre);
			x++;
		}
		cout<<'\n';
	}

	cout<<"\n\n";
	cout<<"Personas con discapacidad"<<endl;
	for(int j=0; j<n_personas; j++){
		cout<<con_discapacidad[j].nombre<<endl;
	}
	
	cout<<"\nPersonas sin discapacidad: "<<endl;
	for(int x=0; x<n_personas; x++){
		cout<<no_discapacidad[x].nombre<<endl;
	}
	
	getch();
	return 0;
}