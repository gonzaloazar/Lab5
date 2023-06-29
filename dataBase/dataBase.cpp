#include <iostream>
#include "factory.h"


Sesion *login = new Sesion;
ContMensaje *conMen = new ContMensaje;
ModUser *modUser = new ModUser;


ISesion *Factory::getISesion(){
    return login;
};

IContMensajes *Factory::getControladorMensajes(){
  conMen->setUser(login->getSesionActiva());  
  return conMen;
};