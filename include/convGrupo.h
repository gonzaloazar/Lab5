#ifndef convGrupo.h
#define convGrupo.h
#include "conversacion.h"
using namespace std;
class Convgrupo: public Conversacion {
    private:
        string Nombre;
    public:
        Convgrupo(int,bool,string nombre);
        Convgrupo(Convgrupo *);
        void setNombre(string nombre);
        string getNombre();
};

#endif