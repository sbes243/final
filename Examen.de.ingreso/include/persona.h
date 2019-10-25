#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class persona// Clase que hace referencia a los datos de una persona
{
    private:// Se piden los datos necesarios para presentarse al examen
        int edad;
        string nombre;
        int DNI;
        string pais;
    public:// Se inicializa el constructor y las funciones de la clase
        persona(int ,string,int ,string);
        int obteneredad();
        void personalesesta();
        void personales();
};




#endif // PERSONA_H
