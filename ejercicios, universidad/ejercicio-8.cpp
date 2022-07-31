/*7. La calificacion final de un estudiante es la media ponderada de tres
notas: La nota de practicas que cuenta un 30% del total, la nota teorica
que cuenta un 60% y la nota de participacion que cuenta el 10% restante.
Escriba un programa que lea la entrada estandar Las tres notas de un alumno
y escriba en la salida su nota final */

#include <iostream>

using namespace std;

int main (){
	float practica,teorica,participacion,notaFinal=0;
	
	cout<<"Escriba su nota de practicas: "; cin>>practica;
	cout<<"Escriba su nota de teoria: "; cin>>teorica;
	cout<<"Escriba su nota de participacion: "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	notaFinal = practica + teorica + participacion;
	
	cout<<"La nota final es: "<<notaFinal<<endl;
	
	return 0;
}