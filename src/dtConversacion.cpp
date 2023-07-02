#include "../include/dtConversacion.h"
#include <string>
using namespace std;



void DtConversacion::setEstaArch(bool a){
    this->estaArch = a;
};

void DtConversacion::setId(int a){
    this->id = a;
};

bool DtConversacion::getEstaArch(){
    return this->estaArch;
};

int DtConversacion::getId(){
    return this->id;
};

DtConversacion::DtConversacion(int a, bool s){
    this->id = a;
    this->estaArch = s;
};

DtConversacion::~DtConversacion(){
};

DtConversacion::DtConversacion(){
};