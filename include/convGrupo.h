#ifndef convGrupo.h
#define convGrupo.h
#include <map>
#include "conversacion.h"
#include "fecha.h"
using namespace std;


class ConvGrupo: public Conversacion {
    private:
        string nombre;
        string url;
        Fecha creacion;
        map<string, bool> *participantesAdmin; //  si da true entonces el part es admin.
    public:
        ConvGrupo(int,bool,string nombre, string url,map<string,bool> *partAdm);
        void setNombre(string nombre);
        void setURL(string url);
        string getNombre();
        string getURL();
        Fecha getFecha();
        ~ConvGrupo();
};

#endif