#ifndef DTCONVCONT_H
#define DTCONVCONT_H
#include "dtConversacion.h"


class DtConvCont : public DtConversacion {
    private:
        string nom;
        string num;
    public:
        void setNom(string);
        void setNum(string);
        string getNum();
        string getNom();
        DtConvCont();
        DtConvCont(int,bool,string,string);
        ~DtConvCont();
        string getTipoConv();
};

std::ostream& operator<<(std::ostream& os, DtConvCont &obj);



#endif