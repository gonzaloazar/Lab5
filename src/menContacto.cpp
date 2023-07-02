#include "../include/menContacto.h"

void MenContacto::setNom(string _nom){
    this->nom = _nom;
};

void MenContacto::setNum(string _num){
    this->num = _num;
};

string MenContacto::getNum(){
    return this->num;
};

string MenContacto::getNom(){
    return this->nom;
};

string MenContacto::getTipoMensaje(){
    return "contacto";
};


MenContacto::MenContacto(int cod,string miNum,string nom,string num):Mensaje(cod,miNum){
    this->nom = nom;
    this->num = num;
};

MenContacto::~MenContacto(){
};


