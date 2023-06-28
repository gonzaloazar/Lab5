#ifndef menMultimedia_h
#define menMultimedia_h
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