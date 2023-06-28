#include "../include/convContacto.h"

Convcontacto::Convcontacto(int _numero,string _nombre,int id,
        bool estaarchivado):Conversacion(id, estaarchivado){
    setNombre(_nombre);
    setNumero(_numero);
}

int Convcontacto::getNumero(){
    return this->numero;
}

string Convcontacto::getNombre(){
    return this->nombre;
}

void Convcontacto::setNumero(int _numero){
    numero=_numero;
}

void Convcontacto::setNombre(string _nombre){
    nombre=_nombre;
}

Convcontacto::~Convcontacto(){
}

