#include "sesion.h"



Sesion::Sesion():ISesion(){};

bool Sesion::haySesionActiva(){
    if(this->sesionActiva != NULL)
        return true;
    else
        return false;
};

bool Sesion::existeSesion(string as){
    if(this->sesiones.find(as) == this->sesiones.end()){
        return false;
    }else {
        return true;
    }
};

void Sesion::setSesionActiva(string a){
    if(existeSesion(a)){
        this->sesionActiva = this->sesiones[a];
    }
}

User* Sesion::getSesionActiva(){
    return this->sesionActiva;
}

bool Sesion::ingresarNumero(string num){
    if(existeSesion(num)){
        this->sesionActiva = this->sesiones[num];
        return true;
    }else {
        return false;
    }
}

void Sesion::registrarUser(string num, string nom, string desc, string url){
    Fecha nuevaFecha;
    User *nuevo = new User(num,nom,desc,url);
    this->sesiones.insert(pair<string, User*>(num,nuevo));
};
