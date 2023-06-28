#ifndef dtConversacion_h
#define dtConversacion_h
#include <string>
using namespace std;


class DtConversacion {
    private:
        int id;
        bool estaArch;
    public:
        void setId(int);
        void setEstaArch(bool);
        int getId();
        bool getEstaArch();
        DtConversacion();
        DtConversacion(int,bool);
        ~DtConversacion();
};


#endif