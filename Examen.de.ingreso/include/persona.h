#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class persona// Clase que hace referencia a los datos de una persona
{
     protected:
        int edad;
        string nombre;
        int DNI;
        string pais;
    public:// Se inicializa el constructor y las funciones de la clase
        persona(int ,string,int ,string);
        persona();
        int obteneredad();
        string obtenernombre();
        void personalesesta();
        virtual void personales();
        int obtenerDNI();
        string obtenerpais();
        virtual void mostrar();
};




#endif // PERSONA_H
