#ifndef clogin_h
#define clogin_h
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