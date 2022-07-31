/*7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura
debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el 
tiempo total empleado en correr todas las estapas. */

#include<iostream>
#include<conio.h>
using namespace std;

struct Etapas{
	int horas;
	int minutos;
	int segundos;
}et[100];

int main(){
	int n_etapas,horasT=0,minutosT=0,segundosT=0;
	
	cout<<"Escriba el numero de etapas: "; cin>>n_etapas;
	//Pidiendo los datos de los atletas
	for(int i=0; i<n_etapas; i++){
		cout<<i+1<<" Escriba las horas: "; cin>>et[i].horas;
		cout<<i+1<<" Escriba los minutos: "; cin>>et[i].minutos;
		cout<<i+1<<" Escriba los segundos: "; cin>>et[i].segundos;
		
		horasT = horasT + et[i].horas;
		minutosT = minutosT + et[i].minutos;
		if(minutosT >= 60){
			minutosT -= 60; // Se le resta 60 quedando en 0 y se le agrega 1 a horas
			horasT++;
		}
		segundosT = segundosT + et[i].segundos;
		if(segundosT >= 60){
			segundosT -= 60; // Se le resta 60 quedando en 0 y se le agrega 1 a minutos
			minutosT++;
		}
		cout'\n';
	}

	// Tiempo Total 
	cout<<"\n\n";
	cout<<"Tiempo total de etapas"<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	
	getch();
	return 0;
}