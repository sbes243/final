#include "Maestro.h"
#include <iostream>
#include <string>
using namespace std;

Maestro::Maestro(){}
Maestro::Maestro(int _edad,string _nombre,int _DNI,string _pais,int _telefono):persona(_edad,_nombre,_DNI,_pais,_telefono)
{
}
void Maestro::mostrar(){
    cout<<"Nombre del maestro: "<<nombre<<endl;

}
