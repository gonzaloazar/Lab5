#ifndef CONVCONTACTO_H
#define CONVCONTACTO_H
#include <iostream>
using namespace std;
#include "conversacion.h"

class ConvContacto: public Conversacion {
    private:
        int numero;
        string nombre;
    public:
    ConvContacto(int, bool, int numero, string nombre);
    int getNumero();
    string getNombre();
    void setNumero(int);
    void setNombre(string);
    ~ConvContacto();
    string getTipoConv();
};
#endif
