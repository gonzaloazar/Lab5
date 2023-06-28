#include "../include/conversacion.h"


int Conversacion::getId(){
    return this->id;
};

bool Conversacion::estaArchivado(){
    return this->archivado;
};

string Conversacion::getTipoConv(){
    return this->tipoConv;
};

void Conversacion::setID(int _id){
    this->id = _id;
};

void Conversacion::setArchivado(bool arch){
   this->archivado = arch;
};

void Conversacion::setTipoConv(string a){
    this->tipoConv = a;
};

Conversacion::Conversacion(int _id,bool _arch){
    setID(_id);
    setArchivado(_arch);
};

DtMensaje *Conversacion::getDtMensaje(int idMensaje){
    string tipoMensaje = this->mensajes[idMensaje]->getTipoMensaje();
    if(tipoMensaje == "foto"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenFoto *men = dynamic_cast<MenFoto*>(miMen);
        DtMenFoto * retorno = new DtMenFoto(men->getCod(),men->getURL(),men->getFormato(),men->getTamanio(),men->getTOpc()); 
        return retorno;
        men = NULL;
        miMen = NULL;
    }else if(tipoMensaje == "video"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenVideo *men = dynamic_cast<MenVideo*>(miMen);
        DtMenVideo * retorno = new DtMenVideo(men->getCod(),men->getURL(),men->getDuracion()); 
        return retorno;
        men = NULL;
        miMen = NULL;
    }else if(tipoMensaje == "texto"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenTexto *men = dynamic_cast<MenTexto*>(miMen);
        DtMenText * retorno = new DtMenText(men->getCod(),men->getTexo()); 
        return retorno; 
        men = NULL;
        miMen = NULL;
    }else if (tipoMensaje == "contacto"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenContacto *men = dynamic_cast<MenContacto*>(miMen);
        DtMenCont * retorno = new DtMenCont(men->getCod(),men->getNom(), men->getNum()); 
        return retorno;
        men = NULL;
        miMen = NULL;
    }
}
