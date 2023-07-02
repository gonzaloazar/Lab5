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
        void setNoVisto(string);
        bool fueVisto(string); // da false si no existe el mensaje o si lo elimine
        bool esFalseVisto(string); // cuando se elimina un mensaje en una conv se setea false el visto, entonces necesito esto para saber si lo elimine o es porque no se sabe si lo vio o no.
        bool esEmisor(string);
        int getCod();
        string getEmisor();
        string getFecha();
        Fecha getFecha2();
        virtual string getTipoMensaje() = 0;
        Mensaje();
        Mensaje(int cod,Fecha,string miNum);
        ~Mensaje();
};


#endif