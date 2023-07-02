#ifndef DTCONVGRUPO_H
#define DTCONVGRUPO_H
#include "dtConversacion.h"
#include "fecha.h"



class DtConvGrupo : public DtConversacion {
    private:
        string nom;
        string url;
        Fecha creacion;
    public:
        void setNom(string);
        void setUrl(string);
        void setFecha(Fecha);
        string getNom();
        string getUrl();
        Fecha getFecha();
        DtConvGrupo();
        DtConvGrupo(int,bool,string,string,Fecha);
        string getTipoConv();
        ~DtConvGrupo();
};

std::ostream& operator<<(std::ostream& os, DtConvGrupo& obj);

#endif