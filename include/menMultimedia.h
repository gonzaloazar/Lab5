#ifndef MENMULTIMEDIA_H
#define MENMULTIMEDIA_H
#include "mensaje.h"


class MenMultimedia : public Mensaje{
    private:
        string url;
    public:
        void setURL(string);
        string getURL();
        MenMultimedia(int codigo, string miNum, string url);
        ~MenMultimedia();
};

#endif