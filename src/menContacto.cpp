#include "../include/menContacto.h"

void MenContacto::setNom(string _nom){
    nom=_nom;
}

void MenContacto::setNum(string _num){
    num=_num;
}

string MenContacto::getNum(){
    return this->num;
}

string MenContacto::getNom(){
    return this->nom;
}


