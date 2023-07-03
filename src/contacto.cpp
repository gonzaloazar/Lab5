#include "../include/contacto.h"

Contacto::Contacto(string nombre, string numero){
    this->Nombre = nombre;
    this->Numero = numero;
};
void Contacto::setNombre(string nombre){
    this->Nombre = nombre;   
};
void Contacto::setNumero(string numero){
    this->Numero = numero;
};
string Contacto::getNombre(){
    return this->Nombre;
};
string Contacto::getNumero(){
    return this->Numero;
};  
Contacto::~Contacto(){
};  
Contacto::Contacto(Contacto *c){

};