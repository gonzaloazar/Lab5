#include "../include/dtMensaje.h"
#include <string>

using namespace std;

DtMensaje::DtMensaje(int x){
    this->id = x;
};

int DtMensaje::getId(){
    return this->id;
};

void DtMensaje::setId(int x){
    this->id = x;
}