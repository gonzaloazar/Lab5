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
        void setNoVisto(string);
        bool fueVisto(string);
        bool esEmisor(string);
        string getEmisor();
        virtual string getTipoMensaje() = 0;
        Fecha getFecha();
        DtMensaje();
        DtMensaje(int,Fecha,string num);
        ~DtMensaje();
};

#endif