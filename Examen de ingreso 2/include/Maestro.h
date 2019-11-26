#ifndef MAESTRO_H
#define MAESTRO_H
#include <string>
#include "persona.h"
#include <iostream>
using namespace std;


class Maestro:public persona
{   public:
        Maestro (int,string,int,string,int);
        Maestro();
        void mostrar();

};

#endif
