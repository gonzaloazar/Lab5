#ifndef menFoto_h
#define menFoto_h
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
        MenFoto();
        MenFoto(string codigo, Fecha fecha, string form, float tam, string tOpc);
        ~MenFoto();
};

#endif