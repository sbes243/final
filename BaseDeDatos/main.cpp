 #include <iostream>
#include<array>


using namespace std;

class Persona{
    private:
        int edad;

    public:
        string nombre;
        int DNI;
        string pais;
        Persona(int,string,int,string);
        int obteneredad();
        int personalesesta();
        int personales();
};

Persona::Persona(int _edad,string _nombre,int _DNI,string _pais){
    edad=_edad;
    nombre=_nombre;
    DNI=_DNI;
    pais=_pais;
}
int Persona::obteneredad(){
    return edad;
    }
int Persona::personalesesta(){
    cout<<"Su edad es: "<<edad<<" de nombre "<<nombre<<" numero de DNI "<<DNI<<" viene de "<<pais;
}
int Persona::personales(){
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
class Examen{
    public:
        int numeroe;
        string tipo_de_e;
        int pagina_e;
        string Lclase;
        int Nclase;
        string carrera;
        Examen(int,string,int,string,int,string);
        void clase();
        void elex();
        string getN();

};
Examen::Examen(int _numeroe,string _tipo_de_e,int _pagina_e,string _Lclase,int _Nclase,string _carrera){
    numeroe=_numeroe;
    tipo_de_e=_tipo_de_e;
    pagina_e=_pagina_e;
    Lclase=_Lclase;
    Nclase=_Nclase;
    carrera=_carrera;
}
void Examen::clase(){
    cout<<"Carrera deseada:";
    cin>>carrera;
    cout<<"Su clase es la "<<Lclase<<Nclase<<endl;
}
void Examen::elex(){
    cout<<"Su examen es el numero "<<numeroe<<" de la carrera de "<<tipo_de_e<<" con "<<pagina_e<<" hojas"<<endl;
}

int main()
{
    int b;
    string f;
    int a;
    string p1l;
    cout<<"Ingrese su edad:"<<
    cin>>b;
    cin>>f;
    cin>>a;
    cin>>p1l;
    Persona p1=Persona(22,"Sebastian",974740792," Peru");
    Persona p2=Persona(19,"Nicolas",8262826825," peru");
    Examen e1=Examen(132,"computacion",34,"A",05,"carrera");
    if(b==p1.obteneredad() ){
        return p1.personalesesta();
    }
    else{
        return p1.personales();
    }
    e1.clase();
    e1.elex();
    return 0;
}
