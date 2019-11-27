#include "Examen.h"
#include <iostream>
#include <string>

using namespace std;
Examen::Examen(){}
Examen::Examen(int _numeroe,string _tipo_de_e,int _pagina_e,string _carrera){ //Constructor de la clase
    numeroe=_numeroe;
    tipo_de_e=_tipo_de_e;
    pagina_e=_pagina_e;
    carrera=_carrera;
}

void Examen::elex(){//Usando los datos obtenidos en la clase persona se generara un numero de examen su tipo y su tamaño
    cout<<"Su examen es el numero "<<numeroe<<" de "<<tipo_de_e<<" con "<<pagina_e<<" hojas "<<" de la carrera de "<<carrera<<endl;
}
