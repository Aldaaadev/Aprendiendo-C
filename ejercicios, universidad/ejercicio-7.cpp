/* Escriba un programa que lea la nota final de cuatro alumnos y calcule
la nota final media de los cuatros alumnos */

#include <iostream>

using namespace std;

int main (){
	float notaFinal,notaFinalMedia,nota1,nota2,nota3,nota4;
	
	cout<<"Nota del primer estudiante: "; cin>>nota1;
	cout<<"Nota del segundo estudiante: "; cin>>nota2;
	cout<<"Nota del tercer estudiante: "; cin>>nota3;
	cout<<"Nota del cuarto estudiante: "; cin>>nota4;
	
	notaFinal = nota1 + nota2 + nota3 + nota4;
	
	notaFinalMedia = notaFinal / 4;
	
	cout<<"La nota final media de los estudiantes es: "<<notaFinalMedia<<endl;
	
	return 0;
}