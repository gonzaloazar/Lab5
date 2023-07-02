#ifndef menContacto_h
#define menContacto_h
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
        MenContacto(int codigo, string miNum, string nom, string num);
        string getTipoMensaje();
        ~MenContacto();
};

#endif