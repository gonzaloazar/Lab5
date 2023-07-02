#include "../include/menFoto.h"


void MenFoto::setFormato(string newForm){
    this->formato = newForm;
};
void MenFoto::setTamanio(float newTam){
    this->tamanio = newTam;
};
void MenFoto::setTOpc(string NewTOpc){
    this->textOpcional = NewTOpc;
};

string MenFoto::getFormato(){
    return this->formato;
};
float MenFoto::getTamanio(){
    return this->tamanio;
};
string MenFoto::getTOpc(){
    return this->textOpcional;
};

string MenFoto::getTipoMensaje(){
    return "foto";
};


MenFoto::MenFoto(int cod, string miNum, string url, string newForm, float newTam, string newTOpc) : MenMultimedia(cod, miNum, url){
    this->formato = newForm;
    this->tamanio = newTam;
    this->textOpcional = newTOpc;
};

MenFoto::~MenFoto(){
};