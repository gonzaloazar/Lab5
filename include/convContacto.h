#ifndef CONVCONTACTO_H
#define CONVCONTACTO_H
#include <iostream>
using namespace std;
#include "conversacion.h"

class ConvContacto: public Conversacion {
    private:
        string numero;
        string nombre;
    public:
    ConvContacto(int, bool, string numero, string nombre);
    string getNumero();
    string getNombre();
    void setNumero(string);
    void setNombre(string);
    ~ConvContacto();
    string getTipoConv();
};
#endif
