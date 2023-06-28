#ifndef dtConversacion_h
#define dtConversacion_h
#include <string>
using namespace std;


class DtConversacion {
    private:
        int id;
        bool estaArch;
        string tipoConv;
    public:
        void setTipoConv(string);
        void setId(int);
        void setEstaArch(bool);
        string getTipoConv();
        int getId();
        bool getEstaArch();
        DtConversacion();
        DtConversacion(int,bool);
        ~DtConversacion();
};


#endif