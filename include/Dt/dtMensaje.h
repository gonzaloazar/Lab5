#ifndef dtMensaje_h
#define dtMensaje_h 
#include <string>

using namespace std;


class DtMensaje {
    private:
        int id;
        string tipoMesaje;
    public:
        void setId(int);
        void setTipoMensaje(string);
        int getId();
        string getTipoMensaje();
        
        DtMensaje();
        DtMensaje(int);
        ~DtMensaje();
};


#endif