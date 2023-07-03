#include "../include/sesion.h"



Sesion::Sesion():ISesion(){
    this->sesionActiva = NULL;
};

bool Sesion::haySesionActiva(){
    if(this->sesionActiva != NULL)
        return true;
    else
        return false;
}
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
        if(this->sesionActiva != this->sesiones[num]){
            this->cerrarSesion();
            this->sesionActiva = this->sesiones[num];
        }// asi corre,el problema esta aca
        return true;
    }else {
        return false;
    }
    cout << "Login exitoso." << endl;
}
void Sesion::registrarUser(string num, string nom, string desc, string url){
    User *nuevo = new User(num,nom,desc,url);
    //this->sesiones.insert(pair<string, User*>(num,nuevo));
    this->sesiones[num] = nuevo;
    User * p = new User("123456","Pedro","hola","www.google.com");
    User * g = new User("654321","Juan","adios","www.facebook.com");
    User * b = new User("123654","Carla","gracias","www.mercadolibre.com");
    this->sesiones["123456"] = p;
    this->sesiones["654321"] = g;
    this->sesiones["123654"] = b;
    this->sesiones[num]->agregarContacto(p);
    this->sesiones[num]->agregarContacto(g);
    this->sesiones[num]->agregarContacto(b);
    cout << "Se ha registrado correctamente." << endl;
};
void Sesion::guardarFechaSesion(){
    this->sesionActiva->actUltConex();
};
void Sesion::cerrarSesion(){
    if(this->sesionActiva != NULL)
        this->guardarFechaSesion();
    this->sesionActiva = NULL;
};

Sesion::~Sesion(){
    this->sesionActiva = NULL;
    this->sesiones.clear();
};
