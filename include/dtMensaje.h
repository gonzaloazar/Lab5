#ifndef DTMENSAJE_H
#define DTMENSAJE_H
#include "fecha.h"
#include <string>
#include <iostream>
#include <map>
using namespace std;


class DtMensaje {
    private:
        int id;
        Fecha fecha;
        string emisor;
        map<string, bool> visto;
    public:
        void setId(int);
        int getId();
        void setVisto(string);
        bool fueVisto(string);
        bool esEmisor(string);
        virtual string getTipoMensaje() = 0;
        DtMensaje();
        DtMensaje(int,Fecha,string num);
        ~DtMensaje();
};
void Mensaje::setVisto(string a){
    this->visto[a] = true;
};


bool Mensaje::fueVisto(string a){
    if(this->visto[a] == true)
        return true;
    else 
        return false;
};


#endif