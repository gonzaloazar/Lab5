#ifndef CLOGIN_H
#define CLOGIN_H
#include <string>
using namespace std;

class ISesion {
    public:
        virtual void registrarUser(string,string,string,string) = 0;
        virtual bool ingresarNumero(string) = 0;
        virtual void guardarFechaSesion() = 0;
        virtual void cerrarSesion() = 0;
};


#endif