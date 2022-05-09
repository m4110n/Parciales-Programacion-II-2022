//Ejercicio no.2
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct info_nombre{
    char nombre[30];
};
struct alumno {
    struct info_nombre nom_alumno;
	int edad,profesion;
	int nota1,nota2,nota3;
}alumnos[5];
int main(){
	for(int z=0; z<5;z++){
	    fflush(stdin);
		cout<<"Digite el Nombre del alumno: ";
		cin.getline(alumnos[z].nom_alumno.nombre,30,'\n');
		cout<<"\n";
		cout<<"Digite la edad: ";
		cin>>alumnos[z].edad;
		cout<<"\n";
	    cout<<"nota 1: "<<endl; 
        cin>>alumnos[z].nota1;
		cout<<"\n";
      cout<<"nota 2: "<<endl; 
      cin>>alumnos[z].nota2;
		cout<<"\n";
      cout<<"nota 3: "<<endl; 
       cin>>alumnos[z].nota3;
       cout<<"\n";
       cout<<"¿Cual es su profesion academica? "<<endl; 
	cout<<"Escriba el numero de su profesion: "<<endl; 
	cout<<"[1] medicina "<<endl; 
	cout<<"[2] Ingenieria "<<endl; 
	cout<<"[3] otra "<<endl; 
	cin>>alumnos[z].profesion;
		cout<<"\n";
		if(alumnos[z].profesion == 1){
cout<<"Boleta de calificaciones"<<endl;
cout<<"Nota 1: "<<alumnos[z].nota1<<endl;
cout<<"Nota 2: "<<alumnos[z].nota2<<endl;
cout<<"Nota 3: "<<alumnos[z].nota3<<endl;
}else{
cout<<"ESTIMADOS PADRES DE FAMILIA:"<<endl;
cout<<"Los Invitamso a una charla amistosa con galletas "<<endl;
cout<<"con los maestros de la escuela donde estudia su hij(@)"<<endl;
cout<<"\n";
}
	}	
	for(int z=0;z<5;z++){
		cout<<"Nombre "<<alumnos[z].nom_alumno.nombre<<endl;
		cout<<"Edad "<<alumnos[z].edad<<endl;	
		cout<<"Nota 1"<<alumnos[z].nota1;
		cout<<"Nota 2"<<alumnos[z].nota2;
		cout<<"Nota 3"<<alumnos[z].nota3;
	}
}