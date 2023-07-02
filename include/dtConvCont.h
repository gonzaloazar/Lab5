#ifndef DTCONVCONT_H
#define DTCONVCONT_H
#include "dtConversacion.h"


class DtConvCont : public DtConversacion {
    public:
        string nom;
        int num;
        void setNom(string);
        void setNum(int);
        int getNum();
        string getNom();
        //string getUrl();
        DtConvCont();
        DtConvCont(int,bool,string,int);
        ~DtConvCont();
        string getTipoConv();
};

std::ostream& operator<<(std::ostream& os, DtConvCont &obj);



#endif