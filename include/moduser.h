#ifndef MODUSER_H
#define MODUSER_H
#include <string>
using namespace std;


class ModUser {
    public:
        virtual void actualizarURL(string newURL) = 0;
        virtual void actualizarNombre(string newNombre)  = 0;
        virtual void actualizarDescripcion(string newDesc) = 0;
};

#endif