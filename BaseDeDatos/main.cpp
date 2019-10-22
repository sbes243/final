 #include <iostream>
#include<array>

using namespace std;

class Persona{
    private:
        int edad;
        string nombre;
        int DNI;
        string pais;
    public:
        Persona(int,string,int,string,string);
        void personales();
};

Persona::Persona(int _edad,string _nombre,int _DNI,string _pais,string _carrera){
    edad=_edad;
    nombre=_nombre;
    DNI=_DNI;
    pais=_pais;
}
void Persona::personales(){
    cout<<"Edad:";
    cin>>edad;
    cout<<"Cual es su nombre:";
    cin>>nombre;
    cout<<"Cual es su DNI:";
    cin>>DNI;
    cout<<"Pais de origen:";
    cin>>pais;

    cout<<"tengo "<<edad<<" años "<<" mi nombre es "<<nombre<<" , mi DNI es "<<DNI<<" y vengo de "<<pais<<endl;
}
class Examen{
    private:
        int numeroe;
        string tipo_de_e;
        int pagina_e;
        string Lclase;
        int Nclase;
        string carrera;

    public:
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
    Persona p1=Persona(22," Sebastian",974740792," Peru"," computacion");
    p1.personales();
    Examen e1=Examen(132,"computacion",34,"A",05,"carrera");
    e1.clase();
    e1.elex();

    return 0;
}
