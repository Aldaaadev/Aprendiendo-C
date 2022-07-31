/*Realice un programa que calcule el producto de dos matrices cuadradas de 3x3*/

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int num1[3][3],num2[3][3],num3[3][3];
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout<<"Escriba un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>num1[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout<<"Escriba un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>num2[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			num3[i][j] = num1[i][j] * num2[i][j];
			cout<<num3[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}