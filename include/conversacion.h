#ifndef conversacion_h
#define conversacion_h
#include <iostream>
#include <map>
#include "menContacto.h"
#include "menTexto.h"
#include "menFoto.h"
#include "menVideo.h"
#include "dtMenCont.h"
#include "dtMenFoto.h"
#include "dtMenText.h"
#include "dtMenVideo.h"

using namespace std;

class Conversacion {
    private:
        int id;
        bool archivado;
        string tipoConv;
        map<int, Mensaje*> mensajes;
    public:
    Conversacion(int unId, bool estArchivado);
    int getId();
    string getTipoConv();
    bool estaArchivado();
    void setID(int);
    void setArchivado(bool);
    void setTipoConv(string);
    ~Conversacion();
    DtMensaje *getDtMensaje(int idMensaje);
    map<int, DtMensaje*> getDtMensajes();
};
#endif
