#include <iostream>
#include<array>
#include "persona.h"
#include "Examen.h"
#include <cstdlib>

using namespace std;
void ordenarburbuja(persona arr[],int tam){
     for(int i=0;i<tam;i++){
         for(int j=0;j<tam-1;j++){
            if(arr[j].obteneredad>arr[j+1].obteneredad){
                persona c.obteneredad()=arr[j].obteneredad();
                arr[j].obteneredad()=arr[j+1].obteneredad();
                arr[j+1].obteneredad()=c;
            }
         }
         }
}
int main()
{
    int b,opc;
    int a;
    string f;
    string pl;
    persona p1(22,"Sebastian",974740792," Peru");
    persona p2(19,"Nicolas",92628275," Peru");
    persona p3(21,"Luciana",959875879,"Argentina");
    Examen e1(132,"computacion",34,"A",05,"carrera");
    persona arr1[]={p1,p2,p3};
    cout<<"\n-----------Menu----------";//El menu que se utilizara en la base de datos
    cout<<"\n 1. Revisar base de datos";
    cout<<"\n 2. Nuevo ingresante";
    cout<<"\n 3. Examen";
    cout<<"\n 4. Salir";
    cout<<"\nElija una opcion ===> ";
    cin>>opc;
    system("cls");
    switch(opc){// Se usa la opcion switch para 4 opciones si se desea separar por partes se agrega system("cls");
        case 1://opcion 1 para obtener los datos de la base
            cout<<"Estudiantes ingresados:"<<endl;
            cout<<p1.obteneredad()<<" "<<p1.obtenernombre()<<" "<<p1.obtenerDNI()<<" "<<p1.obtenerpais()<<endl;
            cout<<p2.obteneredad()<<" "<<p2.obtenernombre()<<" "<<p2.obtenerDNI()<<" "<<p2.obtenerpais()<<endl;
            cout<<p3.obteneredad()<<" "<<p3.obtenernombre()<<" "<<p3.obtenerDNI()<<" "<<p3.obtenerpais()<<endl;
            break;
            break;
        case 2://opcion 2 para ingresar nuevos datos de un alumno
            p2.personales();
            break;
        case 3://opcion 3 para obtener la clase del examen
            e1.clase();
            break;
         case 4: exit(0);
            break;
         default : cout<<"Opcion no valida";
    }
    system("pause");
        return 0;
}
