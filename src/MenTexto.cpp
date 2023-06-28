#include "../include/menTexto.h"

void MenTexto::setTexto(string t){
    this->texto = t;
};

string MenTexto::getTexo(){
    return this->texto;
};

MenTexto::MenTexto(int _cod,string miNum,string _texto) : Mensaje(_cod, miNum) {
    this->texto = _texto;
    this->setTipoMensaje("texto");
};