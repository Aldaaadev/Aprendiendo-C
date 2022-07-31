/*Punteros - Declaracion de Punteros

&m = la direccion de n
*n = la variable cuya direccion esta almacenada en n

*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	int num,*dir_num;
	
	num = 20;
	dir_num = &num;
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"La direccion de memoria: "<<dir_num<<endl;

		
	getch();
	return 0;
}