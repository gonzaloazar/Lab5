#include "mensaje.h"

void Mensaje::setCod(string _cod){
    codigo=_cod;
}

void Mensaje::setFecha(Fecha){

}

void Mensaje::fueVisto(string){
}

string Mensaje::getCod(){
    return this->codigo;
}

string Mensaje::getFecha(){
    return this->fecha;
}

Mensaje::Mensaje(string _cod,Fecha _fecha){
    codigo=_cod;
    setFecha(_fecha);
}

Mensaje::~Mensaje(){

}
