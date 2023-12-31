#include "../include/contmen.h"
using namespace std;

ContMensaje::ContMensaje(User *a){
    this->miConv = NULL;
    this->sesion = a;
};

ContMensaje::ContMensaje():IContMensajes(){
    this->miConv = NULL;
    this->sesion = NULL;
};
ContMensaje::~ContMensaje(){
    this->miConv = NULL;
    this->sesion = NULL;
};

void ContMensaje::setUser(User *a){
    this->sesion = a;
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
    return this->miConv->getDtMensaje(idMensaje,this->sesion->getNum());
};

DtMensaje *ContMensaje::selectMensaje(int idConv,int idMensaje){
    this->setConv(idConv);
    return this->miConv->getDtMensaje(idMensaje, this->sesion->getNum());
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

map<int, DtMensaje*> ContMensaje::listarMensajes(int idConversacion){
    this->setConv(idConversacion);
    return this->miConv->getDtMensajes(this->sesion->getNum());
};

void ContMensaje::selectConv(int idConv){
    this->setConv(idConv);
    this->miConv->setArchivado(false);
};

void ContMensaje::archivarConv(int idConv){
    this->setConv(idConv);
    this->miConv->setArchivado(true);
};

void ContMensaje::eliminarMensaje(int idConv, int idMensaje){
    this->setConv(idConv);
    this->miConv->elimMensaje(idMensaje,this->sesion->getNum());
};
void ContMensaje::enviarMensaje(int idConv, DtMensaje *mensaje){
    this->setConv(idConv);
    this->miConv->envMensaje(this->getUser()->getNum(), mensaje);
};

int ContMensaje::crearConversacion(string contactoNum){
    int idConv = this->sesion->getSizeConv() + 1;
    this->sesion->crearConv(idConv, contactoNum);
    return idConv;
};

map<string, Contacto*> ContMensaje::listarContactosSesion(){
    return this->sesion->getContactos();
};