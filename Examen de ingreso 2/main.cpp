#include <iostream>
#include "persona.h"
#include "Examen.h"
#include "Estudiante.h"
#include "Maestro.h"
#include <vector>
#include <cstdlib>
#include <salon.h>
#include <string>
#include <fstream>

using namespace std;
/*
void buscar.antiguo(vector <Estudiante> v){
    string c;
    cin>>c;
    for(int i=0;i<v.size();i++){
        if(c==v[i].obtenernombre()){
            v[i].mostrar;
            return ;
        }
    }
}
*/
void buscar(vector <Estudiante> v){
    string c;
    cin>>c;
    for(int i=0;i<v.size();i++){

        if(v[i].obtenernombre().find(c)!=string::npos){
            v[i].mostrar();

        }
    }
}
void encontrar(vector <salon> v){
    int x=-1;
    string c;
    cin>>c;
    for(int i=0;i<v.size();i++){
        if(c==v[i].obtener_c()){
            v[i].mostrar();
            return ;
        }
    }
}

void mostrar1(vector <Estudiante>  v) {
	for (int i = 0; i < v.size(); i++) {
        v[i].mostrar();
		cout<<endl;
	}
}
void mostrar1(vector <salon>  v) {
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
    cout<<"\n 4. Buscar estudiante";
    cout<<"\n 5. Salir";
    cout<<"\nElija una opcion ===> ";
}

Estudiante split(string g){
    vector <string> arr;
    string l="";
    for(int i=0;i<g.length();i++){
        if(g[i]==' '){
            arr.push_back(l);
            l="";
        }
        l+=g[i];
    }
    arr.push_back(l);
    return Estudiante(atoi(arr[0].c_str()),arr[1],atoi(arr[2].c_str()),arr[3],atoi(arr[4].c_str()),arr[5]);
}

int main()
{
    ifstream ifs("Estudiantes.txt",ios::in);

    /*if(!ifs){
        cout<<"no se abreio"<<endl;
    }*/
    string line;
    vector <Estudiante> arrt;

    while(getline(ifs,line)){
        arrt.push_back(split(line));
    }
    int opc;
    Examen e1(132,"computacion",05,"Ciencias de la computacion");
    Examen e2(85,"derecho",40,"Derecho");
    Examen e3(76,"ing.civil",30,"Ingenieria civil");
    Examen e4(120,"telecomunicacion",35,"Telecomunicacion y electronica");
    Examen e5(108,"psicologia",29,"Psicologia");
    Examen e6(95,"contabilidad",41,"Contabilidad");
    Examen e7(87,"educacion",37,"Educacion");
    Examen e8(83,"ing.industrial",29,"Ingenieria Industrial");
    Maestro m1(34,"Pedro Gonzales",8879797,"Peru",9472847);
    Maestro m2(29,"Juan Perez",374382,"Peru",8743887);
    Maestro m3(49,"Judith Gutierrez",93,"Peru",89);
    Maestro m4(50,"Vivian Perez",3,"f",67);
    Maestro m5(38,"Diego Lewis",2,"f",49);
    Maestro m6(44,"Daniel Yepez",4,"f",9);
    Maestro m7(37,"Winder Concha",4,"f",9);
    Maestro m8(47,"Rodolfo Pinto",3,"f",7);
    salon s1("computacion","A783",m1,e1);
    salon s2("derecho","B561",m2,e2);
    salon s3("ing.civil","B302",m3,e3);
    salon s4("telecomunicacion","P102",m4,e4);
    salon s5("psicologia","B209",m5,e5);
    salon s6("contabilidad","N303",m6,e6);
    salon s7("educacion","N213",m7,e7);
    salon s8("ing.industrial","N121",m8,e8);
    vector <salon> arr2={s1,s2,s3,s4,s5,s6,s7,s8};
    menu();
    cin>>opc;
    system("cls");
    do{
        switch(opc){// Se usa la opcion switch para 4 opciones si se desea separar por partes se agrega system("cls");
            case 1://opcion 1 para obtener los datos de la base
                cout<<"Estudiantes ingresados:"<<endl;
                mostrar1(arrt);
                menu();
                cin>>opc;
                break;
            case 2://opcion 2 para ingresar nuevos datos de un alumno
                aumentar(arrt);
                menu();
                cin>>opc;
                break;
            case 3://opcion 3 para obtener la clase del examen
                cout<<"Carrera deseada: ";
                encontrar(arr2);
                menu();
                cin>>opc;
                break;
            case 4:
                 buscar(arrt);
                 menu();
                 cin>>opc;
                 break;
            case 5: exit(0);
                break;
             default :
                 cout<<"Opcion no valida";
                 break;
        }
    }while(opc!=5);
    system("pause");
        return 0;
}
