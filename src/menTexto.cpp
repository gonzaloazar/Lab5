#include "../include/menTexto.h"

void MenTexto::setTexto(string t){
    this->texto = t;
};

string MenTexto::getTexo(){
    return this->texto;
};

MenTexto::MenTexto(int _cod,Fecha f,string miNum, string _texto):Mensaje(_cod, f, miNum) {
    this->texto = _texto;
};
string MenTexto::getTipoMensaje(){
    return "Texto";
};

MenTexto::~MenTexto(){
};

MenTexto::MenTexto(){
};