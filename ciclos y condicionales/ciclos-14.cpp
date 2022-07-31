/*14. En una clase de 5 alumnos se han realizado tres examenes y se requiere
determinar el numero de:

a) Alumnos que aprobaron todos los examenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el calculo de las
estadisticas. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int nota1,nota2,nota3,todos_los_examenes=0,un_examen=0,ultimo_examen=0;
	
	cout<<"Escriba su nota del [1-100], la nota minima para pasar el examen es 65: "<<endl;
	
	for(int alumnos=1; alumnos<=5; alumnos++){
			
			do{
				cout<<"\nEscriba la primera nota: "; cin>>nota1;
			}while(nota1<0 or nota1 >100);
			
			do{
				cout<<"\nEscriba la segunda nota: "; cin>>nota2;
			}while(nota2<0 or nota2 >100);
			
			do{
				cout<<"\nEscriba la tercera nota: "; cin>>nota3;
			}while(nota3<0 or nota3 >100);
		
		cout<<nota1<<endl<<nota2<<endl<<nota3<<endl;
		
		if(nota1 and nota2 and nota3 >= 65){
			todos_los_examenes += 1;
		} 
		else if (nota1 or nota2 or nota3 >=65){
			un_examen += 1;
		} 
		else if (nota1 and nota2 <= 65 and nota3 >=65){
			ultimo_examen += 1; 
		} 
	}
	
	cout<<"\nEl resultado es: "<<endl;
	cout<<"Todos pasaron: "<<todos_los_examenes<<endl;
	cout<<"Solo pasaron un examen: "<<un_examen<<endl;
	cout<<"Solo pasaron el ultimo examen: "<<ultimo_examen<<endl;
	
	getch();
	return 0;
}