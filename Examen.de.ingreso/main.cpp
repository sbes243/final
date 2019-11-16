#include <iostream>
#include "persona.h"
#include "Examen.h"
#include "Estudiante.h"
#include "Maestro.h"
#include <vector>
#include <cstdlib>

using namespace std;
/*void ordenarburbuja(persona arr[],int tam){
     for(int i=0;i<tam;i++){
         for(int j=0;j<tam-1;j++){
            if(arr[j].obteneredad>arr[j+1].obteneredad){
                persona c.obteneredad()=arr[j].obteneredad();
                arr[j].obteneredad()=arr[j+1].obteneredad();
                arr[j+1].obteneredad()=c;
            }
         }
         }
}*/
void mostrar1(vector <Estudiante>  v) {
	for (int i = 0; i < v.size(); i++) {
        v[i].mostrar();
		cout<<endl;
	}
}
void aumentar(vector <Estudiante> &v ){
    Estudiante v1;
    v1.personales();
    v.push_back(v1);
}
void menu(){
    cout<<"\n-----------Menu----------";//El menu que se utilizara en la base de datos
    cout<<"\n 1. Revisar base de datos";
    cout<<"\n 2. Nuevo ingresante";
    cout<<"\n 3. Examen";
    cout<<"\n 4. Salir";
    cout<<"\nElija una opcion ===> ";
}
int main()
{   int opc;
    Estudiante p1(22,"Sebastian",974740792," Peru",974740791,"computacion");
    Estudiante p2(19,"Nicolas",92628275," Peru",974743429,"derecho");
    Estudiante p3(21,"Luciana",959875879,"Argentina",964915239,"derecho");
    Examen e1(132,"computacion",34,"A",05,"carrera");
    Maestro m1(34,"Pedro Gonzales",8879797,"Peru",928472847);

    vector <Estudiante> arr1={p1,p2,p3};
    menu();
    cin>>opc;
    system("cls");
    do{
        switch(opc){// Se usa la opcion switch para 4 opciones si se desea separar por partes se agrega system("cls");
            case 1://opcion 1 para obtener los datos de la base
                cout<<"Estudiantes ingresados:"<<endl;
                mostrar1(arr1);
                menu();
                cin>>opc;
                break;
            case 2://opcion 2 para ingresar nuevos datos de un alumno
                aumentar(arr1);
                menu();
                cin>>opc;
                break;
            case 3://opcion 3 para obtener la clase del examen
                e1.clase();
                m1.mostrar();
                e1.elex();
                menu();
                cin>>opc;
                break;
             case 4: exit(0);
                break;
             default : cout<<"Opcion no valida";
        }
    }while(opc!=4);
    system("pause");
        return 0;
}
