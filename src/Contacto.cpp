#include "../include/contacto.h"
//pedro

Contacto::Contacto(string _nombre,string _numero){
    Nombre=_nombre;
    Numero=_numero;
}

void Contacto::setNombre(string _nombre){
    Nombre=_nombre;
}

void Contacto::setNumero(string _numero){
    Numero=_numero;
}

string Contacto::getNombre(){
    return this->Nombre;
}

string Contacto::getNumero(){
    return this->Numero;
}
