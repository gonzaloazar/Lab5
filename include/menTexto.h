#ifndef menTexto_h
#define menTexto_h
#include "mensaje.h"



class MenTexto : public Mensaje {
    private:
        string texto;
    public:
        void setTexto(string);
        string getTexo();
        MenTexto();
        MenTexto(string cod, Fecha f,string, string texto);
        ~MenTexto();
};

#endif