#ifndef dtConvCont_h
#define  dtConvCont_h
#include "dtConversacion.h"
#include <string>
using namespace std;

class DtConvCont : public DtConversacion {
    public:
        string nom;
        string num;
        void setNom(string);
        void setNum(string);
        string getNum();
        string getNom();
        string getUrl();
        DtConvCont();
        DtConvCont(int,bool,string,string);
        ~DtConvCont();
};

std::ostream& operator<<(std::ostream& os, DtConvCont& obj);



#endif