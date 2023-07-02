#ifndef factory_h
#define factory_h
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