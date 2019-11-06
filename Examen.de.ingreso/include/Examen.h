#ifndef EXAMEN_H
#define EXAMEN_H
#include <string>
using namespace std;
class Examen
{
     private:// Declaracion de las funciones
        int numeroe;
        string tipo_de_e;
        int pagina_e;
        string Lclase;
        int Nclase;
        string carrera;
    public:// Esta clase recibira los datos como la clase tipo de clase, etc
        Examen(int,string,int,string,int,string);
        int obtenerclase();
        void clase();
        void elex();

};

#endif // EXAMEN_H
