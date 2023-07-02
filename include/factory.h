#ifndef FACTORY_H
#define FACTORY_H
#include "contmen.h"
#include "sesion.h"
#include "user.h"
using namespace std;



class Factory {
    public:
        Factory();
        ISesion *getISesion();
        IContMensajes *getControladorMensajes();
        ModUser *getModUser();
        ~Factory();
};



#endif