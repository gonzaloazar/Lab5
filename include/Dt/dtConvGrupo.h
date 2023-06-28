#ifndef dtConvGrupo_h
#define dtConvGrupo_h
#include "dtConversacion.h"
#include "fecha.h"
#include <string>
using namespace std;


class DtConvGrupo : public DtConversacion {
    private:
        string nom;
        string url;
        Fecha creacion;
    public:
        void setNom(string);
        string getNom();
        DtConvGrupo();
        DtConvGrupo(int,bool,string,string,Fecha);
        ~DtConvGrupo();
};


#endif