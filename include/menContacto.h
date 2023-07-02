#ifndef MENCONTACTO_H
#define MENCONTACTO_H
#include "mensaje.h"

class MenContacto : public Mensaje {
    private:
        string nom;
        string num;
    public:
        void setNom(string);
        void setNum(string);
        string getNum();
        string getNom();
        MenContacto(int codigo, Fecha,string miNum, string nom, string num);
        string getTipoMensaje();
        ~MenContacto();
};

#endif