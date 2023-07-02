#ifndef DTMENMULTIMEDIA_H
#define DTMENMULTIMEDIA_H
#include "dtMensaje.h"

using namespace std;


class DtMenMultimedia : public DtMensaje {
    private:
        string url;
    public:
        void setURL(string);
        string getURL();
        DtMenMultimedia(int,string);
        ~DtMenMultimedia();
};
std::ostream& operator<<(std::ostream& os, DtMenMultimedia& obj);


#endif