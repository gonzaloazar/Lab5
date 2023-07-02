#ifndef dtConvCont_h
#define  dtConvCont_h
#include "dtConversacion.h"
#include <string>
using namespace std;

class DtConvCont : public DtConversacion {
    public:
        string nom;
        int num;
        void setNom(string);
        void setNum(int);
        int getNum();
        string getNom();
        string getUrl();
        DtConvCont();
        DtConvCont(int,bool,string,int);
        ~DtConvCont();
        string getTipoConv();
};

std::ostream& operator<<(std::ostream& os, DtConvCont &obj);



#endif