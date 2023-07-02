#ifndef DTMENCONT_H
#define DTMENCONT_H
#include "dtMensaje.h"

using namespace std;

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
        DtMenCont(int,string,string);
        ~DtMenCont();
};
std::ostream& operator<<(std::ostream& os, DtMenCont& obj);


#endif