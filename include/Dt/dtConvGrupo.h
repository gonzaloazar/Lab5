#ifndef dtConvGrupo_h
#define dtConvGrupo_h
#include "dtConversacion.h"
#include <string>
using namespace std;


class DtConvGrupo : public DtConversacion {
    private:
        string nom;
    public:
        void setNom(string);
        string getNom();
        DtConvGrupo();
        DtConvGrupo(int,bool,string);
        ~DtConvGrupo();
};


#endif