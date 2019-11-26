#include "salon.h"
#include "Examen.h"
#include "Maestro.h"
#include <string>
using namespace std;

salon::salon (string _carrera_de,string _salon_e,Maestro _e,Examen _h){
    carrera_de=_carrera_de;
    salon_e=_salon_e;
    e=_e;
    h=_h;
}
salon::salon(){}
string salon::obtener_s(){
    return salon_e;
}
void salon::obtener_m(){
    e.mostrar();
}
void salon::obtener_e(){
    h.elex();
}
string salon::obtener_c(){
    return carrera_de;
}
void salon::mostrar(){
    cout<<"Salon : "<<salon_e<<endl;
    e.mostrar();
    cout<<endl;
    h.elex();
}
