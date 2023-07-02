#ifndef DTMENMULTIMEDIA_H
#define DTMENMULTIMEDIA_H
#include "dtMensaje.h"



class DtMenMultimedia : public DtMensaje {
    private:
        string url;
    public:
        void setURL(string);
        string getURL();
        DtMenMultimedia(int,Fecha,string,string);
        ~DtMenMultimedia();
};


#endif