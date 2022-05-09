//Ejercicio no.5
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct info_direccion{char direccion[30];	};
struct empleado {char nombre[20];struct info_direccion dir_empleado;int sueldo,bono;char op;}empleados[5];
int main(){
	for(int a=0; a<5;a++){
	    fflush(stdin);
		cout<<"Digite su Nombre: ";
		cin.getline(empleados[a].nombre,20,'\n');
		cout<<"Digite su direccion: ";
		cin.getline(empleados[a].dir_empleado.direccion,30,'\n');
		cout<<"sueldo: ";
		cin>>empleados[a].sueldo;
	cout<<"Seleccione el departamento del empleado"<<endl;
	cout<<"1) Direccion"<<endl;
	cout<<"2) Contabilidad"<<endl;
	cout<<"3) Recursos Humanos"<<endl;
	cout<<"4) Ventas"<<endl;
	cout<<"5) Produccion"<<endl;
	cin>>empleados[a].op;
	if (empleados[a].sueldo>=500 && empleados[a].op=='5'){		
		cout<<"Su cheque semanal es el monto de: Q " <<empleados[a].sueldo<<endl;
	cout<<"\n";
	}
	else{
			empleados[a].bono=empleados[a].sueldo*0.25;    
		cout<<"Su bono de despensa del 25% es de "<<empleados[a].bono<<endl;
		cout<<"\n";
}
}
	for(int a=0;a<5;a++){
		cout<<"Nombre "<<empleados[a].nombre<<endl;
		cout<<"Direccion "<<empleados[a].dir_empleado.direccion<<endl;
		cout<<"Sueldo "<<empleados[a].sueldo;
		cout<<"Sueldo "<<empleados[a].bono;		
			 cin>>empleados[a].bono;
	system("pause");	
	}
}