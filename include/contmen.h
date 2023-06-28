#include "icontmen.h"
using namespace std;

class ContMensaje : public IContMensajes {
    private:
        User *sesion;
        Conversacion *miConv;
    public: 
        ContMensaje(User*);
        void setConv(int convID);
        User *getUser();
        Conversacion *getConver();
        void setConv(int convID);
        ~ContMensaje();
        
        DtMensaje *getDtMensaje(int menID);

        DtMensaje *selectMensaje(int idConv, int idMensaje);//Conv-33
        map<int, DtConversacion*> listarConversacionesArch();//User-68
        bool existeConvAct();//User-86
        int cantConvArchivadas();//User-96
        map<int, DtConversacion*> listarConversacionesAct();
        map<int, DtMensaje*> listarMensajes(int idConversacion);
        void selecConv(int idConv);
};