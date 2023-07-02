#ifndef DTMENSAJE_H
#define DTMENSAJE_H
#include <string>

using namespace std;


class DtMensaje {
    private:
        int id;
    public:
        void setId(int);
        int getId();
        virtual string getTipoMensaje() = 0;
        
        DtMensaje();
        DtMensaje(int);
        ~DtMensaje();
};


#endif