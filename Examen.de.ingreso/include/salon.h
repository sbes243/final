#ifndef SALON_H
#define SALON_H
#include <Maestro.h>
#include "Examen.h"
#include <string>
using namespace std;


class salon
{
    private:
        string carrera_de;
        string salon_e;
        Maestro e;
        Examen h;
    public:
        salon();
        salon(string,string,Maestro,Examen);
        string obtener_s();
        string obtener_c();
        void obtener_m();
        void obtener_e();
        void mostrar();

};

#endif // SALON_H
