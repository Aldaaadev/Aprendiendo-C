/*3. Calcule el sueldo mensual que le corresponde al trabajador de una empresa. 
	El algoritmo debe realizar los cálculos en función de los siguientes criterios:
	a. Si lleva más de 10 años en la empresa se le aplica un aumento de 10%.
	b. Si lleva menos de 10 años, pero más que 5 se le aplica un aumento de 7%.
	c. Si lleva menos de 5 años, pero más que 3 se le aplica un aumento de 5%. 
	c. Si lleva menos de 3 años se le aplica un aumento del 3%.
Ademas debe aplicar las deducciones respectivas correspondiente al 6.5% del seguro social 
y 1.2% de seguro educativo. 
Imprima: 
	Título de principal
	Con subtítulos: nombre, salario anterior, porcentaje, aumento.
	En una línea aparte:  Nuevo salario, deducciones, Salario Neto.
*/

// Algoritmo Sueldo_Mensual

 // libreria para utilizar operaciones de entrada/salida
 #include<iostream>
 // libreia para que el programa no se ciere una vez haya sido ejecutado
 #include<conio.h>
 // liberia para cadenas
 #include<string.h>
/* using namespace es una forma de crear un bloque, y que todas las funciones que estén dentro del mismo,
estén asociadas a espacio de nombres, al cual se le asigna un nombre para identificarlo.*/
using namespace std;

// Funcion principal
int main (){
	// Bloque de Declarativas
	int tiempo;
	char nombre [50];
	float ant_sal, por, aum, nuevo_sal, deduc, salario_neto,por2;
	float seguro_soc = 6.5, seguro_edu = 1.2;
	
	// Pidiendo los datos al empleado
	cout<<"\t Bienvenido: Este es su Salario Mensual\n";
	cout<<"Escriba su nombre: "; cin.getline(nombre,50,'\n');
	cout<<"Introduzca su Salario actual: "; cin>>ant_sal;
	cout<<"Su salario actual es de: "<<ant_sal<<endl;
	cout<<"Cuantos a¤os lleva trabajando en esta empresa?: "; cin>>tiempo;
	
	// Calculando su nuevo aumento
	if(tiempo > 10){
		aum = 0.1; //aumento
		por = ant_sal * aum; //porcentaje
		nuevo_sal = ant_sal + por; // salario mas el aumento incluido
		deduc = seguro_soc + seguro_edu; // deducciones
		por2 = ant_sal * deduc/100; // porcentajes de deducciones 
		salario_neto = nuevo_sal - por2; // salario actual menos las deducciones
		cout<<"El empleado "<<nombre<<" tiene un salario de "<<ant_sal<<" y ha recibido un aumento del 10%"<<endl;
		cout<<"Su salario actual ahora es de: "<<nuevo_sal<<endl;
		cout<<"Sus deducciones por seguro social es de 6.5% y seguro educativo de 1.2%"<<endl;
		cout<<"Su salario neto es: "<<salario_neto;
	}
	else if((tiempo < 10) and (tiempo > 5)){
		aum = 0.07; //aumento
		por = ant_sal * aum; //porcentaje
		nuevo_sal = ant_sal + por; // salario mas el aumento incluido
		deduc = seguro_soc + seguro_edu; // deducciones
		por2 = ant_sal * deduc/100; // porcentajes de deducciones
		salario_neto = nuevo_sal - por2; // salario actual menos las deducciones
		cout<<"El empleado "<<nombre<<" tiene un salario de "<<ant_sal<<" y ha recibido un aumento del 7%"<<endl;
		cout<<"Sus deducciones por seguro social es de 6.5% y seguro educativo de 1.2%"<<endl;
		cout<<"Su salario actual ahora es: "<<salario_neto;
	}
	else if((tiempo < 5) and (tiempo > 3)){
		aum = 0.05; //aumento
		por = ant_sal * aum; //porcentaje
		nuevo_sal = ant_sal + por; // salario mas el aumento incluido
		deduc = seguro_soc + seguro_edu; // deducciones
		por2 = ant_sal * deduc/100; // porcentajes de deducciones
		salario_neto = nuevo_sal - por2; // salario actual menos las deducciones
		cout<<"El empleado "<<nombre<<" tiene un salario de "<<ant_sal<<" y ha recibido un aumento del 5%"<<endl;
		cout<<"Sus deducciones por seguro social es de 6.5% y seguro educativo de 1.2%"<<endl;
		cout<<"Su salario actual ahora es: "<<salario_neto;
	}
	else if(tiempo < 3){
		aum = 0.03; //aumento
		por = ant_sal * aum; //porcentaje
		nuevo_sal = ant_sal + por; // salario mas el aumento incluido
		deduc = seguro_soc + seguro_edu; // deducciones
		por2 = ant_sal * deduc/100; // porcentajes de deducciones
		salario_neto = nuevo_sal - por2; // salario actual menos las deducciones
		cout<<"El empleado "<<nombre<<" tiene un salario de "<<ant_sal<<" y ha recibido un aumento del 3%"<<endl;
		cout<<"Sus deducciones por seguro social es de 6.5% y seguro educativo de 1.2%"<<endl;
		cout<<"Su salario actual ahora es: "<<salario_neto;
	}
	getch();
	return 0;
}

