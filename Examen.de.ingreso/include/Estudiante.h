#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include "persona.h"
#include <iostream>
using namespace std;


class Estudiante:public persona
{   private:
        string carrera_deseada;
    public:
        Estudiante (int,string,int,string,string);
        Estudiante();
        void mostrar();
        void personales();
};

#endif // ESTUDIANTE_H
