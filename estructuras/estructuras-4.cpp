/*4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: 
nombre, pais, numero_medallas. y devuelva los datos (Nombre, pais) del atleta que ha ganado el mayor
numero de medallas. */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct atleta{
	char nombre[40];
	char pais[40];
	int numero_medallas;
}atl[100];

int main(){
	int n_atletas;
	int valorM=0;
	int max=0;
	
	cout<<"Escriba el numero de los atletas: "; cin>>n_atletas;
	//Pidiendo los datos de los atletas
	for(int i=0; i<n_atletas; i++){
		fflush(stdin);
		cout<<i+1<<" Escriba su nombre: "; cin.getline(atl[i].nombre,40,'\n');
		cout<<i+1<<" Escriba su pais: "; cin.getline(atl[i].pais,40,'\n');
		cout<<i+1<<" Escriba el numero de sus medallas: "; cin>>atl[i].numero_medallas;
		
		// Mayor o menor salario
		if(atl[i].numero_medallas > max){
		max = atl[i].numero_medallas;
		valorM = i;
		}
		cout<<'\n';
	}

	// El atleta con mayor numero de medallas 
	cout<<"\n\n";
	cout<<"Atleta con Mayor numero de medallas"<<endl;
	cout<<"Nombre: "<<atl[valorM].nombre<<endl;
	cout<<"Pais: "<<atl[valorM].pais<<endl;
	cout<<"Numero de medallas: "<<atl[valorM].numero_medallas<<endl;
	
	getch();
	return 0;
}