#ifndef MENSAJE_H
#define MENSAJE_H
#include <iostream>
#include <map>
#include "fecha.h"

using namespace std;

class Mensaje {
    private:
        int codigo;
        Fecha fecha;
        map <string, bool> visto;
    public:
        void setCod(int);
        void setFecha();
        void setVisto(string);
        bool fueVisto(string);
        int getCod();
        string getFecha();
        virtual string getTipoMensaje() = 0;
        Mensaje();
        Mensaje(int cod,string miNum);
        ~Mensaje();
};


#endif