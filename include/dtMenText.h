#ifndef dtMenText_h
#define dtMenText_h
#include "dtMensaje.h"

using namespace std;


class DtMenText : public DtMensaje {
    private: 
        string text;
    public: 
        void setText(string);
        string getText();
        DtMenText(int,string);
        string getTipoMensaje();
        ~DtMenText();
};

std::ostream& operator<<(std::ostream& os, DtMenText& obj);

#endif