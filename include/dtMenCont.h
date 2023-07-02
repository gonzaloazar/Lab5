#ifndef DTMENCONT_H
#define DTMENCONT_H
#include "dtMensaje.h"

class DtMenCont : public DtMensaje {
    private: 
        string num;
        string nom;
    public:
        void setNum(string);
        void setNom(string);
        string getNum();
        string getNom();
        string getTipoMensaje();
        DtMenCont(int,Fecha,string,string,string);
        ~DtMenCont();
};
std::ostream& operator<<(std::ostream& os, DtMenCont& obj);


#endif