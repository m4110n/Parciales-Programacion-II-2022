//Ejercicio no.3
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct info_nombre{
	char nombre[30];	
};
struct producto {
	struct info_nombre nom_producto;
	int cantidad,precio;
	int nacion;
    int total;
}productos[5];
int main(){
	for(int m=0; m<5;m++){
	    fflush(stdin);
	    cout<<"\n";
		cout<<"Nombre del producto: ";
		cin.getline(productos[m].nom_producto.nombre,20,'\n');
		cout<<"Nacional o Internacional: \n";
		cout<<"[1] Nacional "<<endl; 
		cout<<"[2] Internacional "<<endl; 
		cin>>productos[m].nacion;
	if(productos[m].nacion==1){
		cout<<"Cantidad a comprar ";
		cin>>productos[m].cantidad;
		cout<<"Precio del Producto ";
		cin>>productos[m].precio;
			productos[m].total=productos[m].cantidad*productos[m].precio;
		cout<<"El total a pagar es "<<productos[m].total;
		cout<<"\n";
	}else{
		cout<<"Lo Siento el Producto no es Nacional ";
		cout<<"\n";
		}	
	}
	for(int m=0;m<5;m++){
		cout<<"Nombre "<<productos[m].nom_producto.nombre<<endl;
	    cout<<"Nacion "<<productos[m].nacion<<endl;
	    cout<<"Cantidad "<<productos[m].cantidad<<endl;
	    cout<<"Precio "<<productos[m].precio<<endl;
		cout<<"Total"<<productos[m].total<<endl;	
			cin>>productos[m].total;}}