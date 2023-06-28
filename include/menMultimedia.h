#ifndef menMultimedia_h
#define menMultimedia_h
#include "mensaje.h"


class MenMultimedia : public Mensaje{
    private:
        string url;
    public:
        void setURL(string);
        string getURL();
        MenMultimedia();
        MenMultimedia(string codigo, Fecha fecha, string url);
        ~MenMultimedia();
};

#endif