#ifndef dtMenFoto_h
#define dtMenFoto_h
#include "dtMenMultimedia.h"
using namespace std;

class DtMenFoto : public DtMenMultimedia {
    private:
        string formato;
        float tamanio;
        string textOpc;
    public:
        void setFormato(string);
        void setTamanio(float);
        void setTextOpc(string);
        string getFormato();
        float getTamanio();
        string getTextOpc();
        DtMenFoto(int,string,string,float,string);
        string getTipoMensaje();
        ~DtMenFoto();
};
std::ostream& operator<<(std::ostream& os, DtMenFoto& obj);


#endif