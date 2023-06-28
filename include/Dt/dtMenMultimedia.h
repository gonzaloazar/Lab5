#ifndef dtMenMultimedia_h
#define dtMenMultimedia_h 
#include "dtMensaje.h"

using namespace std;


class DtMenMultimedia : public DtMensaje {
    private:
        string url;
    public:
        void setURL(string);
        string getURL();
        DtMenMultimedia();
        DtMenMultimedia(int,string);
        ~DtMenMultimedia();
};


#endif