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
        string emisor;
        map <string, bool> visto;
    public:
        void setCod(int);
        void setFecha();
        void setVisto(string);
        bool fueVisto(string);
        bool esEmisor(string);
        int getCod();
        string getFecha();
        virtual string getTipoMensaje() = 0;
        Mensaje();
        Mensaje(int cod,Fecha,string miNum);
        ~Mensaje();
};


#endif