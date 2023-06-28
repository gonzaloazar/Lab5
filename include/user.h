#ifndef user_h
#define user_h 
#include <string>
#include "fecha.h"
#include "moduser.h"

using namespace std;

class User : public ModUser {
    private:
        string num;
        string nom;
        string desc;
        string url;
        Fecha ultConex;
        Fecha fechaReg;
    public:
        void setNum(string);
        void setNom(string);
        void setDesc(string);
        void setURL(string);
        void setUltConex(Fecha);
        void setFechaReg(Fecha);
        string getNum();
        string getNom();
        string getDesc();
        string getURL();
        string getFechaConex();
        string getFechaReg();
        User();
        User(string num, string nom, string desc, string url, Fecha ult, Fecha reg);
        ~User();
        virtual void actualizarURL(string newURL);
        virtual void actualizarNombre(string newNombre);
        virtual void actualizarDescripcion(string newDesc);
};

#endif
