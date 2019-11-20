#ifndef EXAMEN_H
#define EXAMEN_H
#include <string>
#include <iostream>
using namespace std;
class Examen
{
     private:// Declaracion de las funciones
        int numeroe;
        string tipo_de_e;
        int pagina_e;
        string carrera;
    public:// Esta clase recibira los datos como la clase tipo de clase, etc
        Examen ();
        Examen(int,string,int,string);
        void elex();

};

#endif // EXAMEN_H
