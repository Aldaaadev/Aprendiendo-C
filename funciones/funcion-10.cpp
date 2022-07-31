/*10. Escriba una funcion nombrada calc_años() que tenga un parametro entero que represente
el numero total de dias desde la fecha 1/1/2000 y parametros de referencia nombrados año, mes
y dia. La funcion es calcular el año, mes y dia actual para el numero dado de dias que se le
transmitan. Para este problema suponga que cada año tiene 365 dias y cada mes tiene 30 dias. */

#include<iostream>
#include<conio.h>
using namespace std;

//Plantilla de Funcion
void calc_anos(int, int&, int&,int&);

int main(){
	int totalDias, ano=2000, mes=1, dias=1;
	
	
	cout<<"Escriba el numero total de dias: "; cin>>totalDias;
	
	calc_anos(totalDias,ano,mes,dias);	
	
	cout<<"\nTiempo equivalente a la cantidad de dias es: "<<endl;
	cout<<"Anos: "<<ano<<endl;
	cout<<"Meses: "<<mes<<endl;
	cout<<"Dias: "<<dias<<endl;
	
	getch();
	return 0;
}

void calc_anos(int totalDias, int& ano, int& mes,int& dias){
	ano = (totalDias/365)+2000;
	(totalDias %= 365) + 1;
	mes = (totalDias/30) + 1;
	dias = (totalDias%30) + 1;
}