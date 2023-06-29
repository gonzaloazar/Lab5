#ifndef contmen_h
#define contmen_h 
#include "icontmen.h"
using namespace std;

class ContMensaje : public IContMensajes {
    private:
        User *sesion = NULL;
        Conversacion *miConv = NULL;
    public: 
        ContMensaje();
        void setUser(User*);
        void setConv(int convID);
        User *getUser();
        Conversacion *getConver();
        void setConv(int convID);
        ~ContMensaje();
        
        DtMensaje *getDtMensaje(int menID);

        DtMensaje *selectMensaje(int idConv, int idMensaje);//Conv-33
        map<int, DtConversacion*> listarConversacionesArch();//User-68
        map<int, DtConversacion*> listarConversacionesAct();//User-88
        bool existeConvAct();//User-108
        int cantConvArchivadas();//User-118
        map<int, DtMensaje*> listarMensajes(int idConversacion);//Conv-66
        void selectConv(int idConv);//En cpp.
};

#endif