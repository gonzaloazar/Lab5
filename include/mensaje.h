#ifndef mensaje_h
#define mensaje_h
#include <iostream>
#include <map>
#include "fecha.h"

using namespace std;

class Mensaje {
    private:
        string codigo;
        Fecha fecha;
        map <string, bool> visto;
    public:
        void setCod(string);
        void setFecha(Fecha);
        void setVisto(string);
        bool fueVisto(string);
        string getCod();
        string getFecha();
        Mensaje();
        Mensaje(string, Fecha);
        ~Mensaje();
};


#endif