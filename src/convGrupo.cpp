#include "convGrupo.h"


void ConvGrupo::setNombre(string _nombre){
    this->nombre=_nombre;
};
void ConvGrupo::setURL(string _url){
    this->url = _url;
};
string ConvGrupo::getNombre(){
    return this->nombre;
};
string ConvGrupo::getURL(){
    return this->url;
};
Fecha ConvGrupo::getFecha(){
    return this->creacion;
};
ConvGrupo::ConvGrupo(int id,bool estaarchivado,string _nombre,string newURL,map<string, bool> *partAdm):Conversacion(id, estaarchivado){
    this->nombre = _nombre;
    this->url = newURL;
    this->participantesAdmin = partAdm;
    this->creacion.actualizarFecha();
    this->setTipoConv("grupo");
};
