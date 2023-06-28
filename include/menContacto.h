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
        MenContacto();
        MenContacto(string codigo, Fecha fecha, string nom, string num);
        ~MenContacto();
};

#endif