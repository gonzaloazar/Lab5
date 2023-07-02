#ifndef dtMensaje_h
#define dtMensaje_h 
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