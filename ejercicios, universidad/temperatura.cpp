/*4 Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola
durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la
temperatura media del dia, la temperatura mas alta y la mas baja */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float t,temp,tempm=0,tempa=0,tempb=0;
	
	for(t=4; t<=24; t+=4){	
		cout<<"La temperatura es: "<<t<<endl; cin>>temp;
		if(temp >= tempa){
			tempa = temp;
		}else if(temp < tempb){
			tempb = temp;
		}	
		tempm += temp;
	}
	
	temp /= 6;
	cout<<"La temperatura alta es: "<<tempa<<endl;
	cout<<"La temperatura baja es: "<<tempb<<endl;
	cout<<"La temperatura media es: "<<tempm<<endl;
	
	getch();
	return 0;
} 