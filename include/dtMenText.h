#ifndef DTMENTEXT_H
#define DTMENTEXT_H
#include "dtMensaje.h"



class DtMenText : public DtMensaje {
    private: 
        string text;
    public: 
        void setText(string);
        string getText();
        DtMenText(int,Fecha,string,string);
        string getTipoMensaje();
        ~DtMenText();
        
};

std::ostream& operator<<(std::ostream& os, DtMenText& obj);

#endif