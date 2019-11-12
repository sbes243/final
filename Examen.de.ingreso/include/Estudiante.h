#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include "persona.h"
#include <iostream>
using namespace std;


class Estudiante:public persona
{   private:
        string carrera;
    public:
        Estudiante (int,string,int,string);
        Estudiante();
};

#endif // ESTUDIANTE_H
