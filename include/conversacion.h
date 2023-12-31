#ifndef CONVERSACION_H
#define CONVERSACION_H
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
        map<int, Mensaje*> mensajes;
    public:
    Conversacion(int unId, bool estArchivado);
    int getId();
    virtual string getTipoConv() = 0;
    bool estaArchivado();
    void setID(int);
    void setArchivado(bool);;
    ~Conversacion();
    DtMensaje *getDtMensaje(int idMensaje, string num);
    map<int, DtMensaje*> getDtMensajes(string num);
    void envMensaje(string num, DtMensaje *mensaje);
    void elimMensaje(int idMensaje, string miNum);
};
#endif
