#include "../include/conversacion.h"


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


DtMensaje *Conversacion::getDtMensaje(int idMensaje, string num){
    this->mensajes[idMensaje]->setVisto(num);
    string tipoMensaje = this->mensajes[idMensaje]->getTipoMensaje();
    if(tipoMensaje == "foto"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenFoto *men = dynamic_cast<MenFoto*>(miMen);
        DtMenFoto * retorno = new DtMenFoto(men->getCod(),men->getFecha2(),men->getEmisor(),men->getURL(),men->getFormato(),men->getTamanio(),men->getTOpc()); 
        return retorno;//int,string,string,string,string,float,string
    }else if(tipoMensaje == "video"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenVideo *men = dynamic_cast<MenVideo*>(miMen);
        DtMenVideo * retorno = new DtMenVideo(men->getCod(),men->getFecha2(),men->getEmisor(),men->getURL(),men->getDuracion()); 
        return retorno;//int,string,string,string,float
    
    }else if(tipoMensaje == "texto"){
        Mensaje *miMen = this->mensajes[idMensaje];
        MenTexto *men = dynamic_cast<MenTexto*>(miMen);
        DtMenText * retorno = new DtMenText(men->getCod(),men->getFecha2(),men->getEmisor(),men->getTexo()); 
        return retorno; //int,string,string,string
    }else {
        Mensaje *miMen = this->mensajes[idMensaje];
        MenContacto *men = dynamic_cast<MenContacto*>(miMen);
        DtMenCont * retorno = new DtMenCont(men->getCod(),men->getFecha2(),men->getEmisor(),men->getNom(), men->getNum()); 
        return retorno;//int,string,string,string,string
    }
};

map<int, DtMensaje*> Conversacion::getDtMensajes(string num){
    map<int, DtMensaje*> misMensajes;
    for (auto itr = this->mensajes.begin(); itr != this->mensajes.end(); itr++){
        Mensaje *miMen = itr->second;
        if (miMen->getTipoMensaje() == "foto" && !miMen->esFalseVisto(num)){
            MenFoto *men = dynamic_cast<MenFoto*>(miMen);
            DtMenFoto *nuevo = new DtMenFoto(men->getCod(),men->getFecha2(),men->getEmisor(),men->getURL(),men->getFormato(),men->getTamanio(),men->getTOpc());
            misMensajes[men->getCod()] = nuevo;
            miMen->setVisto(num);
        }else if (miMen->getTipoMensaje() == "video" && !miMen->esFalseVisto(num)){
            MenVideo *men = dynamic_cast<MenVideo*>(miMen);
            DtMenVideo *nuevo = new DtMenVideo(men->getCod(),men->getFecha2(),men->getEmisor(),men->getURL(),men->getDuracion());
            misMensajes[men->getCod()] = nuevo;
            miMen->setVisto(num);
        }else if (miMen->getTipoMensaje() == "texto" && !miMen->esFalseVisto(num)){
            MenTexto *men = dynamic_cast<MenTexto*>(miMen);
            DtMenText *nuevo = new DtMenText(men->getCod(),men->getFecha2(),men->getEmisor(),men->getTexo());
            misMensajes[men->getCod()] = nuevo;
            miMen->setVisto(num);
        }else if (miMen->getTipoMensaje() == "contacto" && !miMen->esFalseVisto(num)){
            MenContacto *men = dynamic_cast<MenContacto*>(miMen);
            DtMenCont *nuevo = new DtMenCont(men->getCod(),men->getFecha2(),men->getEmisor(),men->getNom(), men->getNum());
            misMensajes[men->getCod()] = nuevo;
            miMen->setVisto(num);
        }
    }
    return misMensajes;
};

void Conversacion::elimMensaje(int idMensaje, string miNum){
    if(this->mensajes[idMensaje]->esEmisor(miNum)){
        Mensaje *borrar=this->mensajes[idMensaje];
        borrar->~Mensaje();
    }
    else 
        this->mensajes[idMensaje]->setNoVisto(miNum);
    cout << "Mensaje eliminado." << endl;
};

void Conversacion::envMensaje(string num,DtMensaje* mensaje){
    int ultposicion = this->mensajes.size();
    int posicion = ultposicion ++;
    if(mensaje->getTipoMensaje()=="contacto"){
        DtMenCont *men = dynamic_cast<DtMenCont*>(mensaje);
        MenContacto *menCont = new MenContacto(men->getId(),men->getFecha(),num, men->getNom(), men->getNum());
        this->mensajes[posicion] = menCont;
    }else if(mensaje->getTipoMensaje()=="texto"){
        DtMenText *men = dynamic_cast<DtMenText*>(mensaje);
        MenTexto *menText = new MenTexto(men->getId(),men->getFecha(), num, men->getText());
        this->mensajes[posicion] = menText;        
    }else if(mensaje->getTipoMensaje()=="video"){
        DtMenVideo *men = dynamic_cast<DtMenVideo*>(mensaje);
        MenVideo *menVideo = new MenVideo(men->getId(),men->getFecha(),num,men->getURL(),men->getDuracion());
        this->mensajes[posicion] = menVideo;
    }else if(mensaje->getTipoMensaje()=="foto"){
        DtMenFoto *men = dynamic_cast<DtMenFoto*>(mensaje);
        MenFoto *menFoto = new MenFoto(men->getId(),men->getFecha(), num, men->getURL(), men->getFormato(), men->getTamanio(), men->getTextOpc());
        this->mensajes[posicion] = menFoto;
    }
    
}



Conversacion::~Conversacion(){
};