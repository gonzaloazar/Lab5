#ifndef dtConvCont_h
#define  dtConvCont_h
#include "dtConversacion.h"
#include <string>
using namespace std;

class DtConvCont : public DtConversacion {
    public:
        string nom;
        void setNom(string);
        string getNum();
        string getNom();
        DtConvCont();
        DtConvCont(int,bool,string,string);
        ~DtConvCont();
};

std::ostream& operator<<(std::ostream& os, DtConvCont& obj);



#endif