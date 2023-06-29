#ifndef dtConvCont_h
#define  dtConvCont_h
#include "dtConversacion.h"
#include <string>
using namespace std;

class DtConvCont : public DtConversacion {
    private:
        string nom;
        int num;
    public:
        void setNum(int);
        void setNom(string);
        int getNum();
        string getNom();
        DtConvCont();
        DtConvCont(int,bool,string,int);
        ~DtConvCont();
};

std::ostream& operator<<(std::ostream& os, DtConvCont& obj);



#endif