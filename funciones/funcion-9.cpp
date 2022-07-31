/*9. Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg
y tres parametros de referencia enteros nombrados horas, min y seg. La funcion es convertir el
numero de segundos transmitido en un numero equivalente de horas, minutos y segundos. */

#include<iostream>
#include<conio.h>
using namespace std;

//Plantilla de Funcion
void tiempo(int, int&, int&,int&);

int main(){
	int totalSeg, horas, min, seg;
	
	
	cout<<"Escriba el numero total de segundos: "; cin>>totalSeg;
	
	tiempo(totalSeg,horas,min,seg);	
	
	cout<<"\nTiempo equivalente a la cantidad de segundos es: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	getch();
	return 0;
}

void tiempo(int totalSeg, int& horas, int& min,int& seg){
	horas = totalSeg/3600;
	totalSeg %= 3600;
	min = totalSeg/60;
	seg = totalSeg%60;
}