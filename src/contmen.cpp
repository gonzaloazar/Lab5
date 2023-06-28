#include "contmen.h"
using namespace std;


ContMensaje::ContMensaje(User *m):IContMensajes(){
    this->sesion = m;
};

void ContMensaje::setConv(int convID){
    this->miConv = this->sesion->getConv(convID);
};

User *ContMensaje::getUser(){
    return this->sesion;
};

Conversacion *ContMensaje::getConver(){
    return this->miConv;
};

DtMensaje *ContMensaje::getDtMensaje(int idMensaje){
    return this->miConv->getDtMensaje(idMensaje);
};

DtMensaje *ContMensaje::selectMensaje(int idConv,int idMensaje){
    this->setConv(idConv);
    return this->miConv->getDtMensaje(idMensaje);
};

map<int, DtConversacion*> ContMensaje::listarConversacionesAct(){
    return this->sesion->getConversacionesAct();
};

bool ContMensaje::existeConvAct(){
    return this->sesion->existeConvActiva();
};

int ContMensaje::cantConvArchivadas(){
    return this->sesion->cantConvArch();
};

map<int, DtConversacion*> ContMensaje::listarConversacionesArch(){
    return this->sesion->getConvsacionesArch();
};