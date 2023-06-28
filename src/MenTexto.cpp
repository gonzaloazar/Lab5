#include "../include/menTexto.h"

void MenTexto::setTexto(string t){
    this->texto = t;
}

string MenTexto::getTexo(){
    return this->texto;
}

MenTexto(string _cod,Fecha _f,string _url,string _texto):MenMultimedia(_cod,_f,_url){
    texto=_texto;
}

MenTexto::~MenTexto(){
}
