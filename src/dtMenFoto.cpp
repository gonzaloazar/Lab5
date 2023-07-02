#include "../include/dtMenFoto.h"
#include <string>
using namespace std;


void DtMenFoto::setFormato(string a){
    this->formato = a;
};

void DtMenFoto::setTamanio(float a){
    this->tamanio = a;
};

void DtMenFoto::setTextOpc(string a){
    this->textOpc = a;
};

string DtMenFoto::getFormato(){
    return this->formato;
};

float DtMenFoto::getTamanio(){
    return this->tamanio;
};

string DtMenFoto::getTextOpc(){
    return this->textOpc;
};

string DtMenFoto::getTipoMensaje(){
    return "foto";
};

DtMenFoto::DtMenFoto(int a, string d, string s, float f, string g):DtMenMultimedia(a,d){
    this->formato = s;
    this->tamanio = f;
    this->textOpc = g;
};

DtMenFoto::~DtMenFoto(){
};