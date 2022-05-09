//Ejercicio no.1
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct info_direccion{
	char direccion[30];	
};
struct empleado {
	char nombre[20];
	struct info_direccion dir_empleado;
	int sueldo,dias;
	int telefono;
    int sueldototal;	
}empleados[5];
int main(){
	for(int i=0; i<5;i++){
	    fflush(stdin);
		cout<<"Digite su Nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Digite su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout<<"Telefono : ";
		cin>>empleados[i].telefono;
		cout<<"sueldo: ";
		cin>>empleados[i].sueldo;
		cout<<"Dias trabajados: ";
		cin>>empleados[i].dias;
	  empleados[i].sueldototal=empleados[i].sueldo*empleados[i].dias;
		cout<<"El sueldo total es: "<< empleados[i].sueldototal<<endl;
	if(empleados[i].sueldototal>500){
		cout<<"Su Cheque semanal es de "<<empleados[i].sueldototal<<endl;
			cout<<"\n";
	}else{
		cout<<"Su Cheque semanal es de "<<empleados[i].sueldototal<<
		" \nUsted tiene un bono adicional de despensa por la cantidad de Q150.00"<<endl;
		cout<<"\n";
		}	
	}
	for(int i=0;i<5;i++){
		cout<<"Nombre "<<empleados[i].nombre<<endl;
		cout<<"Direccion "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Telefono"<<empleados[i].telefono;
		cout<<"Sueldo "<<empleados[i].sueldo;
		cout<<"Dias "<<empleados[i].dias;
		cout<<"Sueldo Total "<<empleados[i].sueldototal;	
			cin>>empleados[i].sueldototal;
	}
}