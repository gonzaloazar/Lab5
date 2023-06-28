#ifndef convContacto_h
#define convContacto_h
#include <iostream>
using namespace std;
#include "conversacion.h"
class Convcontacto: public Conversacion {
    private:
        int numero;
        string nombre;
    public:
    Convcontacto(int, bool, int numero, string nombre);
    Convcontacto(Convcontacto *);
    int getNumero();
    string getNombre();
    void setNumero(int);
    void setNombre(string);
    ~Convcontacto();
};
#endif
