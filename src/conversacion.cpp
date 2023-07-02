#include "conversacion.h"


int Conversacion::getId(){
    return this->id;
};

bool Conversacion::estaArchivado(){
    return this->archivado;
};


void Conversacion::setID(int _id){
    this->id = _id;
};

void Conversacion::setArchivado(bool arch){
   this->archivado = arch;
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
    }else if(tipoMensaje == "video"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenVideo *men = dynamic_cast<MenVideo*>(miMen);
        DtMenVideo * retorno = new DtMenVideo(men->getCod(),men->getURL(),men->getDuracion()); 
        return retorno;
    
    }else if(tipoMensaje == "texto"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenTexto *men = dynamic_cast<MenTexto*>(miMen);
        DtMenText * retorno = new DtMenText(men->getCod(),men->getTexo()); 
        return retorno; 
    }else {
        Mensaje *miMen = this->mensajes[idMensaje];
        MenContacto *men = dynamic_cast<MenContacto*>(miMen);
        DtMenCont * retorno = new DtMenCont(men->getCod(),men->getNom(), men->getNum()); 
        return retorno;
    }
};

map<int, DtMensaje*> Conversacion::getDtMensajes(){
    map<int, DtMensaje*> misMensajes;
    for (auto itr = this->mensajes.begin(); itr != this->mensajes.end(); itr++){
        Mensaje *miMen = itr->second;
        if (miMen->getTipoMensaje() == "foto"){
            MenFoto *men = dynamic_cast<MenFoto*>(miMen);
            DtMenFoto *nuevo = new DtMenFoto(men->getCod(),men->getURL(),men->getFormato(),men->getTamanio(),men->getTOpc());
            misMensajes[men->getCod()] = nuevo;
        }else if (miMen->getTipoMensaje() == "video"){
            MenVideo *men = dynamic_cast<MenVideo*>(miMen);
            DtMenVideo *nuevo = new DtMenVideo(men->getCod(),men->getURL(),men->getDuracion());
            misMensajes[men->getCod()] = nuevo;
        }else if (miMen->getTipoMensaje() == "texto"){
            MenTexto *men = dynamic_cast<MenTexto*>(miMen);
            DtMenText *nuevo = new DtMenText(men->getCod(),men->getTexo());
            misMensajes[men->getCod()] = nuevo;
        }else if (miMen->getTipoMensaje() == "contacto"){
            MenContacto *men = dynamic_cast<MenContacto*>(miMen);
            DtMenCont *nuevo = new DtMenCont(men->getCod(),men->getNom(),men->getNum());
            misMensajes[men->getCod()] = nuevo;
        }
    }
    return misMensajes;
};