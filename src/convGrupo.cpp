#include "convGrupo.h"
#include "conversacion.h"


Convgrupo::Convgrupo(int id,
        bool estaarchivado,string _nombre):Conversacion(id, estaarchivado){
    setNombre(_nombre);
}

void Convgrupo::setNombre(string _nombre){
    Nombre=_nombre;
}

string Convgrupo::getNombre(){
    return this->Nombre;
}