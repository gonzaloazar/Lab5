#include "../include/mensaje.h"

void Mensaje::setCod(int _cod){
    this->codigo = _cod;
};

void Mensaje::setFecha(){
    this->fecha.actualizarFecha();
};
void Mensaje::setVisto(string a){
    this->visto[a] = true;
};


bool Mensaje::fueVisto(string a){
    if(this->visto[a] == true)
        return true;
    else 
        return false;
};


int Mensaje::getCod(){
    return this->codigo;
};

string Mensaje::getFecha(){
    return this->fecha.getFechaString();
};

bool Mensaje::esEmisor(string miNum){
    if(this->emisor == miNum)
        return true;
    else 
        return false;
}

Mensaje::Mensaje(int _cod, string miNom){
    this->codigo =_cod;
    this->emisor = miNom;
    this->setFecha();
    this->setVisto(miNom);
};

Mensaje::~Mensaje(){
};

Mensaje::Mensaje(){
};