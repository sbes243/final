#include "persona.h"
#include <iostream>
#include <string>
using namespace std;

persona::persona(int _edad,string _nombre,int _DNI,string _pais){// El constructor de la clase
    edad=_edad;
    nombre=_nombre;
    DNI=_DNI;
    pais=_pais;
}
int persona::obteneredad(){//Funcion para poder usar la variable edad aunque sea privada
    return edad;
    }
string persona::obtenernombre(){
    return nombre;
}
void persona::personalesesta(){//Mostrar los datos de una persona que si se encuentra en la base de datos
    cout<<"Su edad es: "<<edad<<" de nombre "<<nombre<<" numero de DNI "<<DNI<<" viene de "<<pais<<endl;
}
void persona::personales(){// En caso de no estar la persona se pediran que se ingresen los datos y luego se mostraran
    cout<<"Edad:";
    cin>>edad;
    cout<<"Cual es su nombre:";
    cin>>nombre;
    cout<<"Cual es su DNI:";
    cin>>DNI;
    cout<<"Pais de origen:";string nombre;
        int DNI;
        string pais;
    cin>>pais;

    cout<<"tengo "<<edad<<" años "<<" mi nombre es "<<nombre<<" , mi DNI es "<<DNI<<" y vengo de "<<pais<<endl;
}
