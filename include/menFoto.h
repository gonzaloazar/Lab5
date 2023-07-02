#ifndef MENFOTO_H
#define MENFOTO_H
#include "menMultimedia.h"

class MenFoto : public MenMultimedia {
    private:
        string formato;
        float tamanio;
        string textOpcional;
    public:
        void setFormato(string);
        void setTamanio(float);
        void setTOpc(string);
        string getFormato();
        float getTamanio();
        string getTOpc();
        MenFoto(int codigo, string miNum, string url,string form, float tam, string tOpc);
        string getTipoMensaje();
        ~MenFoto();
};

#endif