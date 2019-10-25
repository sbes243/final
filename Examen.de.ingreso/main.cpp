#include <iostream>
#include<array>
#include "persona.h"
#include "Examen.h"

using namespace std;

int main()
{
    int b;
    string f;
    int a;
    string p1l;
    cin>>b;
    cin>>f;
    cin>>a;
    cin>>p1l;
    persona p1=persona(22,"Sebastian",974740792," Peru");
    persona p2=persona(19,"Nicolas",8262826825," peru");
    Examen e1=Examen(132,"computacion",34,"A",05,"carrera");
    if(b==p1.obteneredad()){
         p1.personalesesta();
    }
    else{
        p1.personales();
    }
    e1.clase();
    e1.elex();
    return 0;
}
