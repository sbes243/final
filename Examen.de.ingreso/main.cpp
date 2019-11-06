#include <iostream>
#include<array>
#include "persona.h"
#include "Examen.h"

using namespace std;

int main()
{
    int b,opc;
    int a;
    string f;
    string p1l;
    persona p1=persona(22,"Sebastian",974740792," Peru");
    persona p2=persona(19,"Nicolas",8262826825," peru");
    Examen e1=Examen(132,"computacion",34,"A",05,"carrera");
    cout<<"\n-----------Menu----------";//El menu que se utilizara en la base de datos
    cout<<"\n 1. Revisar base de datos";
    cout<<"\n 2. Nuevo ingresante";
    cout<<"\n 3. Examen";
    cout<<"\n 4. Salir";
    cout<<"\nElija una opcion ===> ";
    cin>>opc;

    switch(opc){// Se usa la opcion switch para 4 opciones si se desea separar por partes se agrega system("cls");
    case 1://opcion 1 para obtener los datos de la base
        cout<<p1.obteneredad()<<endl;
        cout<<p2.obtenernombre()<<endl;
        break;
    case 2://opcion 2 para ingresar nuevos datos de un alumno
        cin>>b;
        cin>>f;
        cin>>a;
        cin>>p1l;
        break;
    case 3://opcion 3 para obtener la clase del examen
        e1.obtenerclase();
        break;
    case 4: exit(0);//opcion 4 para cerrar el menu

    default: cout<<"Opcion no valida";
    }
    system("pause");

    return 0;
}
