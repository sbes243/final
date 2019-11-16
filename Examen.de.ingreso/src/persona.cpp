#include "persona.h"
#include <iostream>
#include <string>
using namespace std;

persona::persona(){}
persona::persona(int _edad,string _nombre,int _DNI,string _pais,int _telefono){// El constructor de la clase
    edad=_edad;
    nombre=_nombre;
    DNI=_DNI;
    pais=_pais;
    telefono=_telefono;
}
int persona::obteneredad(){//Funcion para poder usar la variable edad aunque sea privada
    return edad;
    }
string persona::obtenernombre(){
    return nombre;
}
void persona::personalesesta(){//Mostrar los datos de una persona que si se encuentra en la base de datos
    cout<<"Su edad es: "<<edad<<" de nombre "<<nombre<<" numero de DNI "<<DNI<<" viene de "<<pais<<
    ", numero telefonico"<<telefono<<endl;
}
void persona::personales(){// En caso de no estar la persona se pediran que se ingresen los datos y luego se mostraran
    cout<<"Edad:";
    cin>>edad;
    cout<<"Cual es su nombre:";
    cin>>nombre;
    cout<<"Cual es su DNI:";
    cin>>DNI;
    cout<<"Pais de origen:";
    cin>>pais;
    cout<<"Numero de telefono: ";
    cin>>telefono;

    cout<<"tengo "<<edad<<" años "<<" mi nombre es "<<nombre<<" mi numero de telefono es "<<telefono<<
    " mi DNI es "<<DNI<< " y vengo de "<<pais<<endl;
}
int persona::obtenerDNI(){
    return DNI;
}
string persona::obtenerpais(){
    return pais;
}
 void persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"DNI: "<<DNI<<endl;
	cout<<"Pais :"<<pais<<endl;
	cout<<"Telefono :"<<telefono<<endl;

}

