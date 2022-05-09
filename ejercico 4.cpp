//Ejercicio no.4
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct info_nombre{
	char nombre[30];	
};
struct producto {
	struct info_nombre nom_producto;
	int cantidad,cantidad1,cantidad2,precio, precio1;  
	int total,pagar,precio2;
	int producto2,cobro;
	char op;
}productos[5];
int main(){
		for(int g=0; g<5;g++){
	    fflush(stdin);
	cout<<"Nombre del producto ";
	cin.getline(productos[g].nom_producto.nombre,30,'\n');
	cout<<"cantidad en existencia ";
	cin>>productos[g].cantidad;
	cout<<"Nacionalidad del producto: \n";
	cout<<"[1] Nacional "<<endl; 
	cout<<"[2] Internacional "<<endl; 
	cin>>productos[g].op;
	cout<<"Cantidad a vender ";
	cin>>productos[g].cantidad1;
	if (productos[g].cantidad<productos[g].cantidad1 && productos[g].op=='1'){
	cout<<"Cantidad a comprar ";
	cin>>productos[g].producto2;
	cout<<"precio del producto ";
	cin>>productos[g].precio1;
	productos[g].pagar=productos[g].producto2*productos[g].precio1;
	cout<<"Cantidad a pagar "<<productos[g].pagar;
    cout<<"\n";
	}else{
			cout<<"precio del producto a vender ";
	cin>>productos[g].precio2;
		productos[g].cobro=productos[g].cantidad1*productos[g].precio2;
		cout<<"cantidad a cobrar "<<productos[g].cobro;
	}
		}
		for(int g=0;g<5;g++){
		cout<<"Nombre "<<productos[g].nom_producto.nombre<<endl;
	    cout<<"Existencia "<<productos[g].cantidad<<endl;
	    cout<<"Nacion "<<productos[g].op<<endl;
	    cout<<"Vender "<<productos[g].cantidad1<<endl;
		cout<<"Producto a vender "<<productos[g].precio2<<endl;
		cout<<"cantidad a comprar "<<productos[g].producto2<<endl;
		cout<<"precio del producto "<<productos[g].precio1<<endl;
		cout<<"a pagar "<<productos[g].pagar<<endl;
		cout<<"a cobrar "<<productos[g].cobro<<endl;
	}
}