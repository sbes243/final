#include "Examen.h"
#include <iostream>

using namespace std;

Examen::Examen(int _numeroe,string _tipo_de_e,int _pagina_e,string _Lclase,int _Nclase,string _carrera){ //Constructor de la clase
    numeroe=_numeroe;
    tipo_de_e=_tipo_de_e;
    pagina_e=_pagina_e;
    Lclase=_Lclase;
    Nclase=_Nclase;
    carrera=_carrera;
}
void Examen::clase(){ //Pide al usuario una carrera para luego usar sus datos para mostrar donde se dara el examen
    cout<<"Carrera deseada:";
    cin>>carrera;
    cout<<"Su clase es la "<<Lclase<<Nclase<<endl;
}
void Examen::elex(){//Usando los datos obtenidos en la clase persona se generara un numero de examen su tipo y su tamaño
    cout<<"Su examen es el numero "<<numeroe<<" de la carrera de "<<tipo_de_e<<" con "<<pagina_e<<" hojas"<<endl;
}
