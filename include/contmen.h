#ifndef CONTMEN_H
#define CONTMEN_H
#include "icontmen.h"
using namespace std;

class ContMensaje : public IContMensajes {
    private:
        User *sesion;
        Conversacion *miConv;
    public: 
        ContMensaje(User *);
        ContMensaje();
        void setUser(User*);
        void setConv(int convID);
        User *getUser();
        Conversacion *getConver();
        ~ContMensaje();
        
        DtMensaje *getDtMensaje(int menID);

        virtual DtMensaje *selectMensaje(int idConv, int idMensaje);//Conv-33
        virtual map<int, DtConversacion*> listarConversacionesArch();//User-68
        virtual map<int, DtConversacion*> listarConversacionesAct();//User-88
        virtual bool existeConvAct();//User-108
        virtual int cantConvArchivadas();//User-118
        virtual map<int, DtMensaje*> listarMensajes(int idConversacion);//Conv-66
        virtual void selectConv(int idConv);//En cpp.
        virtual void archivarConv(int idConv);//En cpp.
        void enviarMensaje(int idConv, DtMensaje *mensaje);
        void eliminarMensaje(int idConv, int idMensaje);
        int crearConversacion(string contactoNum);
        virtual map<string, Contacto*> listarContactosSesion();
};

#endif
