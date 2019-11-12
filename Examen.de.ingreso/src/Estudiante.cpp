#include "Estudiante.h"
#include "persona.h"
#include <string>
#include <iostream>
using namespace std;

Estudiante::Estudiante(){}
Estudiante::Estudiante(int _edad,string _nombre,int _DNI,string _pais):persona(_edad,_nombre,_DNI,_pais){
}

