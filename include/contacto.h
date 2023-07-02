#ifndef CONTACTO_H
#define CONTACTO_H
#include "iostream"
using namespace std;

class Contacto{
    private:
        string Nombre;
        string Numero;
    public:
        Contacto(string nombre, string Numero);
        Contacto(Contacto *);
        void setNombre(string nombre);
        void setNumero(string);
        string getNombre();
        string getNumero();  
        ~Contacto();      
};

#endif
