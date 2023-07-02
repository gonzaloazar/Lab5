#ifndef ICONTMEN_H
#define ICONTMEN_H
#include <map>
#include "user.h"
#include "convContacto.h"
#include "convGrupo.h"
#include "menContacto.h"
#include "menFoto.h"
#include "menTexto.h"
#include "menVideo.h"
#include "dtConvCont.h"
#include "dtConvGrupo.h"
#include "dtMenCont.h"
#include "dtMenFoto.h"
#include "dtMenText.h"
#include "dtMenVideo.h"
#include "contacto.h"
using namespace std;


class IContMensajes {
    public:
    //verMensaje
        virtual DtMensaje *selectMensaje(int idConv, int   idMensaje) = 0;
        virtual map<int, DtConversacion*> listarConversacionesArch() = 0;
        virtual bool existeConvAct() = 0;
        virtual int cantConvArchivadas() = 0;
        virtual map<int, DtConversacion*> listarConversacionesAct() = 0;
        virtual map<int, DtMensaje*> listarMensajes(int idConversacion) = 0;
        virtual void selectConv(int idConv) = 0;
        virtual void archivarConv(int idConv) = 0;
    //eliminarMensaje
        virtual void eliminarMensaje(int idConv, int idMensaje) = 0;
    //enviarMensaje
        virtual int crearConversacion(string num) = 0;
        virtual void enviarMensaje(int idConv, DtMensaje *mensaje) = 0;
        virtual map<string, Contacto*> listarContactosSesion() = 0;
};






#endif