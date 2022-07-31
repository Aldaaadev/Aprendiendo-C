//12. Escriba un programa que calcule el resultado de la siguiente expresion:
// 1-2+3-4+5-6...n

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int suma=0,n;
	
	cout<<"Escriba un numero: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		if(i%2==0){
			suma -= i;
		}else {
			suma += i;
		}
		
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	getch();
	return 0;
}