/*20. Realice una funcion recursiva para la serie Fibonacci
Nota: La serie Fibonacci esta formada por la secuencia de numeros 0,1,1,2,3,5,8,13,21,34...*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int Fibonacci(int); 

int main(){
	int nElementos;
			
		cout<<"Escriba un numero: ";
		cin>>nElementos;
	
	cout<<"\nLa serie Fibonacci es: "<<endl;
	for(int i=1; i<nElementos; i++){
		cout<<Fibonacci(i)<<" ";
	}
	
	getch();
	return 0;
}

int Fibonacci(int n){
	if(n<2){//Caso Base
		return n;
	}
	else{//Caso General
		return Fibonacci(n-1) + Fibonacci(n-2);
	}
}