#include "../include/dtMensaje.h"
#include <string>

using namespace std;

DtMensaje::DtMensaje(int x,Fecha f,string num){
    this->id = x;
    this->fecha=f;
    this->visto[num] = true;
    this->emisor = num;
};

bool DtMensaje::esEmisor(string num){
    if(this->emisor == num)
        return true;
    else 
        return false;
};

int DtMensaje::getId(){
    return this->id;
};

void DtMensaje::setId(int x){
    this->id = x;
};

DtMensaje::~DtMensaje(){
};

DtMensaje::DtMensaje(){
};

Fecha DtMensaje::getFecha(){
    return this->fecha;
}

void DtMensaje::setVisto(string a){
    this->visto[a] = true;
};

void DtMensaje::setNoVisto(string a){
    this->visto[a] = false;
};

bool DtMensaje::fueVisto(string a){
    if(this->visto[a] == true)
        return true;
    else 
        return false;
};

string DtMensaje::getEmisor(){
    return this->emisor;
}