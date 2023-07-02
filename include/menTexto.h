#ifndef MENTEXTO_H
#define MENTEXTO_H
#include "mensaje.h"



class MenTexto : public Mensaje {
    private:
        string texto;
    public:
        void setTexto(string);
        string getTexo();
        MenTexto();
        MenTexto(int cod, string nom, string texto);
        string getTipoMensaje();
        ~MenTexto();
};

#endif