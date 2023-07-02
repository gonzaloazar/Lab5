#include <iostream>
#include "../include/factory.h"
#include "../include/contmen.h"

ContMensaje *conMen ;
Sesion *login = new Sesion;

Factory::Factory(){};

ISesion *Factory::getISesion(){
    return login;
};

IContMensajes *Factory::getControladorMensajes(){  
    conMen = new ContMensaje(login->getSesionActiva());
    return conMen;
};

ModUser *Factory::getModUser(){
    return login->getSesionActiva();
};

Factory::~Factory(){
    login->~Sesion();
    conMen->~ContMensaje();
};