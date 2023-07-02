#include "../include/dtMensaje.h"
#include <string>

using namespace std;

DtMensaje::DtMensaje(int x,Fecha f,string num){
    this->id = x;
    fecha=f;
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

void Mensaje::setVisto(string a){
    this->visto[a] = true;
};


bool Mensaje::fueVisto(string a){
    if(this->visto[a] == true)
        return true;
    else 
        return false;
};