//13. Hacer un programa que realize la serie fibonacci: 1+1+2+3+5+8+13...n

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n,x=0, y=1,z=1;
	
	cout<<"Escriba un numero: "; cin>>n;
	
	for(int i=1; i<n; i++){
		z = x + y;// 1 2 3...n
		cout<<z<<" ";//1 2 3...n
		x = y;//1 1 2...n
		y = z;//1 2 3...n
	}
	
	
	getch();
	return 0;
}