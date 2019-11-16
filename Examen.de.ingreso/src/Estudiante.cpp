#include "Estudiante.h"
#include "persona.h"
#include <string>
#include <iostream>
using namespace std;

Estudiante::Estudiante(){}
Estudiante::Estudiante(int _edad,string _nombre,int _DNI,string _pais,int _telefono,string _carrera_deseada):persona(_edad,_nombre,_DNI,_pais,_telefono),
carrera_deseada(_carrera_deseada)
{
}
void Estudiante::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Telefono : "<<telefono<<endl;
	cout<<"DNI: "<<DNI<<endl;
	cout<<"Pais :"<<pais<<endl;
	cout<<"Carrera deseada : "<<carrera_deseada<<endl;
}
void Estudiante::personales(){// En caso de no estar la persona se pediran que se ingresen los datos y luego se mostraran
    cout<<"Edad:";
    cin>>edad;
    cout<<"Cual es su nombre:";
    cin>>nombre;
    cout<<"Cual es su telefono :";
    cin>>telefono;
    cout<<"Cual es su DNI:";
    cin>>DNI;
    cout<<"Pais de origen:";
    cin>>pais;
    cout<<"Carrera deseada:";
    cin>>carrera_deseada;

    cout<<"tengo "<<edad<<" años "<<" mi nombre es "<<nombre<<" mi telefono es "<<telefono<<" , mi DNI es "<<DNI<<" y vengo de "<<pais<<
    " y vengo a postularme a la carrera de "<<carrera_deseada<<endl;
}
