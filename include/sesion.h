/*
Sesion vamos a declararla en el modulo de database. Va a ser a la cual la Factory le pida las sesiones 
y cree la interfaces gracias a ella.
*/
#ifndef sesion_h
#define sesion_h
#include "isesion.h"
#include "user.h"
#include <map>
#include <string>
using namespace std;


class Sesion : public ISesion {
    private:
        map<string, User*> sesiones; // https://www.youtube.com/watch?v=7mwgA9XFIEQ creo usare lista
        User *sesionActiva;
    public: 
        bool haySesionActiva();
        bool existeSesion(string);
        void setSesionActiva(string);
        User* getSesionActiva();
        Sesion();
        ~Sesion();
        virtual void registrarUser(string,string,string,string);
        virtual bool ingresarNumero(string);//Se fija en la existencia del actor dentro de la lista de usuarios, si existe devuelve true e inicia sesion, si no existe devuelve false.
        virtual void guardarFechaSesion();
        virtual void cerrarSesion();
};



#endif
