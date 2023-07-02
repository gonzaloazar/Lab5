#include "../include/convContacto.h"


string ConvContacto::getNumero(){
    return this->numero;
};

string ConvContacto::getNombre(){
    return this->nombre;
};

void ConvContacto::setNumero(string _numero){
    this->numero=_numero;
};

void ConvContacto::setNombre(string _nombre){
    this->nombre=_nombre;
};

string ConvContacto::getTipoConv(){
    return "contacto";
};

ConvContacto::ConvContacto(int id,bool estaarchivado,string _numero,string _nombre):Conversacion(id, estaarchivado){
    setNombre(_nombre);
    setNumero(_numero);
};

ConvContacto::~ConvContacto(){
};



